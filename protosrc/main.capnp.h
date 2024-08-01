// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: main.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#ifndef CAPNP_VERSION
#error "CAPNP_VERSION is not defined, is capnp/generated-header-support.h missing?"
#elif CAPNP_VERSION != 1000002
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


CAPNP_BEGIN_HEADER

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(d76106efb3ff757b);
CAPNP_DECLARE_SCHEMA(81d73a8dca0638eb);
CAPNP_DECLARE_SCHEMA(b472231a963d684c);
CAPNP_DECLARE_SCHEMA(ccc8f86e618b7bff);
CAPNP_DECLARE_SCHEMA(fc686662c682f775);

}  // namespace schemas
}  // namespace capnp


struct SockAddrIn {
  SockAddrIn() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(d76106efb3ff757b, 1, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct SockAddrInSix {
  SockAddrInSix() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(81d73a8dca0638eb, 1, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct Message {
  Message() = delete;

  class Reader;
  class Builder;
  class Pipeline;
  struct Address;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(b472231a963d684c, 1, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct Message::Address {
  Address() = delete;

  class Reader;
  class Builder;
  class Pipeline;
  enum Which: uint16_t {
    INADDR,
    IN6ADDR,
  };

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(ccc8f86e618b7bff, 1, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct MessageList {
  MessageList() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(fc686662c682f775, 0, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class SockAddrIn::Reader {
public:
  typedef SockAddrIn Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline  ::uint32_t getAddress() const;

  inline  ::uint16_t getPort() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class SockAddrIn::Builder {
public:
  typedef SockAddrIn Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::uint32_t getAddress();
  inline void setAddress( ::uint32_t value);

  inline  ::uint16_t getPort();
  inline void setPort( ::uint16_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class SockAddrIn::Pipeline {
public:
  typedef SockAddrIn Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class SockAddrInSix::Reader {
public:
  typedef SockAddrInSix Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasAddress() const;
  inline  ::capnp::Data::Reader getAddress() const;

  inline  ::uint16_t getPort() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class SockAddrInSix::Builder {
public:
  typedef SockAddrInSix Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasAddress();
  inline  ::capnp::Data::Builder getAddress();
  inline void setAddress( ::capnp::Data::Reader value);
  inline  ::capnp::Data::Builder initAddress(unsigned int size);
  inline void adoptAddress(::capnp::Orphan< ::capnp::Data>&& value);
  inline ::capnp::Orphan< ::capnp::Data> disownAddress();

  inline  ::uint16_t getPort();
  inline void setPort( ::uint16_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class SockAddrInSix::Pipeline {
public:
  typedef SockAddrInSix Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class Message::Reader {
public:
  typedef Message Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline  ::uint32_t getMessageId() const;

  inline typename Address::Reader getAddress() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Message::Builder {
public:
  typedef Message Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::uint32_t getMessageId();
  inline void setMessageId( ::uint32_t value);

  inline typename Address::Builder getAddress();
  inline typename Address::Builder initAddress();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Message::Pipeline {
public:
  typedef Message Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline typename Address::Pipeline getAddress();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class Message::Address::Reader {
public:
  typedef Address Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline Which which() const;
  inline bool isInaddr() const;
  inline bool hasInaddr() const;
  inline  ::SockAddrIn::Reader getInaddr() const;

  inline bool isIn6addr() const;
  inline bool hasIn6addr() const;
  inline  ::SockAddrInSix::Reader getIn6addr() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Message::Address::Builder {
public:
  typedef Address Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline Which which();
  inline bool isInaddr();
  inline bool hasInaddr();
  inline  ::SockAddrIn::Builder getInaddr();
  inline void setInaddr( ::SockAddrIn::Reader value);
  inline  ::SockAddrIn::Builder initInaddr();
  inline void adoptInaddr(::capnp::Orphan< ::SockAddrIn>&& value);
  inline ::capnp::Orphan< ::SockAddrIn> disownInaddr();

  inline bool isIn6addr();
  inline bool hasIn6addr();
  inline  ::SockAddrInSix::Builder getIn6addr();
  inline void setIn6addr( ::SockAddrInSix::Reader value);
  inline  ::SockAddrInSix::Builder initIn6addr();
  inline void adoptIn6addr(::capnp::Orphan< ::SockAddrInSix>&& value);
  inline ::capnp::Orphan< ::SockAddrInSix> disownIn6addr();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Message::Address::Pipeline {
public:
  typedef Address Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class MessageList::Reader {
public:
  typedef MessageList Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasMessages() const;
  inline  ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>::Reader getMessages() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class MessageList::Builder {
public:
  typedef MessageList Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasMessages();
  inline  ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>::Builder getMessages();
  inline void setMessages( ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>::Reader value);
  inline  ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>::Builder initMessages(unsigned int size);
  inline void adoptMessages(::capnp::Orphan< ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>> disownMessages();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class MessageList::Pipeline {
public:
  typedef MessageList Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline  ::uint32_t SockAddrIn::Reader::getAddress() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t SockAddrIn::Builder::getAddress() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void SockAddrIn::Builder::setAddress( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline  ::uint16_t SockAddrIn::Reader::getPort() const {
  return _reader.getDataField< ::uint16_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline  ::uint16_t SockAddrIn::Builder::getPort() {
  return _builder.getDataField< ::uint16_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void SockAddrIn::Builder::setPort( ::uint16_t value) {
  _builder.setDataField< ::uint16_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline bool SockAddrInSix::Reader::hasAddress() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool SockAddrInSix::Builder::hasAddress() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Data::Reader SockAddrInSix::Reader::getAddress() const {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Data::Builder SockAddrInSix::Builder::getAddress() {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void SockAddrInSix::Builder::setAddress( ::capnp::Data::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Data>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Data::Builder SockAddrInSix::Builder::initAddress(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void SockAddrInSix::Builder::adoptAddress(
    ::capnp::Orphan< ::capnp::Data>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Data>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Data> SockAddrInSix::Builder::disownAddress() {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline  ::uint16_t SockAddrInSix::Reader::getPort() const {
  return _reader.getDataField< ::uint16_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint16_t SockAddrInSix::Builder::getPort() {
  return _builder.getDataField< ::uint16_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void SockAddrInSix::Builder::setPort( ::uint16_t value) {
  _builder.setDataField< ::uint16_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline  ::uint32_t Message::Reader::getMessageId() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t Message::Builder::getMessageId() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void Message::Builder::setMessageId( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline typename Message::Address::Reader Message::Reader::getAddress() const {
  return typename Message::Address::Reader(_reader);
}
inline typename Message::Address::Builder Message::Builder::getAddress() {
  return typename Message::Address::Builder(_builder);
}
#if !CAPNP_LITE
inline typename Message::Address::Pipeline Message::Pipeline::getAddress() {
  return typename Message::Address::Pipeline(_typeless.noop());
}
#endif  // !CAPNP_LITE
inline typename Message::Address::Builder Message::Builder::initAddress() {
  _builder.setDataField< ::uint16_t>(::capnp::bounded<2>() * ::capnp::ELEMENTS, 0);
  _builder.getPointerField(::capnp::bounded<0>() * ::capnp::POINTERS).clear();
  return typename Message::Address::Builder(_builder);
}
inline  ::Message::Address::Which Message::Address::Reader::which() const {
  return _reader.getDataField<Which>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline  ::Message::Address::Which Message::Address::Builder::which() {
  return _builder.getDataField<Which>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline bool Message::Address::Reader::isInaddr() const {
  return which() == Message::Address::INADDR;
}
inline bool Message::Address::Builder::isInaddr() {
  return which() == Message::Address::INADDR;
}
inline bool Message::Address::Reader::hasInaddr() const {
  if (which() != Message::Address::INADDR) return false;
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Message::Address::Builder::hasInaddr() {
  if (which() != Message::Address::INADDR) return false;
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::SockAddrIn::Reader Message::Address::Reader::getInaddr() const {
  KJ_IREQUIRE((which() == Message::Address::INADDR),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::SockAddrIn>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::SockAddrIn::Builder Message::Address::Builder::getInaddr() {
  KJ_IREQUIRE((which() == Message::Address::INADDR),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::SockAddrIn>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Message::Address::Builder::setInaddr( ::SockAddrIn::Reader value) {
  _builder.setDataField<Message::Address::Which>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, Message::Address::INADDR);
  ::capnp::_::PointerHelpers< ::SockAddrIn>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::SockAddrIn::Builder Message::Address::Builder::initInaddr() {
  _builder.setDataField<Message::Address::Which>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, Message::Address::INADDR);
  return ::capnp::_::PointerHelpers< ::SockAddrIn>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Message::Address::Builder::adoptInaddr(
    ::capnp::Orphan< ::SockAddrIn>&& value) {
  _builder.setDataField<Message::Address::Which>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, Message::Address::INADDR);
  ::capnp::_::PointerHelpers< ::SockAddrIn>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::SockAddrIn> Message::Address::Builder::disownInaddr() {
  KJ_IREQUIRE((which() == Message::Address::INADDR),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::SockAddrIn>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool Message::Address::Reader::isIn6addr() const {
  return which() == Message::Address::IN6ADDR;
}
inline bool Message::Address::Builder::isIn6addr() {
  return which() == Message::Address::IN6ADDR;
}
inline bool Message::Address::Reader::hasIn6addr() const {
  if (which() != Message::Address::IN6ADDR) return false;
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Message::Address::Builder::hasIn6addr() {
  if (which() != Message::Address::IN6ADDR) return false;
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::SockAddrInSix::Reader Message::Address::Reader::getIn6addr() const {
  KJ_IREQUIRE((which() == Message::Address::IN6ADDR),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::SockAddrInSix>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::SockAddrInSix::Builder Message::Address::Builder::getIn6addr() {
  KJ_IREQUIRE((which() == Message::Address::IN6ADDR),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::SockAddrInSix>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Message::Address::Builder::setIn6addr( ::SockAddrInSix::Reader value) {
  _builder.setDataField<Message::Address::Which>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, Message::Address::IN6ADDR);
  ::capnp::_::PointerHelpers< ::SockAddrInSix>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::SockAddrInSix::Builder Message::Address::Builder::initIn6addr() {
  _builder.setDataField<Message::Address::Which>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, Message::Address::IN6ADDR);
  return ::capnp::_::PointerHelpers< ::SockAddrInSix>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Message::Address::Builder::adoptIn6addr(
    ::capnp::Orphan< ::SockAddrInSix>&& value) {
  _builder.setDataField<Message::Address::Which>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, Message::Address::IN6ADDR);
  ::capnp::_::PointerHelpers< ::SockAddrInSix>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::SockAddrInSix> Message::Address::Builder::disownIn6addr() {
  KJ_IREQUIRE((which() == Message::Address::IN6ADDR),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::SockAddrInSix>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool MessageList::Reader::hasMessages() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool MessageList::Builder::hasMessages() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>::Reader MessageList::Reader::getMessages() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>::Builder MessageList::Builder::getMessages() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void MessageList::Builder::setMessages( ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>::Builder MessageList::Builder::initMessages(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void MessageList::Builder::adoptMessages(
    ::capnp::Orphan< ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>> MessageList::Builder::disownMessages() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Message,  ::capnp::Kind::STRUCT>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}


CAPNP_END_HEADER

