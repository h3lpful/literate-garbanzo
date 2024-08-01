cmake_minimum_required(VERSION 3.28)
set(PROJECT "cpproto")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/toolchain.cmake")
project(${PROJECT} LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(PROTO_INPUT ${CMAKE_CURRENT_SOURCE_DIR}/proto)
set(PROTO_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/protosrc)

##############

set(CMAKE_CXX_FLAGS "-Os -fno-rtti -ffunction-sections -fdata-sections -fno-exceptions -DNDEBUG")
set(CMAKE_CXX_LINKER_FLAGS "-Wl,--gc-sections")

##############

file(REMOVE_RECURSE ${PROTO_OUTPUT}/**)
file(GLOB_RECURSE PROTO_SRC ${PROTO_INPUT}/*.capnp)
execute_process(COMMAND capnp compile --src-prefix ${PROTO_INPUT} ${PROTO_SRC} -oc++:${PROTO_OUTPUT}/)
file(GLOB_RECURSE SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cc ${PROTO_OUTPUT}/*.c++)

include(FetchContent)
set(BUILD_TESTING OFF CACHE BOOL "No do this")
set(CAPNP_LITE ON CACHE BOOL "YEs light plz")
set(CAPNP "capnp")
set(CAPNP_GIT_URL "https://github.com/capnproto/capnproto.git")
FetchContent_Declare(
    ${CAPNP}
    GIT_REPOSITORY ${CAPNP_GIT_URL}
    GIT_TAG "v1.0.2"
    CONFIGURE_COMMAND "-DCAPNP_LITE=ON -DBUILD_TESTING=OFF"
    BUILD_COMMAND "-DCAPNP_LITE=ON -DBUILD_TESTING=OFF"
    INSTALL_COMMAND ""
)
FetchContent_MakeAvailable(${CAPNP})



add_executable(${PROJECT} ${SOURCE})
add_dependencies(${PROJECT} ${CAPNP})

target_include_directories(${PROJECT} PUBLIC ${PROTO_OUTPUT} ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${PROJECT} PUBLIC capnp kj)

target_link_options(${PROJECT} PUBLIC "--static")
target_link_options(${PROJECT} PUBLIC "-Wl,--wrap=strerror")
target_link_options(${PROJECT} PUBLIC "-Wl,--gc-sections")
target_link_options(${PROJECT} PUBLIC "-s")
