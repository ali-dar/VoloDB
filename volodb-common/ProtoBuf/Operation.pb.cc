// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Operation.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Operation.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* StoreInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StoreInfo_reflection_ = NULL;
const ::google::protobuf::Descriptor* Operation_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Operation_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Operation_2eproto() {
  protobuf_AddDesc_Operation_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Operation.proto");
  GOOGLE_CHECK(file != NULL);
  StoreInfo_descriptor_ = file->message_type(0);
  static const int StoreInfo_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StoreInfo, store_name_),
  };
  StoreInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      StoreInfo_descriptor_,
      StoreInfo::default_instance_,
      StoreInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StoreInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StoreInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(StoreInfo));
  Operation_descriptor_ = file->message_type(1);
  static const int Operation_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, store_info_),
  };
  Operation_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Operation_descriptor_,
      Operation::default_instance_,
      Operation_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Operation));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Operation_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    StoreInfo_descriptor_, &StoreInfo::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Operation_descriptor_, &Operation::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Operation_2eproto() {
  delete StoreInfo::default_instance_;
  delete StoreInfo_reflection_;
  delete Operation::default_instance_;
  delete Operation_reflection_;
}

void protobuf_AddDesc_Operation_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017Operation.proto\"\037\n\tStoreInfo\022\022\n\nstore_"
    "name\030\002 \002(\t\"+\n\tOperation\022\036\n\nstore_info\030\001 "
    "\003(\0132\n.StoreInfo", 95);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Operation.proto", &protobuf_RegisterTypes);
  StoreInfo::default_instance_ = new StoreInfo();
  Operation::default_instance_ = new Operation();
  StoreInfo::default_instance_->InitAsDefaultInstance();
  Operation::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Operation_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Operation_2eproto {
  StaticDescriptorInitializer_Operation_2eproto() {
    protobuf_AddDesc_Operation_2eproto();
  }
} static_descriptor_initializer_Operation_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int StoreInfo::kStoreNameFieldNumber;
#endif  // !_MSC_VER

StoreInfo::StoreInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:StoreInfo)
}

void StoreInfo::InitAsDefaultInstance() {
}

StoreInfo::StoreInfo(const StoreInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:StoreInfo)
}

void StoreInfo::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  store_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

StoreInfo::~StoreInfo() {
  // @@protoc_insertion_point(destructor:StoreInfo)
  SharedDtor();
}

void StoreInfo::SharedDtor() {
  if (store_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete store_name_;
  }
  if (this != default_instance_) {
  }
}

void StoreInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StoreInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StoreInfo_descriptor_;
}

const StoreInfo& StoreInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Operation_2eproto();
  return *default_instance_;
}

StoreInfo* StoreInfo::default_instance_ = NULL;

StoreInfo* StoreInfo::New() const {
  return new StoreInfo;
}

void StoreInfo::Clear() {
  if (has_store_name()) {
    if (store_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      store_name_->clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool StoreInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:StoreInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string store_name = 2;
      case 2: {
        if (tag == 18) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_store_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->store_name().data(), this->store_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "store_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:StoreInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:StoreInfo)
  return false;
#undef DO_
}

void StoreInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:StoreInfo)
  // required string store_name = 2;
  if (has_store_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->store_name().data(), this->store_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "store_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->store_name(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:StoreInfo)
}

::google::protobuf::uint8* StoreInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:StoreInfo)
  // required string store_name = 2;
  if (has_store_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->store_name().data(), this->store_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "store_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->store_name(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:StoreInfo)
  return target;
}

int StoreInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string store_name = 2;
    if (has_store_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->store_name());
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

void StoreInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const StoreInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const StoreInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void StoreInfo::MergeFrom(const StoreInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_store_name()) {
      set_store_name(from.store_name());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void StoreInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StoreInfo::CopyFrom(const StoreInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StoreInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void StoreInfo::Swap(StoreInfo* other) {
  if (other != this) {
    std::swap(store_name_, other->store_name_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata StoreInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StoreInfo_descriptor_;
  metadata.reflection = StoreInfo_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Operation::kStoreInfoFieldNumber;
#endif  // !_MSC_VER

Operation::Operation()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Operation)
}

void Operation::InitAsDefaultInstance() {
}

Operation::Operation(const Operation& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Operation)
}

void Operation::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Operation::~Operation() {
  // @@protoc_insertion_point(destructor:Operation)
  SharedDtor();
}

void Operation::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Operation::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Operation::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Operation_descriptor_;
}

const Operation& Operation::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Operation_2eproto();
  return *default_instance_;
}

Operation* Operation::default_instance_ = NULL;

Operation* Operation::New() const {
  return new Operation;
}

void Operation::Clear() {
  store_info_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Operation::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Operation)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .StoreInfo store_info = 1;
      case 1: {
        if (tag == 10) {
         parse_store_info:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_store_info()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_store_info;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Operation)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Operation)
  return false;
#undef DO_
}

void Operation::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Operation)
  // repeated .StoreInfo store_info = 1;
  for (int i = 0; i < this->store_info_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->store_info(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Operation)
}

::google::protobuf::uint8* Operation::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Operation)
  // repeated .StoreInfo store_info = 1;
  for (int i = 0; i < this->store_info_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->store_info(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Operation)
  return target;
}

int Operation::ByteSize() const {
  int total_size = 0;

  // repeated .StoreInfo store_info = 1;
  total_size += 1 * this->store_info_size();
  for (int i = 0; i < this->store_info_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->store_info(i));
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

void Operation::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Operation* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Operation*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Operation::MergeFrom(const Operation& from) {
  GOOGLE_CHECK_NE(&from, this);
  store_info_.MergeFrom(from.store_info_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Operation::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Operation::CopyFrom(const Operation& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Operation::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->store_info())) return false;
  return true;
}

void Operation::Swap(Operation* other) {
  if (other != this) {
    store_info_.Swap(&other->store_info_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Operation::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Operation_descriptor_;
  metadata.reflection = Operation_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)