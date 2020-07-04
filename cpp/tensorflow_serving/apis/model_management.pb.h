// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/apis/model_management.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fmodel_5fmanagement_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fmodel_5fmanagement_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow_serving/config/model_server_config.pb.h"
#include "tensorflow_serving/util/status.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_5fserving_2fapis_2fmodel_5fmanagement_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_5fserving_2fapis_2fmodel_5fmanagement_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_5fserving_2fapis_2fmodel_5fmanagement_2eproto;
namespace tensorflow {
namespace serving {
class ReloadConfigRequest;
class ReloadConfigRequestDefaultTypeInternal;
extern ReloadConfigRequestDefaultTypeInternal _ReloadConfigRequest_default_instance_;
class ReloadConfigResponse;
class ReloadConfigResponseDefaultTypeInternal;
extern ReloadConfigResponseDefaultTypeInternal _ReloadConfigResponse_default_instance_;
}  // namespace serving
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::serving::ReloadConfigRequest* Arena::CreateMaybeMessage<::tensorflow::serving::ReloadConfigRequest>(Arena*);
template<> ::tensorflow::serving::ReloadConfigResponse* Arena::CreateMaybeMessage<::tensorflow::serving::ReloadConfigResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {
namespace serving {

// ===================================================================

class ReloadConfigRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.ReloadConfigRequest) */ {
 public:
  inline ReloadConfigRequest() : ReloadConfigRequest(nullptr) {};
  virtual ~ReloadConfigRequest();

  ReloadConfigRequest(const ReloadConfigRequest& from);
  ReloadConfigRequest(ReloadConfigRequest&& from) noexcept
    : ReloadConfigRequest() {
    *this = ::std::move(from);
  }

  inline ReloadConfigRequest& operator=(const ReloadConfigRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ReloadConfigRequest& operator=(ReloadConfigRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ReloadConfigRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ReloadConfigRequest* internal_default_instance() {
    return reinterpret_cast<const ReloadConfigRequest*>(
               &_ReloadConfigRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ReloadConfigRequest& a, ReloadConfigRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ReloadConfigRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ReloadConfigRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ReloadConfigRequest* New() const final {
    return CreateMaybeMessage<ReloadConfigRequest>(nullptr);
  }

  ReloadConfigRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ReloadConfigRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ReloadConfigRequest& from);
  void MergeFrom(const ReloadConfigRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ReloadConfigRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.serving.ReloadConfigRequest";
  }
  protected:
  explicit ReloadConfigRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_5fserving_2fapis_2fmodel_5fmanagement_2eproto);
    return ::descriptor_table_tensorflow_5fserving_2fapis_2fmodel_5fmanagement_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kConfigFieldNumber = 1,
  };
  // .tensorflow.serving.ModelServerConfig config = 1;
  bool has_config() const;
  private:
  bool _internal_has_config() const;
  public:
  void clear_config();
  const ::tensorflow::serving::ModelServerConfig& config() const;
  ::tensorflow::serving::ModelServerConfig* release_config();
  ::tensorflow::serving::ModelServerConfig* mutable_config();
  void set_allocated_config(::tensorflow::serving::ModelServerConfig* config);
  private:
  const ::tensorflow::serving::ModelServerConfig& _internal_config() const;
  ::tensorflow::serving::ModelServerConfig* _internal_mutable_config();
  public:
  void unsafe_arena_set_allocated_config(
      ::tensorflow::serving::ModelServerConfig* config);
  ::tensorflow::serving::ModelServerConfig* unsafe_arena_release_config();

  // @@protoc_insertion_point(class_scope:tensorflow.serving.ReloadConfigRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::tensorflow::serving::ModelServerConfig* config_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_5fserving_2fapis_2fmodel_5fmanagement_2eproto;
};
// -------------------------------------------------------------------

class ReloadConfigResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.ReloadConfigResponse) */ {
 public:
  inline ReloadConfigResponse() : ReloadConfigResponse(nullptr) {};
  virtual ~ReloadConfigResponse();

  ReloadConfigResponse(const ReloadConfigResponse& from);
  ReloadConfigResponse(ReloadConfigResponse&& from) noexcept
    : ReloadConfigResponse() {
    *this = ::std::move(from);
  }

  inline ReloadConfigResponse& operator=(const ReloadConfigResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ReloadConfigResponse& operator=(ReloadConfigResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ReloadConfigResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ReloadConfigResponse* internal_default_instance() {
    return reinterpret_cast<const ReloadConfigResponse*>(
               &_ReloadConfigResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ReloadConfigResponse& a, ReloadConfigResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ReloadConfigResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ReloadConfigResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ReloadConfigResponse* New() const final {
    return CreateMaybeMessage<ReloadConfigResponse>(nullptr);
  }

  ReloadConfigResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ReloadConfigResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ReloadConfigResponse& from);
  void MergeFrom(const ReloadConfigResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ReloadConfigResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.serving.ReloadConfigResponse";
  }
  protected:
  explicit ReloadConfigResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_5fserving_2fapis_2fmodel_5fmanagement_2eproto);
    return ::descriptor_table_tensorflow_5fserving_2fapis_2fmodel_5fmanagement_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStatusFieldNumber = 1,
  };
  // .tensorflow.serving.StatusProto status = 1;
  bool has_status() const;
  private:
  bool _internal_has_status() const;
  public:
  void clear_status();
  const ::tensorflow::serving::StatusProto& status() const;
  ::tensorflow::serving::StatusProto* release_status();
  ::tensorflow::serving::StatusProto* mutable_status();
  void set_allocated_status(::tensorflow::serving::StatusProto* status);
  private:
  const ::tensorflow::serving::StatusProto& _internal_status() const;
  ::tensorflow::serving::StatusProto* _internal_mutable_status();
  public:
  void unsafe_arena_set_allocated_status(
      ::tensorflow::serving::StatusProto* status);
  ::tensorflow::serving::StatusProto* unsafe_arena_release_status();

  // @@protoc_insertion_point(class_scope:tensorflow.serving.ReloadConfigResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::tensorflow::serving::StatusProto* status_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_5fserving_2fapis_2fmodel_5fmanagement_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ReloadConfigRequest

// .tensorflow.serving.ModelServerConfig config = 1;
inline bool ReloadConfigRequest::_internal_has_config() const {
  return this != internal_default_instance() && config_ != nullptr;
}
inline bool ReloadConfigRequest::has_config() const {
  return _internal_has_config();
}
inline const ::tensorflow::serving::ModelServerConfig& ReloadConfigRequest::_internal_config() const {
  const ::tensorflow::serving::ModelServerConfig* p = config_;
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::serving::ModelServerConfig*>(
      &::tensorflow::serving::_ModelServerConfig_default_instance_);
}
inline const ::tensorflow::serving::ModelServerConfig& ReloadConfigRequest::config() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.ReloadConfigRequest.config)
  return _internal_config();
}
inline void ReloadConfigRequest::unsafe_arena_set_allocated_config(
    ::tensorflow::serving::ModelServerConfig* config) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(config_);
  }
  config_ = config;
  if (config) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.serving.ReloadConfigRequest.config)
}
inline ::tensorflow::serving::ModelServerConfig* ReloadConfigRequest::release_config() {
  auto temp = unsafe_arena_release_config();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::tensorflow::serving::ModelServerConfig* ReloadConfigRequest::unsafe_arena_release_config() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.ReloadConfigRequest.config)
  
  ::tensorflow::serving::ModelServerConfig* temp = config_;
  config_ = nullptr;
  return temp;
}
inline ::tensorflow::serving::ModelServerConfig* ReloadConfigRequest::_internal_mutable_config() {
  
  if (config_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::serving::ModelServerConfig>(GetArena());
    config_ = p;
  }
  return config_;
}
inline ::tensorflow::serving::ModelServerConfig* ReloadConfigRequest::mutable_config() {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.ReloadConfigRequest.config)
  return _internal_mutable_config();
}
inline void ReloadConfigRequest::set_allocated_config(::tensorflow::serving::ModelServerConfig* config) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(config_);
  }
  if (config) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(config)->GetArena();
    if (message_arena != submessage_arena) {
      config = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, config, submessage_arena);
    }
    
  } else {
    
  }
  config_ = config;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.ReloadConfigRequest.config)
}

// -------------------------------------------------------------------

// ReloadConfigResponse

// .tensorflow.serving.StatusProto status = 1;
inline bool ReloadConfigResponse::_internal_has_status() const {
  return this != internal_default_instance() && status_ != nullptr;
}
inline bool ReloadConfigResponse::has_status() const {
  return _internal_has_status();
}
inline const ::tensorflow::serving::StatusProto& ReloadConfigResponse::_internal_status() const {
  const ::tensorflow::serving::StatusProto* p = status_;
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::serving::StatusProto*>(
      &::tensorflow::serving::_StatusProto_default_instance_);
}
inline const ::tensorflow::serving::StatusProto& ReloadConfigResponse::status() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.ReloadConfigResponse.status)
  return _internal_status();
}
inline void ReloadConfigResponse::unsafe_arena_set_allocated_status(
    ::tensorflow::serving::StatusProto* status) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(status_);
  }
  status_ = status;
  if (status) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.serving.ReloadConfigResponse.status)
}
inline ::tensorflow::serving::StatusProto* ReloadConfigResponse::release_status() {
  auto temp = unsafe_arena_release_status();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::tensorflow::serving::StatusProto* ReloadConfigResponse::unsafe_arena_release_status() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.ReloadConfigResponse.status)
  
  ::tensorflow::serving::StatusProto* temp = status_;
  status_ = nullptr;
  return temp;
}
inline ::tensorflow::serving::StatusProto* ReloadConfigResponse::_internal_mutable_status() {
  
  if (status_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::serving::StatusProto>(GetArena());
    status_ = p;
  }
  return status_;
}
inline ::tensorflow::serving::StatusProto* ReloadConfigResponse::mutable_status() {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.ReloadConfigResponse.status)
  return _internal_mutable_status();
}
inline void ReloadConfigResponse::set_allocated_status(::tensorflow::serving::StatusProto* status) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(status_);
  }
  if (status) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(status)->GetArena();
    if (message_arena != submessage_arena) {
      status = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, status, submessage_arena);
    }
    
  } else {
    
  }
  status_ = status;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.ReloadConfigResponse.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace serving
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fmodel_5fmanagement_2eproto
