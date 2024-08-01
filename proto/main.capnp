@0xcd1d1e6d0c5fe68e;

struct SockAddrIn @0xd76106efb3ff757b {
    address @0 : UInt32;
    port @1 : UInt16;
}

struct SockAddrInSix @0x81d73a8dca0638eb {
    address @0 : Data;
    port @1 : UInt16;
}

struct Message @0xb472231a963d684c {
    messageId @0 : UInt32;
    address : union {
        inaddr @1 : SockAddrIn;
        in6addr @2 : SockAddrInSix;
    }
}

struct MessageList @0xfc686662c682f775 {
    messages @0 : List(Message);
}