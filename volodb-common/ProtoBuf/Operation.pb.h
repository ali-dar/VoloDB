// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Operation.proto

#ifndef PROTOBUF_Operation_2eproto__INCLUDED
#define PROTOBUF_Operation_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Operation_2eproto();
void protobuf_AssignDesc_Operation_2eproto();
void protobuf_ShutdownFile_Operation_2eproto();

class StoreInfo;
class Operation;

// ===================================================================

class StoreInfo : public ::google::protobuf::Message {
 public:
  StoreInfo();
  virtual ~StoreInfo();

  StoreInfo(const StoreInfo& from);

  inline StoreInfo& operator=(const StoreInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StoreInfo& default_instance();

  void Swap(StoreInfo* other);

  // implements Message ----------------------------------------------

  StoreInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StoreInfo& from);
  void MergeFrom(const StoreInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string store_name = 2;
  inline bool has_store_name() const;
  inline void clear_store_name();
  static const int kStoreNameFieldNumber = 2;
  inline const ::std::string& store_name() const;
  inline void set_store_name(const ::std::string& value);
  inline void set_store_name(const char* value);
  inline void set_store_name(const char* value, size_t size);
  inline ::std::string* mutable_store_name();
  inline ::std::string* release_store_name();
  inline void set_allocated_store_name(::std::string* store_name);

  // @@protoc_insertion_point(class_scope:StoreInfo)
 private:
  inline void set_has_store_name();
  inline void clear_has_store_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* store_name_;
  friend void  protobuf_AddDesc_Operation_2eproto();
  friend void protobuf_AssignDesc_Operation_2eproto();
  friend void protobuf_ShutdownFile_Operation_2eproto();

  void InitAsDefaultInstance();
  static StoreInfo* default_instance_;
};
// -------------------------------------------------------------------

class Operation : public ::google::protobuf::Message {
 public:
  Operation();
  virtual ~Operation();

  Operation(const Operation& from);

  inline Operation& operator=(const Operation& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Operation& default_instance();

  void Swap(Operation* other);

  // implements Message ----------------------------------------------

  Operation* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Operation& from);
  void MergeFrom(const Operation& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .StoreInfo store_info = 1;
  inline int store_info_size() const;
  inline void clear_store_info();
  static const int kStoreInfoFieldNumber = 1;
  inline const ::StoreInfo& store_info(int index) const;
  inline ::StoreInfo* mutable_store_info(int index);
  inline ::StoreInfo* add_store_info();
  inline const ::google::protobuf::RepeatedPtrField< ::StoreInfo >&
      store_info() const;
  inline ::google::protobuf::RepeatedPtrField< ::StoreInfo >*
      mutable_store_info();

  // @@protoc_insertion_point(class_scope:Operation)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::StoreInfo > store_info_;
  friend void  protobuf_AddDesc_Operation_2eproto();
  friend void protobuf_AssignDesc_Operation_2eproto();
  friend void protobuf_ShutdownFile_Operation_2eproto();

  void InitAsDefaultInstance();
  static Operation* default_instance_;
};
// ===================================================================


// ===================================================================

// StoreInfo

// required string store_name = 2;
inline bool StoreInfo::has_store_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StoreInfo::set_has_store_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StoreInfo::clear_has_store_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StoreInfo::clear_store_name() {
  if (store_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    store_name_->clear();
  }
  clear_has_store_name();
}
inline const ::std::string& StoreInfo::store_name() const {
  // @@protoc_insertion_point(field_get:StoreInfo.store_name)
  return *store_name_;
}
inline void StoreInfo::set_store_name(const ::std::string& value) {
  set_has_store_name();
  if (store_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    store_name_ = new ::std::string;
  }
  store_name_->assign(value);
  // @@protoc_insertion_point(field_set:StoreInfo.store_name)
}
inline void StoreInfo::set_store_name(const char* value) {
  set_has_store_name();
  if (store_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    store_name_ = new ::std::string;
  }
  store_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:StoreInfo.store_name)
}
inline void StoreInfo::set_store_name(const char* value, size_t size) {
  set_has_store_name();
  if (store_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    store_name_ = new ::std::string;
  }
  store_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:StoreInfo.store_name)
}
inline ::std::string* StoreInfo::mutable_store_name() {
  set_has_store_name();
  if (store_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    store_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:StoreInfo.store_name)
  return store_name_;
}
inline ::std::string* StoreInfo::release_store_name() {
  clear_has_store_name();
  if (store_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = store_name_;
    store_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void StoreInfo::set_allocated_store_name(::std::string* store_name) {
  if (store_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete store_name_;
  }
  if (store_name) {
    set_has_store_name();
    store_name_ = store_name;
  } else {
    clear_has_store_name();
    store_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:StoreInfo.store_name)
}

// -------------------------------------------------------------------

// Operation

// repeated .StoreInfo store_info = 1;
inline int Operation::store_info_size() const {
  return store_info_.size();
}
inline void Operation::clear_store_info() {
  store_info_.Clear();
}
inline const ::StoreInfo& Operation::store_info(int index) const {
  // @@protoc_insertion_point(field_get:Operation.store_info)
  return store_info_.Get(index);
}
inline ::StoreInfo* Operation::mutable_store_info(int index) {
  // @@protoc_insertion_point(field_mutable:Operation.store_info)
  return store_info_.Mutable(index);
}
inline ::StoreInfo* Operation::add_store_info() {
  // @@protoc_insertion_point(field_add:Operation.store_info)
  return store_info_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::StoreInfo >&
Operation::store_info() const {
  // @@protoc_insertion_point(field_list:Operation.store_info)
  return store_info_;
}
inline ::google::protobuf::RepeatedPtrField< ::StoreInfo >*
Operation::mutable_store_info() {
  // @@protoc_insertion_point(field_mutable_list:Operation.store_info)
  return &store_info_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Operation_2eproto__INCLUDED
