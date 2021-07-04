// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/apis/predict.proto

#include "tensorflow_serving/apis/predict.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fframework_2ftensor_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_TensorProto_tensorflow_2fcore_2fframework_2ftensor_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_5fserving_2fapis_2fmodel_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_5fserving_2fapis_2fpredict_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PredictRequest_InputsEntry_DoNotUse_tensorflow_5fserving_2fapis_2fpredict_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_5fserving_2fapis_2fpredict_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PredictResponse_OutputsEntry_DoNotUse_tensorflow_5fserving_2fapis_2fpredict_2eproto;
namespace tensorflow {
namespace serving {
class PredictRequest_InputsEntry_DoNotUseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PredictRequest_InputsEntry_DoNotUse> _instance;
} _PredictRequest_InputsEntry_DoNotUse_default_instance_;
class PredictRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PredictRequest> _instance;
} _PredictRequest_default_instance_;
class PredictResponse_OutputsEntry_DoNotUseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PredictResponse_OutputsEntry_DoNotUse> _instance;
} _PredictResponse_OutputsEntry_DoNotUse_default_instance_;
class PredictResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PredictResponse> _instance;
} _PredictResponse_default_instance_;
}  // namespace serving
}  // namespace tensorflow
static void InitDefaultsscc_info_PredictRequest_tensorflow_5fserving_2fapis_2fpredict_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_PredictRequest_default_instance_;
    new (ptr) ::tensorflow::serving::PredictRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_PredictRequest_tensorflow_5fserving_2fapis_2fpredict_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_PredictRequest_tensorflow_5fserving_2fapis_2fpredict_2eproto}, {
      &scc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto.base,
      &scc_info_PredictRequest_InputsEntry_DoNotUse_tensorflow_5fserving_2fapis_2fpredict_2eproto.base,}};

static void InitDefaultsscc_info_PredictRequest_InputsEntry_DoNotUse_tensorflow_5fserving_2fapis_2fpredict_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_PredictRequest_InputsEntry_DoNotUse_default_instance_;
    new (ptr) ::tensorflow::serving::PredictRequest_InputsEntry_DoNotUse();
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PredictRequest_InputsEntry_DoNotUse_tensorflow_5fserving_2fapis_2fpredict_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_PredictRequest_InputsEntry_DoNotUse_tensorflow_5fserving_2fapis_2fpredict_2eproto}, {
      &scc_info_TensorProto_tensorflow_2fcore_2fframework_2ftensor_2eproto.base,}};

static void InitDefaultsscc_info_PredictResponse_tensorflow_5fserving_2fapis_2fpredict_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_PredictResponse_default_instance_;
    new (ptr) ::tensorflow::serving::PredictResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_PredictResponse_tensorflow_5fserving_2fapis_2fpredict_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_PredictResponse_tensorflow_5fserving_2fapis_2fpredict_2eproto}, {
      &scc_info_ModelSpec_tensorflow_5fserving_2fapis_2fmodel_2eproto.base,
      &scc_info_PredictResponse_OutputsEntry_DoNotUse_tensorflow_5fserving_2fapis_2fpredict_2eproto.base,}};

static void InitDefaultsscc_info_PredictResponse_OutputsEntry_DoNotUse_tensorflow_5fserving_2fapis_2fpredict_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_PredictResponse_OutputsEntry_DoNotUse_default_instance_;
    new (ptr) ::tensorflow::serving::PredictResponse_OutputsEntry_DoNotUse();
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PredictResponse_OutputsEntry_DoNotUse_tensorflow_5fserving_2fapis_2fpredict_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_PredictResponse_OutputsEntry_DoNotUse_tensorflow_5fserving_2fapis_2fpredict_2eproto}, {
      &scc_info_TensorProto_tensorflow_2fcore_2fframework_2ftensor_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_tensorflow_5fserving_2fapis_2fpredict_2eproto[4];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_tensorflow_5fserving_2fapis_2fpredict_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_tensorflow_5fserving_2fapis_2fpredict_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_tensorflow_5fserving_2fapis_2fpredict_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictRequest_InputsEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictRequest_InputsEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictRequest_InputsEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictRequest_InputsEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictRequest, model_spec_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictRequest, inputs_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictRequest, output_filter_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictResponse_OutputsEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictResponse_OutputsEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictResponse_OutputsEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictResponse_OutputsEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictResponse, model_spec_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::serving::PredictResponse, outputs_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::tensorflow::serving::PredictRequest_InputsEntry_DoNotUse)},
  { 9, -1, sizeof(::tensorflow::serving::PredictRequest)},
  { 17, 24, sizeof(::tensorflow::serving::PredictResponse_OutputsEntry_DoNotUse)},
  { 26, -1, sizeof(::tensorflow::serving::PredictResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::serving::_PredictRequest_InputsEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::serving::_PredictRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::serving::_PredictResponse_OutputsEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::serving::_PredictResponse_default_instance_),
};

const char descriptor_table_protodef_tensorflow_5fserving_2fapis_2fpredict_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n%tensorflow_serving/apis/predict.proto\022"
  "\022tensorflow.serving\032&tensorflow/core/fra"
  "mework/tensor.proto\032#tensorflow_serving/"
  "apis/model.proto\"\342\001\n\016PredictRequest\0221\n\nm"
  "odel_spec\030\001 \001(\0132\035.tensorflow.serving.Mod"
  "elSpec\022>\n\006inputs\030\002 \003(\0132..tensorflow.serv"
  "ing.PredictRequest.InputsEntry\022\025\n\routput"
  "_filter\030\003 \003(\t\032F\n\013InputsEntry\022\013\n\003key\030\001 \001("
  "\t\022&\n\005value\030\002 \001(\0132\027.tensorflow.TensorProt"
  "o:\0028\001\"\320\001\n\017PredictResponse\0221\n\nmodel_spec\030"
  "\002 \001(\0132\035.tensorflow.serving.ModelSpec\022A\n\007"
  "outputs\030\001 \003(\01320.tensorflow.serving.Predi"
  "ctResponse.OutputsEntry\032G\n\014OutputsEntry\022"
  "\013\n\003key\030\001 \001(\t\022&\n\005value\030\002 \001(\0132\027.tensorflow"
  ".TensorProto:\0028\001B\003\370\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto_deps[2] = {
  &::descriptor_table_tensorflow_2fcore_2fframework_2ftensor_2eproto,
  &::descriptor_table_tensorflow_5fserving_2fapis_2fmodel_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto_sccs[4] = {
  &scc_info_PredictRequest_tensorflow_5fserving_2fapis_2fpredict_2eproto.base,
  &scc_info_PredictRequest_InputsEntry_DoNotUse_tensorflow_5fserving_2fapis_2fpredict_2eproto.base,
  &scc_info_PredictResponse_tensorflow_5fserving_2fapis_2fpredict_2eproto.base,
  &scc_info_PredictResponse_OutputsEntry_DoNotUse_tensorflow_5fserving_2fapis_2fpredict_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto = {
  false, false, descriptor_table_protodef_tensorflow_5fserving_2fapis_2fpredict_2eproto, "tensorflow_serving/apis/predict.proto", 589,
  &descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto_once, descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto_sccs, descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto_deps, 4, 2,
  schemas, file_default_instances, TableStruct_tensorflow_5fserving_2fapis_2fpredict_2eproto::offsets,
  file_level_metadata_tensorflow_5fserving_2fapis_2fpredict_2eproto, 4, file_level_enum_descriptors_tensorflow_5fserving_2fapis_2fpredict_2eproto, file_level_service_descriptors_tensorflow_5fserving_2fapis_2fpredict_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_5fserving_2fapis_2fpredict_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_tensorflow_5fserving_2fapis_2fpredict_2eproto)), true);
namespace tensorflow {
namespace serving {

// ===================================================================

PredictRequest_InputsEntry_DoNotUse::PredictRequest_InputsEntry_DoNotUse() {}
PredictRequest_InputsEntry_DoNotUse::PredictRequest_InputsEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void PredictRequest_InputsEntry_DoNotUse::MergeFrom(const PredictRequest_InputsEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata PredictRequest_InputsEntry_DoNotUse::GetMetadata() const {
  return GetMetadataStatic();
}
void PredictRequest_InputsEntry_DoNotUse::MergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& other) {
  ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom(other);
}


// ===================================================================

class PredictRequest::_Internal {
 public:
  static const ::tensorflow::serving::ModelSpec& model_spec(const PredictRequest* msg);
};

const ::tensorflow::serving::ModelSpec&
PredictRequest::_Internal::model_spec(const PredictRequest* msg) {
  return *msg->model_spec_;
}
void PredictRequest::clear_model_spec() {
  if (GetArena() == nullptr && model_spec_ != nullptr) {
    delete model_spec_;
  }
  model_spec_ = nullptr;
}
void PredictRequest::clear_inputs() {
  inputs_.Clear();
}
PredictRequest::PredictRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  inputs_(arena),
  output_filter_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.serving.PredictRequest)
}
PredictRequest::PredictRequest(const PredictRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      output_filter_(from.output_filter_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  inputs_.MergeFrom(from.inputs_);
  if (from._internal_has_model_spec()) {
    model_spec_ = new ::tensorflow::serving::ModelSpec(*from.model_spec_);
  } else {
    model_spec_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.PredictRequest)
}

void PredictRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_PredictRequest_tensorflow_5fserving_2fapis_2fpredict_2eproto.base);
  model_spec_ = nullptr;
}

PredictRequest::~PredictRequest() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.PredictRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PredictRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete model_spec_;
}

void PredictRequest::ArenaDtor(void* object) {
  PredictRequest* _this = reinterpret_cast< PredictRequest* >(object);
  (void)_this;
}
void PredictRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PredictRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PredictRequest& PredictRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PredictRequest_tensorflow_5fserving_2fapis_2fpredict_2eproto.base);
  return *internal_default_instance();
}


void PredictRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.serving.PredictRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  inputs_.Clear();
  output_filter_.Clear();
  if (GetArena() == nullptr && model_spec_ != nullptr) {
    delete model_spec_;
  }
  model_spec_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PredictRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // map<string, .tensorflow.TensorProto> inputs = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&inputs_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string output_filter = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_output_filter();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.serving.PredictRequest.output_filter"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* PredictRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.PredictRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.serving.ModelSpec model_spec = 1;
  if (this->has_model_spec()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::model_spec(this), target, stream);
  }

  // map<string, .tensorflow.TensorProto> inputs = 2;
  if (!this->_internal_inputs().empty()) {
    typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "tensorflow.serving.PredictRequest.InputsEntry.key");
      }
    };

    if (stream->IsSerializationDeterministic() &&
        this->_internal_inputs().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->_internal_inputs().size()]);
      typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >::size_type size_type;
      size_type n = 0;
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >::const_iterator
          it = this->_internal_inputs().begin();
          it != this->_internal_inputs().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      for (size_type i = 0; i < n; i++) {
        target = PredictRequest_InputsEntry_DoNotUse::Funcs::InternalSerialize(2, items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second, target, stream);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)]));
      }
    } else {
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >::const_iterator
          it = this->_internal_inputs().begin();
          it != this->_internal_inputs().end(); ++it) {
        target = PredictRequest_InputsEntry_DoNotUse::Funcs::InternalSerialize(2, it->first, it->second, target, stream);
        Utf8Check::Check(&(*it));
      }
    }
  }

  // repeated string output_filter = 3;
  for (int i = 0, n = this->_internal_output_filter_size(); i < n; i++) {
    const auto& s = this->_internal_output_filter(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.serving.PredictRequest.output_filter");
    target = stream->WriteString(3, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.PredictRequest)
  return target;
}

size_t PredictRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.serving.PredictRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, .tensorflow.TensorProto> inputs = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_inputs_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >::const_iterator
      it = this->_internal_inputs().begin();
      it != this->_internal_inputs().end(); ++it) {
    total_size += PredictRequest_InputsEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // repeated string output_filter = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(output_filter_.size());
  for (int i = 0, n = output_filter_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      output_filter_.Get(i));
  }

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

void PredictRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.serving.PredictRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const PredictRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PredictRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.serving.PredictRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.serving.PredictRequest)
    MergeFrom(*source);
  }
}

void PredictRequest::MergeFrom(const PredictRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.serving.PredictRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  inputs_.MergeFrom(from.inputs_);
  output_filter_.MergeFrom(from.output_filter_);
  if (from.has_model_spec()) {
    _internal_mutable_model_spec()->::tensorflow::serving::ModelSpec::MergeFrom(from._internal_model_spec());
  }
}

void PredictRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.serving.PredictRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PredictRequest::CopyFrom(const PredictRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.serving.PredictRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PredictRequest::IsInitialized() const {
  return true;
}

void PredictRequest::InternalSwap(PredictRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  inputs_.Swap(&other->inputs_);
  output_filter_.InternalSwap(&other->output_filter_);
  swap(model_spec_, other->model_spec_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PredictRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

PredictResponse_OutputsEntry_DoNotUse::PredictResponse_OutputsEntry_DoNotUse() {}
PredictResponse_OutputsEntry_DoNotUse::PredictResponse_OutputsEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void PredictResponse_OutputsEntry_DoNotUse::MergeFrom(const PredictResponse_OutputsEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata PredictResponse_OutputsEntry_DoNotUse::GetMetadata() const {
  return GetMetadataStatic();
}
void PredictResponse_OutputsEntry_DoNotUse::MergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& other) {
  ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom(other);
}


// ===================================================================

class PredictResponse::_Internal {
 public:
  static const ::tensorflow::serving::ModelSpec& model_spec(const PredictResponse* msg);
};

const ::tensorflow::serving::ModelSpec&
PredictResponse::_Internal::model_spec(const PredictResponse* msg) {
  return *msg->model_spec_;
}
void PredictResponse::clear_model_spec() {
  if (GetArena() == nullptr && model_spec_ != nullptr) {
    delete model_spec_;
  }
  model_spec_ = nullptr;
}
void PredictResponse::clear_outputs() {
  outputs_.Clear();
}
PredictResponse::PredictResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  outputs_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.serving.PredictResponse)
}
PredictResponse::PredictResponse(const PredictResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  outputs_.MergeFrom(from.outputs_);
  if (from._internal_has_model_spec()) {
    model_spec_ = new ::tensorflow::serving::ModelSpec(*from.model_spec_);
  } else {
    model_spec_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.PredictResponse)
}

void PredictResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_PredictResponse_tensorflow_5fserving_2fapis_2fpredict_2eproto.base);
  model_spec_ = nullptr;
}

PredictResponse::~PredictResponse() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.PredictResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PredictResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete model_spec_;
}

void PredictResponse::ArenaDtor(void* object) {
  PredictResponse* _this = reinterpret_cast< PredictResponse* >(object);
  (void)_this;
}
void PredictResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PredictResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PredictResponse& PredictResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PredictResponse_tensorflow_5fserving_2fapis_2fpredict_2eproto.base);
  return *internal_default_instance();
}


void PredictResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.serving.PredictResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  outputs_.Clear();
  if (GetArena() == nullptr && model_spec_ != nullptr) {
    delete model_spec_;
  }
  model_spec_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PredictResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // map<string, .tensorflow.TensorProto> outputs = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&outputs_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // .tensorflow.serving.ModelSpec model_spec = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
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

::PROTOBUF_NAMESPACE_ID::uint8* PredictResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.PredictResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<string, .tensorflow.TensorProto> outputs = 1;
  if (!this->_internal_outputs().empty()) {
    typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "tensorflow.serving.PredictResponse.OutputsEntry.key");
      }
    };

    if (stream->IsSerializationDeterministic() &&
        this->_internal_outputs().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->_internal_outputs().size()]);
      typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >::size_type size_type;
      size_type n = 0;
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >::const_iterator
          it = this->_internal_outputs().begin();
          it != this->_internal_outputs().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      for (size_type i = 0; i < n; i++) {
        target = PredictResponse_OutputsEntry_DoNotUse::Funcs::InternalSerialize(1, items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second, target, stream);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)]));
      }
    } else {
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >::const_iterator
          it = this->_internal_outputs().begin();
          it != this->_internal_outputs().end(); ++it) {
        target = PredictResponse_OutputsEntry_DoNotUse::Funcs::InternalSerialize(1, it->first, it->second, target, stream);
        Utf8Check::Check(&(*it));
      }
    }
  }

  // .tensorflow.serving.ModelSpec model_spec = 2;
  if (this->has_model_spec()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::model_spec(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.PredictResponse)
  return target;
}

size_t PredictResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.serving.PredictResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, .tensorflow.TensorProto> outputs = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_outputs_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::TensorProto >::const_iterator
      it = this->_internal_outputs().begin();
      it != this->_internal_outputs().end(); ++it) {
    total_size += PredictResponse_OutputsEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // .tensorflow.serving.ModelSpec model_spec = 2;
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

void PredictResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.serving.PredictResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const PredictResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PredictResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.serving.PredictResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.serving.PredictResponse)
    MergeFrom(*source);
  }
}

void PredictResponse::MergeFrom(const PredictResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.serving.PredictResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  outputs_.MergeFrom(from.outputs_);
  if (from.has_model_spec()) {
    _internal_mutable_model_spec()->::tensorflow::serving::ModelSpec::MergeFrom(from._internal_model_spec());
  }
}

void PredictResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.serving.PredictResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PredictResponse::CopyFrom(const PredictResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.serving.PredictResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PredictResponse::IsInitialized() const {
  return true;
}

void PredictResponse::InternalSwap(PredictResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  outputs_.Swap(&other->outputs_);
  swap(model_spec_, other->model_spec_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PredictResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace serving
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::serving::PredictRequest_InputsEntry_DoNotUse* Arena::CreateMaybeMessage< ::tensorflow::serving::PredictRequest_InputsEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::serving::PredictRequest_InputsEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::tensorflow::serving::PredictRequest* Arena::CreateMaybeMessage< ::tensorflow::serving::PredictRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::serving::PredictRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::tensorflow::serving::PredictResponse_OutputsEntry_DoNotUse* Arena::CreateMaybeMessage< ::tensorflow::serving::PredictResponse_OutputsEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::serving::PredictResponse_OutputsEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::tensorflow::serving::PredictResponse* Arena::CreateMaybeMessage< ::tensorflow::serving::PredictResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::serving::PredictResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
