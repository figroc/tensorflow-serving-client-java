// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/apis/predict.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fpredict_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fpredict_2eproto

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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/framework/tensor.pb.h"
#include "tensorflow_serving/apis/model.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_5fserving_2fapis_2fpredict_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_5fserving_2fapis_2fpredict_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto;
namespace tensorflow {
namespace serving {
class PredictRequest;
class PredictRequestDefaultTypeInternal;
extern PredictRequestDefaultTypeInternal _PredictRequest_default_instance_;
class PredictRequest_InputsEntry_DoNotUse;
class PredictRequest_InputsEntry_DoNotUseDefaultTypeInternal;
extern PredictRequest_InputsEntry_DoNotUseDefaultTypeInternal _PredictRequest_InputsEntry_DoNotUse_default_instance_;
class PredictResponse;
class PredictResponseDefaultTypeInternal;
extern PredictResponseDefaultTypeInternal _PredictResponse_default_instance_;
class PredictResponse_OutputsEntry_DoNotUse;
class PredictResponse_OutputsEntry_DoNotUseDefaultTypeInternal;
extern PredictResponse_OutputsEntry_DoNotUseDefaultTypeInternal _PredictResponse_OutputsEntry_DoNotUse_default_instance_;
}  // namespace serving
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::serving::PredictRequest* Arena::CreateMaybeMessage<::tensorflow::serving::PredictRequest>(Arena*);
template<> ::tensorflow::serving::PredictRequest_InputsEntry_DoNotUse* Arena::CreateMaybeMessage<::tensorflow::serving::PredictRequest_InputsEntry_DoNotUse>(Arena*);
template<> ::tensorflow::serving::PredictResponse* Arena::CreateMaybeMessage<::tensorflow::serving::PredictResponse>(Arena*);
template<> ::tensorflow::serving::PredictResponse_OutputsEntry_DoNotUse* Arena::CreateMaybeMessage<::tensorflow::serving::PredictResponse_OutputsEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {
namespace serving {

// ===================================================================

class PredictRequest_InputsEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<PredictRequest_InputsEntry_DoNotUse, 
    std::string, ::tensorflow::TensorProto,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<PredictRequest_InputsEntry_DoNotUse, 
    std::string, ::tensorflow::TensorProto,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  PredictRequest_InputsEntry_DoNotUse();
  PredictRequest_InputsEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const PredictRequest_InputsEntry_DoNotUse& other);
  static const PredictRequest_InputsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const PredictRequest_InputsEntry_DoNotUse*>(&_PredictRequest_InputsEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "tensorflow.serving.PredictRequest.InputsEntry.key");
 }
  static bool ValidateValue(void*) { return true; }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto);
    return ::descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto.file_level_metadata[0];
  }

  public:
};

// -------------------------------------------------------------------

class PredictRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.PredictRequest) */ {
 public:
  inline PredictRequest() : PredictRequest(nullptr) {};
  virtual ~PredictRequest();

  PredictRequest(const PredictRequest& from);
  PredictRequest(PredictRequest&& from) noexcept
    : PredictRequest() {
    *this = ::std::move(from);
  }

  inline PredictRequest& operator=(const PredictRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline PredictRequest& operator=(PredictRequest&& from) noexcept {
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
  static const PredictRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PredictRequest* internal_default_instance() {
    return reinterpret_cast<const PredictRequest*>(
               &_PredictRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PredictRequest& a, PredictRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(PredictRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PredictRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PredictRequest* New() const final {
    return CreateMaybeMessage<PredictRequest>(nullptr);
  }

  PredictRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PredictRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PredictRequest& from);
  void MergeFrom(const PredictRequest& from);
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
  void InternalSwap(PredictRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.serving.PredictRequest";
  }
  protected:
  explicit PredictRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto);
    return ::descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kInputsFieldNumber = 2,
    kOutputFilterFieldNumber = 3,
    kModelSpecFieldNumber = 1,
  };
  // map<string, .tensorflow.TensorProto> inputs = 2;
  int inputs_size() const;
  private:
  int _internal_inputs_size() const;
  public:
  void clear_inputs();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >&
      _internal_inputs() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >*
      _internal_mutable_inputs();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >&
      inputs() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >*
      mutable_inputs();

  // repeated string output_filter = 3;
  int output_filter_size() const;
  private:
  int _internal_output_filter_size() const;
  public:
  void clear_output_filter();
  const std::string& output_filter(int index) const;
  std::string* mutable_output_filter(int index);
  void set_output_filter(int index, const std::string& value);
  void set_output_filter(int index, std::string&& value);
  void set_output_filter(int index, const char* value);
  void set_output_filter(int index, const char* value, size_t size);
  std::string* add_output_filter();
  void add_output_filter(const std::string& value);
  void add_output_filter(std::string&& value);
  void add_output_filter(const char* value);
  void add_output_filter(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& output_filter() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_output_filter();
  private:
  const std::string& _internal_output_filter(int index) const;
  std::string* _internal_add_output_filter();
  public:

  // .tensorflow.serving.ModelSpec model_spec = 1;
  bool has_model_spec() const;
  private:
  bool _internal_has_model_spec() const;
  public:
  void clear_model_spec();
  const ::tensorflow::serving::ModelSpec& model_spec() const;
  ::tensorflow::serving::ModelSpec* release_model_spec();
  ::tensorflow::serving::ModelSpec* mutable_model_spec();
  void set_allocated_model_spec(::tensorflow::serving::ModelSpec* model_spec);
  private:
  const ::tensorflow::serving::ModelSpec& _internal_model_spec() const;
  ::tensorflow::serving::ModelSpec* _internal_mutable_model_spec();
  public:
  void unsafe_arena_set_allocated_model_spec(
      ::tensorflow::serving::ModelSpec* model_spec);
  ::tensorflow::serving::ModelSpec* unsafe_arena_release_model_spec();

  // @@protoc_insertion_point(class_scope:tensorflow.serving.PredictRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      PredictRequest_InputsEntry_DoNotUse,
      std::string, ::tensorflow::TensorProto,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
      0 > inputs_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> output_filter_;
  ::tensorflow::serving::ModelSpec* model_spec_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_5fserving_2fapis_2fpredict_2eproto;
};
// -------------------------------------------------------------------

class PredictResponse_OutputsEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<PredictResponse_OutputsEntry_DoNotUse, 
    std::string, ::tensorflow::TensorProto,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<PredictResponse_OutputsEntry_DoNotUse, 
    std::string, ::tensorflow::TensorProto,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  PredictResponse_OutputsEntry_DoNotUse();
  PredictResponse_OutputsEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const PredictResponse_OutputsEntry_DoNotUse& other);
  static const PredictResponse_OutputsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const PredictResponse_OutputsEntry_DoNotUse*>(&_PredictResponse_OutputsEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "tensorflow.serving.PredictResponse.OutputsEntry.key");
 }
  static bool ValidateValue(void*) { return true; }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto);
    return ::descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto.file_level_metadata[2];
  }

  public:
};

// -------------------------------------------------------------------

class PredictResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.PredictResponse) */ {
 public:
  inline PredictResponse() : PredictResponse(nullptr) {};
  virtual ~PredictResponse();

  PredictResponse(const PredictResponse& from);
  PredictResponse(PredictResponse&& from) noexcept
    : PredictResponse() {
    *this = ::std::move(from);
  }

  inline PredictResponse& operator=(const PredictResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline PredictResponse& operator=(PredictResponse&& from) noexcept {
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
  static const PredictResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PredictResponse* internal_default_instance() {
    return reinterpret_cast<const PredictResponse*>(
               &_PredictResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(PredictResponse& a, PredictResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(PredictResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PredictResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PredictResponse* New() const final {
    return CreateMaybeMessage<PredictResponse>(nullptr);
  }

  PredictResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PredictResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PredictResponse& from);
  void MergeFrom(const PredictResponse& from);
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
  void InternalSwap(PredictResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.serving.PredictResponse";
  }
  protected:
  explicit PredictResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto);
    return ::descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kOutputsFieldNumber = 1,
    kModelSpecFieldNumber = 2,
  };
  // map<string, .tensorflow.TensorProto> outputs = 1;
  int outputs_size() const;
  private:
  int _internal_outputs_size() const;
  public:
  void clear_outputs();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >&
      _internal_outputs() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >*
      _internal_mutable_outputs();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >&
      outputs() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >*
      mutable_outputs();

  // .tensorflow.serving.ModelSpec model_spec = 2;
  bool has_model_spec() const;
  private:
  bool _internal_has_model_spec() const;
  public:
  void clear_model_spec();
  const ::tensorflow::serving::ModelSpec& model_spec() const;
  ::tensorflow::serving::ModelSpec* release_model_spec();
  ::tensorflow::serving::ModelSpec* mutable_model_spec();
  void set_allocated_model_spec(::tensorflow::serving::ModelSpec* model_spec);
  private:
  const ::tensorflow::serving::ModelSpec& _internal_model_spec() const;
  ::tensorflow::serving::ModelSpec* _internal_mutable_model_spec();
  public:
  void unsafe_arena_set_allocated_model_spec(
      ::tensorflow::serving::ModelSpec* model_spec);
  ::tensorflow::serving::ModelSpec* unsafe_arena_release_model_spec();

  // @@protoc_insertion_point(class_scope:tensorflow.serving.PredictResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      PredictResponse_OutputsEntry_DoNotUse,
      std::string, ::tensorflow::TensorProto,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
      0 > outputs_;
  ::tensorflow::serving::ModelSpec* model_spec_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_5fserving_2fapis_2fpredict_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// PredictRequest

// .tensorflow.serving.ModelSpec model_spec = 1;
inline bool PredictRequest::_internal_has_model_spec() const {
  return this != internal_default_instance() && model_spec_ != nullptr;
}
inline bool PredictRequest::has_model_spec() const {
  return _internal_has_model_spec();
}
inline const ::tensorflow::serving::ModelSpec& PredictRequest::_internal_model_spec() const {
  const ::tensorflow::serving::ModelSpec* p = model_spec_;
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::serving::ModelSpec*>(
      &::tensorflow::serving::_ModelSpec_default_instance_);
}
inline const ::tensorflow::serving::ModelSpec& PredictRequest::model_spec() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.PredictRequest.model_spec)
  return _internal_model_spec();
}
inline void PredictRequest::unsafe_arena_set_allocated_model_spec(
    ::tensorflow::serving::ModelSpec* model_spec) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(model_spec_);
  }
  model_spec_ = model_spec;
  if (model_spec) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.serving.PredictRequest.model_spec)
}
inline ::tensorflow::serving::ModelSpec* PredictRequest::release_model_spec() {
  auto temp = unsafe_arena_release_model_spec();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::tensorflow::serving::ModelSpec* PredictRequest::unsafe_arena_release_model_spec() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.PredictRequest.model_spec)
  
  ::tensorflow::serving::ModelSpec* temp = model_spec_;
  model_spec_ = nullptr;
  return temp;
}
inline ::tensorflow::serving::ModelSpec* PredictRequest::_internal_mutable_model_spec() {
  
  if (model_spec_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::serving::ModelSpec>(GetArena());
    model_spec_ = p;
  }
  return model_spec_;
}
inline ::tensorflow::serving::ModelSpec* PredictRequest::mutable_model_spec() {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.PredictRequest.model_spec)
  return _internal_mutable_model_spec();
}
inline void PredictRequest::set_allocated_model_spec(::tensorflow::serving::ModelSpec* model_spec) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(model_spec_);
  }
  if (model_spec) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(model_spec)->GetArena();
    if (message_arena != submessage_arena) {
      model_spec = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, model_spec, submessage_arena);
    }
    
  } else {
    
  }
  model_spec_ = model_spec;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.PredictRequest.model_spec)
}

// map<string, .tensorflow.TensorProto> inputs = 2;
inline int PredictRequest::_internal_inputs_size() const {
  return inputs_.size();
}
inline int PredictRequest::inputs_size() const {
  return _internal_inputs_size();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >&
PredictRequest::_internal_inputs() const {
  return inputs_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >&
PredictRequest::inputs() const {
  // @@protoc_insertion_point(field_map:tensorflow.serving.PredictRequest.inputs)
  return _internal_inputs();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >*
PredictRequest::_internal_mutable_inputs() {
  return inputs_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >*
PredictRequest::mutable_inputs() {
  // @@protoc_insertion_point(field_mutable_map:tensorflow.serving.PredictRequest.inputs)
  return _internal_mutable_inputs();
}

// repeated string output_filter = 3;
inline int PredictRequest::_internal_output_filter_size() const {
  return output_filter_.size();
}
inline int PredictRequest::output_filter_size() const {
  return _internal_output_filter_size();
}
inline void PredictRequest::clear_output_filter() {
  output_filter_.Clear();
}
inline std::string* PredictRequest::add_output_filter() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.serving.PredictRequest.output_filter)
  return _internal_add_output_filter();
}
inline const std::string& PredictRequest::_internal_output_filter(int index) const {
  return output_filter_.Get(index);
}
inline const std::string& PredictRequest::output_filter(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.PredictRequest.output_filter)
  return _internal_output_filter(index);
}
inline std::string* PredictRequest::mutable_output_filter(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.PredictRequest.output_filter)
  return output_filter_.Mutable(index);
}
inline void PredictRequest::set_output_filter(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.serving.PredictRequest.output_filter)
  output_filter_.Mutable(index)->assign(value);
}
inline void PredictRequest::set_output_filter(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:tensorflow.serving.PredictRequest.output_filter)
  output_filter_.Mutable(index)->assign(std::move(value));
}
inline void PredictRequest::set_output_filter(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  output_filter_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.serving.PredictRequest.output_filter)
}
inline void PredictRequest::set_output_filter(int index, const char* value, size_t size) {
  output_filter_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.serving.PredictRequest.output_filter)
}
inline std::string* PredictRequest::_internal_add_output_filter() {
  return output_filter_.Add();
}
inline void PredictRequest::add_output_filter(const std::string& value) {
  output_filter_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.serving.PredictRequest.output_filter)
}
inline void PredictRequest::add_output_filter(std::string&& value) {
  output_filter_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:tensorflow.serving.PredictRequest.output_filter)
}
inline void PredictRequest::add_output_filter(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  output_filter_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.serving.PredictRequest.output_filter)
}
inline void PredictRequest::add_output_filter(const char* value, size_t size) {
  output_filter_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.serving.PredictRequest.output_filter)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
PredictRequest::output_filter() const {
  // @@protoc_insertion_point(field_list:tensorflow.serving.PredictRequest.output_filter)
  return output_filter_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
PredictRequest::mutable_output_filter() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.serving.PredictRequest.output_filter)
  return &output_filter_;
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// PredictResponse

// .tensorflow.serving.ModelSpec model_spec = 2;
inline bool PredictResponse::_internal_has_model_spec() const {
  return this != internal_default_instance() && model_spec_ != nullptr;
}
inline bool PredictResponse::has_model_spec() const {
  return _internal_has_model_spec();
}
inline const ::tensorflow::serving::ModelSpec& PredictResponse::_internal_model_spec() const {
  const ::tensorflow::serving::ModelSpec* p = model_spec_;
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::serving::ModelSpec*>(
      &::tensorflow::serving::_ModelSpec_default_instance_);
}
inline const ::tensorflow::serving::ModelSpec& PredictResponse::model_spec() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.PredictResponse.model_spec)
  return _internal_model_spec();
}
inline void PredictResponse::unsafe_arena_set_allocated_model_spec(
    ::tensorflow::serving::ModelSpec* model_spec) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(model_spec_);
  }
  model_spec_ = model_spec;
  if (model_spec) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.serving.PredictResponse.model_spec)
}
inline ::tensorflow::serving::ModelSpec* PredictResponse::release_model_spec() {
  auto temp = unsafe_arena_release_model_spec();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::tensorflow::serving::ModelSpec* PredictResponse::unsafe_arena_release_model_spec() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.PredictResponse.model_spec)
  
  ::tensorflow::serving::ModelSpec* temp = model_spec_;
  model_spec_ = nullptr;
  return temp;
}
inline ::tensorflow::serving::ModelSpec* PredictResponse::_internal_mutable_model_spec() {
  
  if (model_spec_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::serving::ModelSpec>(GetArena());
    model_spec_ = p;
  }
  return model_spec_;
}
inline ::tensorflow::serving::ModelSpec* PredictResponse::mutable_model_spec() {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.PredictResponse.model_spec)
  return _internal_mutable_model_spec();
}
inline void PredictResponse::set_allocated_model_spec(::tensorflow::serving::ModelSpec* model_spec) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(model_spec_);
  }
  if (model_spec) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(model_spec)->GetArena();
    if (message_arena != submessage_arena) {
      model_spec = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, model_spec, submessage_arena);
    }
    
  } else {
    
  }
  model_spec_ = model_spec;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.PredictResponse.model_spec)
}

// map<string, .tensorflow.TensorProto> outputs = 1;
inline int PredictResponse::_internal_outputs_size() const {
  return outputs_.size();
}
inline int PredictResponse::outputs_size() const {
  return _internal_outputs_size();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >&
PredictResponse::_internal_outputs() const {
  return outputs_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >&
PredictResponse::outputs() const {
  // @@protoc_insertion_point(field_map:tensorflow.serving.PredictResponse.outputs)
  return _internal_outputs();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >*
PredictResponse::_internal_mutable_outputs() {
  return outputs_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >*
PredictResponse::mutable_outputs() {
  // @@protoc_insertion_point(field_mutable_map:tensorflow.serving.PredictResponse.outputs)
  return _internal_mutable_outputs();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace serving
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fapis_2fpredict_2eproto
