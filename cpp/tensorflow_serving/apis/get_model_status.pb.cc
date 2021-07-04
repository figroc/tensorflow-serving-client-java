// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/apis/get_model_status.proto

#include "tensorflow_serving/apis/get_model_status.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_5fserving_2fapis_2fmodel_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ModelVersionStatus_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_5fserving_2futil_2fstatus_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_StatusProto_tensorflow_5fserving_2futil_2fstatus_2eproto;
namespace tensorflow {
namespace serving {
class GetModelStatusRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GetModelStatusRequest> _instance;
} _GetModelStatusRequest_default_instance_;
class ModelVersionStatusDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ModelVersionStatus> _instance;
} _ModelVersionStatus_default_instance_;
class GetModelStatusResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GetModelStatusResponse> _instance;
} _GetModelStatusResponse_default_instance_;
}  // namespace serving
}  // namespace tensorflow
static void InitDefaultsscc_info_GetModelStatusRequest_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_GetModelStatusRequest_default_instance_;
    new (ptr) ::tensorflow::serving::GetModelStatusRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_GetModelStatusRequest_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_GetModelStatusRequest_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto}, {
      &scc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto.base,}};

static void InitDefaultsscc_info_GetModelStatusResponse_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_GetModelStatusResponse_default_instance_;
    new (ptr) ::tensorflow::serving::GetModelStatusResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_GetModelStatusResponse_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_GetModelStatusResponse_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto}, {
      &scc_info_ModelVersionStatus_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto.base,}};

static void InitDefaultsscc_info_ModelVersionStatus_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_ModelVersionStatus_default_instance_;
    new (ptr) ::tensorflow::serving::ModelVersionStatus();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ModelVersionStatus_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_ModelVersionStatus_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto}, {
      &scc_info_StatusProto_tensorflow_5fserving_2futil_2fstatus_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::GetModelStatusRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::GetModelStatusRequest, model_spec_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::ModelVersionStatus, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::ModelVersionStatus, version_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::ModelVersionStatus, state_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::ModelVersionStatus, status_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::GetModelStatusResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::GetModelStatusResponse, model_version_status_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::serving::GetModelStatusRequest)},
  { 6, -1, sizeof(::tensorflow::serving::ModelVersionStatus)},
  { 14, -1, sizeof(::tensorflow::serving::GetModelStatusResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::serving::_GetModelStatusRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::serving::_ModelVersionStatus_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::serving::_GetModelStatusResponse_default_instance_),
};

const char descriptor_table_protodef_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n.tensorflow_serving/apis/get_model_stat"
  "us.proto\022\022tensorflow.serving\032#tensorflow"
  "_serving/apis/model.proto\032$tensorflow_se"
  "rving/util/status.proto\"J\n\025GetModelStatu"
  "sRequest\0221\n\nmodel_spec\030\001 \001(\0132\035.tensorflo"
  "w.serving.ModelSpec\"\350\001\n\022ModelVersionStat"
  "us\022\017\n\007version\030\001 \001(\003\022;\n\005state\030\002 \001(\0162,.ten"
  "sorflow.serving.ModelVersionStatus.State"
  "\022/\n\006status\030\003 \001(\0132\037.tensorflow.serving.St"
  "atusProto\"S\n\005State\022\013\n\007UNKNOWN\020\000\022\t\n\005START"
  "\020\n\022\013\n\007LOADING\020\024\022\r\n\tAVAILABLE\020\036\022\r\n\tUNLOAD"
  "ING\020(\022\007\n\003END\0202\"t\n\026GetModelStatusResponse"
  "\022Z\n\024model_version_status\030\001 \003(\0132&.tensorf"
  "low.serving.ModelVersionStatusR\024model_ve"
  "rsion_statusB\003\370\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto_deps[2] = {
  &::descriptor_table_tensorflow_5fserving_2fapis_2fmodel_2eproto,
  &::descriptor_table_tensorflow_5fserving_2futil_2fstatus_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto_sccs[3] = {
  &scc_info_GetModelStatusRequest_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto.base,
  &scc_info_GetModelStatusResponse_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto.base,
  &scc_info_ModelVersionStatus_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto = {
  false, false, descriptor_table_protodef_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto, "tensorflow_serving/apis/get_model_status.proto", 585,
  &descriptor_table_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto_once, descriptor_table_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto_sccs, descriptor_table_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto_deps, 3, 2,
  schemas, file_default_instances, TableStruct_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto::offsets,
  file_level_metadata_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto, 3, file_level_enum_descriptors_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto, file_level_service_descriptors_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto)), true);
namespace tensorflow {
namespace serving {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ModelVersionStatus_State_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto);
  return file_level_enum_descriptors_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto[0];
}
bool ModelVersionStatus_State_IsValid(int value) {
  switch (value) {
    case 0:
    case 10:
    case 20:
    case 30:
    case 40:
    case 50:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr ModelVersionStatus_State ModelVersionStatus::UNKNOWN;
constexpr ModelVersionStatus_State ModelVersionStatus::START;
constexpr ModelVersionStatus_State ModelVersionStatus::LOADING;
constexpr ModelVersionStatus_State ModelVersionStatus::AVAILABLE;
constexpr ModelVersionStatus_State ModelVersionStatus::UNLOADING;
constexpr ModelVersionStatus_State ModelVersionStatus::END;
constexpr ModelVersionStatus_State ModelVersionStatus::State_MIN;
constexpr ModelVersionStatus_State ModelVersionStatus::State_MAX;
constexpr int ModelVersionStatus::State_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class GetModelStatusRequest::_Internal {
 public:
  static const ::tensorflow::serving::ModelSpec& model_spec(const GetModelStatusRequest* msg);
};

const ::tensorflow::serving::ModelSpec&
GetModelStatusRequest::_Internal::model_spec(const GetModelStatusRequest* msg) {
  return *msg->model_spec_;
}
void GetModelStatusRequest::clear_model_spec() {
  if (GetArena() == nullptr && model_spec_ != nullptr) {
    delete model_spec_;
  }
  model_spec_ = nullptr;
}
GetModelStatusRequest::GetModelStatusRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.serving.GetModelStatusRequest)
}
GetModelStatusRequest::GetModelStatusRequest(const GetModelStatusRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_model_spec()) {
    model_spec_ = new ::tensorflow::serving::ModelSpec(*from.model_spec_);
  } else {
    model_spec_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.GetModelStatusRequest)
}

void GetModelStatusRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GetModelStatusRequest_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto.base);
  model_spec_ = nullptr;
}

GetModelStatusRequest::~GetModelStatusRequest() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.GetModelStatusRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void GetModelStatusRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete model_spec_;
}

void GetModelStatusRequest::ArenaDtor(void* object) {
  GetModelStatusRequest* _this = reinterpret_cast< GetModelStatusRequest* >(object);
  (void)_this;
}
void GetModelStatusRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GetModelStatusRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GetModelStatusRequest& GetModelStatusRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GetModelStatusRequest_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto.base);
  return *internal_default_instance();
}


void GetModelStatusRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.serving.GetModelStatusRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && model_spec_ != nullptr) {
    delete model_spec_;
  }
  model_spec_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetModelStatusRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .tensorflow.serving.ModelSpec model_spec = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_model_spec(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GetModelStatusRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.GetModelStatusRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.serving.ModelSpec model_spec = 1;
  if (this->has_model_spec()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::model_spec(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.GetModelStatusRequest)
  return target;
}

size_t GetModelStatusRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.serving.GetModelStatusRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .tensorflow.serving.ModelSpec model_spec = 1;
  if (this->has_model_spec()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *model_spec_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetModelStatusRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.serving.GetModelStatusRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const GetModelStatusRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GetModelStatusRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.serving.GetModelStatusRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.serving.GetModelStatusRequest)
    MergeFrom(*source);
  }
}

void GetModelStatusRequest::MergeFrom(const GetModelStatusRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.serving.GetModelStatusRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_model_spec()) {
    _internal_mutable_model_spec()->::tensorflow::serving::ModelSpec::MergeFrom(from._internal_model_spec());
  }
}

void GetModelStatusRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.serving.GetModelStatusRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetModelStatusRequest::CopyFrom(const GetModelStatusRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.serving.GetModelStatusRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetModelStatusRequest::IsInitialized() const {
  return true;
}

void GetModelStatusRequest::InternalSwap(GetModelStatusRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(model_spec_, other->model_spec_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GetModelStatusRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class ModelVersionStatus::_Internal {
 public:
  static const ::tensorflow::serving::StatusProto& status(const ModelVersionStatus* msg);
};

const ::tensorflow::serving::StatusProto&
ModelVersionStatus::_Internal::status(const ModelVersionStatus* msg) {
  return *msg->status_;
}
void ModelVersionStatus::clear_status() {
  if (GetArena() == nullptr && status_ != nullptr) {
    delete status_;
  }
  status_ = nullptr;
}
ModelVersionStatus::ModelVersionStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.serving.ModelVersionStatus)
}
ModelVersionStatus::ModelVersionStatus(const ModelVersionStatus& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_status()) {
    status_ = new ::tensorflow::serving::StatusProto(*from.status_);
  } else {
    status_ = nullptr;
  }
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&state_) -
    reinterpret_cast<char*>(&version_)) + sizeof(state_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.ModelVersionStatus)
}

void ModelVersionStatus::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ModelVersionStatus_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto.base);
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&status_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&state_) -
      reinterpret_cast<char*>(&status_)) + sizeof(state_));
}

ModelVersionStatus::~ModelVersionStatus() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.ModelVersionStatus)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ModelVersionStatus::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete status_;
}

void ModelVersionStatus::ArenaDtor(void* object) {
  ModelVersionStatus* _this = reinterpret_cast< ModelVersionStatus* >(object);
  (void)_this;
}
void ModelVersionStatus::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ModelVersionStatus::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ModelVersionStatus& ModelVersionStatus::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ModelVersionStatus_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto.base);
  return *internal_default_instance();
}


void ModelVersionStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.serving.ModelVersionStatus)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && status_ != nullptr) {
    delete status_;
  }
  status_ = nullptr;
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&state_) -
      reinterpret_cast<char*>(&version_)) + sizeof(state_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ModelVersionStatus::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int64 version = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .tensorflow.serving.ModelVersionStatus.State state = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_state(static_cast<::tensorflow::serving::ModelVersionStatus_State>(val));
        } else goto handle_unusual;
        continue;
      // .tensorflow.serving.StatusProto status = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_status(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ModelVersionStatus::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.ModelVersionStatus)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 version = 1;
  if (this->version() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_version(), target);
  }

  // .tensorflow.serving.ModelVersionStatus.State state = 2;
  if (this->state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_state(), target);
  }

  // .tensorflow.serving.StatusProto status = 3;
  if (this->has_status()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::status(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.ModelVersionStatus)
  return target;
}

size_t ModelVersionStatus::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.serving.ModelVersionStatus)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .tensorflow.serving.StatusProto status = 3;
  if (this->has_status()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *status_);
  }

  // int64 version = 1;
  if (this->version() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_version());
  }

  // .tensorflow.serving.ModelVersionStatus.State state = 2;
  if (this->state() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_state());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ModelVersionStatus::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.serving.ModelVersionStatus)
  GOOGLE_DCHECK_NE(&from, this);
  const ModelVersionStatus* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ModelVersionStatus>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.serving.ModelVersionStatus)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.serving.ModelVersionStatus)
    MergeFrom(*source);
  }
}

void ModelVersionStatus::MergeFrom(const ModelVersionStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.serving.ModelVersionStatus)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_status()) {
    _internal_mutable_status()->::tensorflow::serving::StatusProto::MergeFrom(from._internal_status());
  }
  if (from.version() != 0) {
    _internal_set_version(from._internal_version());
  }
  if (from.state() != 0) {
    _internal_set_state(from._internal_state());
  }
}

void ModelVersionStatus::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.serving.ModelVersionStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ModelVersionStatus::CopyFrom(const ModelVersionStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.serving.ModelVersionStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ModelVersionStatus::IsInitialized() const {
  return true;
}

void ModelVersionStatus::InternalSwap(ModelVersionStatus* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ModelVersionStatus, state_)
      + sizeof(ModelVersionStatus::state_)
      - PROTOBUF_FIELD_OFFSET(ModelVersionStatus, status_)>(
          reinterpret_cast<char*>(&status_),
          reinterpret_cast<char*>(&other->status_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ModelVersionStatus::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class GetModelStatusResponse::_Internal {
 public:
};

GetModelStatusResponse::GetModelStatusResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  model_version_status_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.serving.GetModelStatusResponse)
}
GetModelStatusResponse::GetModelStatusResponse(const GetModelStatusResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      model_version_status_(from.model_version_status_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.GetModelStatusResponse)
}

void GetModelStatusResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GetModelStatusResponse_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto.base);
}

GetModelStatusResponse::~GetModelStatusResponse() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.GetModelStatusResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void GetModelStatusResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void GetModelStatusResponse::ArenaDtor(void* object) {
  GetModelStatusResponse* _this = reinterpret_cast< GetModelStatusResponse* >(object);
  (void)_this;
}
void GetModelStatusResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GetModelStatusResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GetModelStatusResponse& GetModelStatusResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GetModelStatusResponse_tensorflow_5fserving_2fapis_2fget_5fmodel_5fstatus_2eproto.base);
  return *internal_default_instance();
}


void GetModelStatusResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.serving.GetModelStatusResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  model_version_status_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetModelStatusResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .tensorflow.serving.ModelVersionStatus model_version_status = 1 [json_name = "model_version_status"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_model_version_status(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GetModelStatusResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.GetModelStatusResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .tensorflow.serving.ModelVersionStatus model_version_status = 1 [json_name = "model_version_status"];
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_model_version_status_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_model_version_status(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.GetModelStatusResponse)
  return target;
}

size_t GetModelStatusResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.serving.GetModelStatusResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .tensorflow.serving.ModelVersionStatus model_version_status = 1 [json_name = "model_version_status"];
  total_size += 1UL * this->_internal_model_version_status_size();
  for (const auto& msg : this->model_version_status_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetModelStatusResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.serving.GetModelStatusResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const GetModelStatusResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GetModelStatusResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.serving.GetModelStatusResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.serving.GetModelStatusResponse)
    MergeFrom(*source);
  }
}

void GetModelStatusResponse::MergeFrom(const GetModelStatusResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.serving.GetModelStatusResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  model_version_status_.MergeFrom(from.model_version_status_);
}

void GetModelStatusResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.serving.GetModelStatusResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetModelStatusResponse::CopyFrom(const GetModelStatusResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.serving.GetModelStatusResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetModelStatusResponse::IsInitialized() const {
  return true;
}

void GetModelStatusResponse::InternalSwap(GetModelStatusResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  model_version_status_.InternalSwap(&other->model_version_status_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GetModelStatusResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace serving
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::serving::GetModelStatusRequest* Arena::CreateMaybeMessage< ::tensorflow::serving::GetModelStatusRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::serving::GetModelStatusRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::tensorflow::serving::ModelVersionStatus* Arena::CreateMaybeMessage< ::tensorflow::serving::ModelVersionStatus >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::serving::ModelVersionStatus >(arena);
}
template<> PROTOBUF_NOINLINE ::tensorflow::serving::GetModelStatusResponse* Arena::CreateMaybeMessage< ::tensorflow::serving::GetModelStatusResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::serving::GetModelStatusResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
