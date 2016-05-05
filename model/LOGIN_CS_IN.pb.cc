// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LOGIN_CS_IN.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "LOGIN_CS_IN.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Login {

namespace {

const ::google::protobuf::Descriptor* Login_CS_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Login_CS_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_LOGIN_5fCS_5fIN_2eproto() {
  protobuf_AddDesc_LOGIN_5fCS_5fIN_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "LOGIN_CS_IN.proto");
  GOOGLE_CHECK(file != NULL);
  Login_CS_descriptor_ = file->message_type(0);
  static const int Login_CS_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Login_CS, username_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Login_CS, userpassword_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Login_CS, isercettype_),
  };
  Login_CS_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Login_CS_descriptor_,
      Login_CS::default_instance_,
      Login_CS_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Login_CS, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Login_CS, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Login_CS));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_LOGIN_5fCS_5fIN_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Login_CS_descriptor_, &Login_CS::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_LOGIN_5fCS_5fIN_2eproto() {
  delete Login_CS::default_instance_;
  delete Login_CS_reflection_;
}

void protobuf_AddDesc_LOGIN_5fCS_5fIN_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021LOGIN_CS_IN.proto\022\005Login\"G\n\010Login_CS\022\020"
    "\n\010username\030\001 \002(\t\022\024\n\014userPassWord\030\002 \002(\t\022\023"
    "\n\013iSercetType\030\003 \002(\005", 99);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "LOGIN_CS_IN.proto", &protobuf_RegisterTypes);
  Login_CS::default_instance_ = new Login_CS();
  Login_CS::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_LOGIN_5fCS_5fIN_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_LOGIN_5fCS_5fIN_2eproto {
  StaticDescriptorInitializer_LOGIN_5fCS_5fIN_2eproto() {
    protobuf_AddDesc_LOGIN_5fCS_5fIN_2eproto();
  }
} static_descriptor_initializer_LOGIN_5fCS_5fIN_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Login_CS::kUsernameFieldNumber;
const int Login_CS::kUserPassWordFieldNumber;
const int Login_CS::kISercetTypeFieldNumber;
#endif  // !_MSC_VER

Login_CS::Login_CS()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Login_CS::InitAsDefaultInstance() {
}

Login_CS::Login_CS(const Login_CS& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Login_CS::SharedCtor() {
  _cached_size_ = 0;
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  userpassword_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  isercettype_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Login_CS::~Login_CS() {
  SharedDtor();
}

void Login_CS::SharedDtor() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (userpassword_ != &::google::protobuf::internal::kEmptyString) {
    delete userpassword_;
  }
  if (this != default_instance_) {
  }
}

void Login_CS::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Login_CS::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Login_CS_descriptor_;
}

const Login_CS& Login_CS::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LOGIN_5fCS_5fIN_2eproto();
  return *default_instance_;
}

Login_CS* Login_CS::default_instance_ = NULL;

Login_CS* Login_CS::New() const {
  return new Login_CS;
}

void Login_CS::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::kEmptyString) {
        username_->clear();
      }
    }
    if (has_userpassword()) {
      if (userpassword_ != &::google::protobuf::internal::kEmptyString) {
        userpassword_->clear();
      }
    }
    isercettype_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Login_CS::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string username = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->username().data(), this->username().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_userPassWord;
        break;
      }

      // required string userPassWord = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_userPassWord:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_userpassword()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->userpassword().data(), this->userpassword().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_iSercetType;
        break;
      }

      // required int32 iSercetType = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_iSercetType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &isercettype_)));
          set_has_isercettype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Login_CS::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->username(), output);
  }

  // required string userPassWord = 2;
  if (has_userpassword()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->userpassword().data(), this->userpassword().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->userpassword(), output);
  }

  // required int32 iSercetType = 3;
  if (has_isercettype()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->isercettype(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Login_CS::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->username(), target);
  }

  // required string userPassWord = 2;
  if (has_userpassword()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->userpassword().data(), this->userpassword().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->userpassword(), target);
  }

  // required int32 iSercetType = 3;
  if (has_isercettype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->isercettype(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Login_CS::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string username = 1;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }

    // required string userPassWord = 2;
    if (has_userpassword()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->userpassword());
    }

    // required int32 iSercetType = 3;
    if (has_isercettype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->isercettype());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Login_CS::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Login_CS* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Login_CS*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Login_CS::MergeFrom(const Login_CS& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_username()) {
      set_username(from.username());
    }
    if (from.has_userpassword()) {
      set_userpassword(from.userpassword());
    }
    if (from.has_isercettype()) {
      set_isercettype(from.isercettype());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Login_CS::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Login_CS::CopyFrom(const Login_CS& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Login_CS::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void Login_CS::Swap(Login_CS* other) {
  if (other != this) {
    std::swap(username_, other->username_);
    std::swap(userpassword_, other->userpassword_);
    std::swap(isercettype_, other->isercettype_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Login_CS::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Login_CS_descriptor_;
  metadata.reflection = Login_CS_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Login

// @@protoc_insertion_point(global_scope)