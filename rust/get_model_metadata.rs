// This file is generated by rust-protobuf 2.10.1. Do not edit
// @generated

// https://github.com/rust-lang/rust-clippy/issues/702
#![allow(unknown_lints)]
#![allow(clippy::all)]

#![cfg_attr(rustfmt, rustfmt_skip)]

#![allow(box_pointers)]
#![allow(dead_code)]
#![allow(missing_docs)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(trivial_casts)]
#![allow(unsafe_code)]
#![allow(unused_imports)]
#![allow(unused_results)]
//! Generated file from `tensorflow_serving/apis/get_model_metadata.proto`

use protobuf::Message as Message_imported_for_functions;
use protobuf::ProtobufEnum as ProtobufEnum_imported_for_functions;

/// Generated files are compatible only with the same version
/// of protobuf runtime.
// const _PROTOBUF_VERSION_CHECK: () = ::protobuf::VERSION_2_10_1;

#[derive(PartialEq,Clone,Default)]
pub struct SignatureDefMap {
    // message fields
    pub signature_def: ::std::collections::HashMap<::std::string::String, super::meta_graph::SignatureDef>,
    // special fields
    pub unknown_fields: ::protobuf::UnknownFields,
    pub cached_size: ::protobuf::CachedSize,
}

impl<'a> ::std::default::Default for &'a SignatureDefMap {
    fn default() -> &'a SignatureDefMap {
        <SignatureDefMap as ::protobuf::Message>::default_instance()
    }
}

impl SignatureDefMap {
    pub fn new() -> SignatureDefMap {
        ::std::default::Default::default()
    }

    // repeated .tensorflow.serving.SignatureDefMap.SignatureDefEntry signature_def = 1;


    pub fn get_signature_def(&self) -> &::std::collections::HashMap<::std::string::String, super::meta_graph::SignatureDef> {
        &self.signature_def
    }
    pub fn clear_signature_def(&mut self) {
        self.signature_def.clear();
    }

    // Param is passed by value, moved
    pub fn set_signature_def(&mut self, v: ::std::collections::HashMap<::std::string::String, super::meta_graph::SignatureDef>) {
        self.signature_def = v;
    }

    // Mutable pointer to the field.
    pub fn mut_signature_def(&mut self) -> &mut ::std::collections::HashMap<::std::string::String, super::meta_graph::SignatureDef> {
        &mut self.signature_def
    }

    // Take field
    pub fn take_signature_def(&mut self) -> ::std::collections::HashMap<::std::string::String, super::meta_graph::SignatureDef> {
        ::std::mem::replace(&mut self.signature_def, ::std::collections::HashMap::new())
    }
}

impl ::protobuf::Message for SignatureDefMap {
    fn is_initialized(&self) -> bool {
        true
    }

    fn merge_from(&mut self, is: &mut ::protobuf::CodedInputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        while !is.eof()? {
            let (field_number, wire_type) = is.read_tag_unpack()?;
            match field_number {
                1 => {
                    ::protobuf::rt::read_map_into::<::protobuf::types::ProtobufTypeString, ::protobuf::types::ProtobufTypeMessage<super::meta_graph::SignatureDef>>(wire_type, is, &mut self.signature_def)?;
                },
                _ => {
                    ::protobuf::rt::read_unknown_or_skip_group(field_number, wire_type, is, self.mut_unknown_fields())?;
                },
            };
        }
        ::std::result::Result::Ok(())
    }

    // Compute sizes of nested messages
    #[allow(unused_variables)]
    fn compute_size(&self) -> u32 {
        let mut my_size = 0;
        my_size += ::protobuf::rt::compute_map_size::<::protobuf::types::ProtobufTypeString, ::protobuf::types::ProtobufTypeMessage<super::meta_graph::SignatureDef>>(1, &self.signature_def);
        my_size += ::protobuf::rt::unknown_fields_size(self.get_unknown_fields());
        self.cached_size.set(my_size);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        ::protobuf::rt::write_map_with_cached_sizes::<::protobuf::types::ProtobufTypeString, ::protobuf::types::ProtobufTypeMessage<super::meta_graph::SignatureDef>>(1, &self.signature_def, os)?;
        os.write_unknown_fields(self.get_unknown_fields())?;
        ::std::result::Result::Ok(())
    }

    fn get_cached_size(&self) -> u32 {
        self.cached_size.get()
    }

    fn get_unknown_fields(&self) -> &::protobuf::UnknownFields {
        &self.unknown_fields
    }

    fn mut_unknown_fields(&mut self) -> &mut ::protobuf::UnknownFields {
        &mut self.unknown_fields
    }

    fn as_any(&self) -> &dyn (::std::any::Any) {
        self as &dyn (::std::any::Any)
    }
    fn as_any_mut(&mut self) -> &mut dyn (::std::any::Any) {
        self as &mut dyn (::std::any::Any)
    }
    fn into_any(self: Box<Self>) -> ::std::boxed::Box<dyn (::std::any::Any)> {
        self
    }

    fn descriptor(&self) -> &'static ::protobuf::reflect::MessageDescriptor {
        Self::descriptor_static()
    }

    fn new() -> SignatureDefMap {
        SignatureDefMap::new()
    }

    fn descriptor_static() -> &'static ::protobuf::reflect::MessageDescriptor {
        static mut descriptor: ::protobuf::lazy::Lazy<::protobuf::reflect::MessageDescriptor> = ::protobuf::lazy::Lazy {
            lock: ::protobuf::lazy::ONCE_INIT,
            ptr: 0 as *const ::protobuf::reflect::MessageDescriptor,
        };
        unsafe {
            descriptor.get(|| {
                let mut fields = ::std::vec::Vec::new();
                fields.push(::protobuf::reflect::accessor::make_map_accessor::<_, ::protobuf::types::ProtobufTypeString, ::protobuf::types::ProtobufTypeMessage<super::meta_graph::SignatureDef>>(
                    "signature_def",
                    |m: &SignatureDefMap| { &m.signature_def },
                    |m: &mut SignatureDefMap| { &mut m.signature_def },
                ));
                ::protobuf::reflect::MessageDescriptor::new::<SignatureDefMap>(
                    "SignatureDefMap",
                    fields,
                    file_descriptor_proto()
                )
            })
        }
    }

    fn default_instance() -> &'static SignatureDefMap {
        static mut instance: ::protobuf::lazy::Lazy<SignatureDefMap> = ::protobuf::lazy::Lazy {
            lock: ::protobuf::lazy::ONCE_INIT,
            ptr: 0 as *const SignatureDefMap,
        };
        unsafe {
            instance.get(SignatureDefMap::new)
        }
    }
}

impl ::protobuf::Clear for SignatureDefMap {
    fn clear(&mut self) {
        self.signature_def.clear();
        self.unknown_fields.clear();
    }
}

impl ::std::fmt::Debug for SignatureDefMap {
    fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::fmt::Result {
        ::protobuf::text_format::fmt(self, f)
    }
}

impl ::protobuf::reflect::ProtobufValue for SignatureDefMap {
    fn as_ref(&self) -> ::protobuf::reflect::ProtobufValueRef {
        ::protobuf::reflect::ProtobufValueRef::Message(self)
    }
}

#[derive(PartialEq,Clone,Default)]
pub struct GetModelMetadataRequest {
    // message fields
    pub model_spec: ::protobuf::SingularPtrField<super::model::ModelSpec>,
    pub metadata_field: ::protobuf::RepeatedField<::std::string::String>,
    // special fields
    pub unknown_fields: ::protobuf::UnknownFields,
    pub cached_size: ::protobuf::CachedSize,
}

impl<'a> ::std::default::Default for &'a GetModelMetadataRequest {
    fn default() -> &'a GetModelMetadataRequest {
        <GetModelMetadataRequest as ::protobuf::Message>::default_instance()
    }
}

impl GetModelMetadataRequest {
    pub fn new() -> GetModelMetadataRequest {
        ::std::default::Default::default()
    }

    // .tensorflow.serving.ModelSpec model_spec = 1;


    pub fn get_model_spec(&self) -> &super::model::ModelSpec {
        self.model_spec.as_ref().unwrap_or_else(|| super::model::ModelSpec::default_instance())
    }
    pub fn clear_model_spec(&mut self) {
        self.model_spec.clear();
    }

    pub fn has_model_spec(&self) -> bool {
        self.model_spec.is_some()
    }

    // Param is passed by value, moved
    pub fn set_model_spec(&mut self, v: super::model::ModelSpec) {
        self.model_spec = ::protobuf::SingularPtrField::some(v);
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_model_spec(&mut self) -> &mut super::model::ModelSpec {
        if self.model_spec.is_none() {
            self.model_spec.set_default();
        }
        self.model_spec.as_mut().unwrap()
    }

    // Take field
    pub fn take_model_spec(&mut self) -> super::model::ModelSpec {
        self.model_spec.take().unwrap_or_else(|| super::model::ModelSpec::new())
    }

    // repeated string metadata_field = 2;


    pub fn get_metadata_field(&self) -> &[::std::string::String] {
        &self.metadata_field
    }
    pub fn clear_metadata_field(&mut self) {
        self.metadata_field.clear();
    }

    // Param is passed by value, moved
    pub fn set_metadata_field(&mut self, v: ::protobuf::RepeatedField<::std::string::String>) {
        self.metadata_field = v;
    }

    // Mutable pointer to the field.
    pub fn mut_metadata_field(&mut self) -> &mut ::protobuf::RepeatedField<::std::string::String> {
        &mut self.metadata_field
    }

    // Take field
    pub fn take_metadata_field(&mut self) -> ::protobuf::RepeatedField<::std::string::String> {
        ::std::mem::replace(&mut self.metadata_field, ::protobuf::RepeatedField::new())
    }
}

impl ::protobuf::Message for GetModelMetadataRequest {
    fn is_initialized(&self) -> bool {
        for v in &self.model_spec {
            if !v.is_initialized() {
                return false;
            }
        };
        true
    }

    fn merge_from(&mut self, is: &mut ::protobuf::CodedInputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        while !is.eof()? {
            let (field_number, wire_type) = is.read_tag_unpack()?;
            match field_number {
                1 => {
                    ::protobuf::rt::read_singular_message_into(wire_type, is, &mut self.model_spec)?;
                },
                2 => {
                    ::protobuf::rt::read_repeated_string_into(wire_type, is, &mut self.metadata_field)?;
                },
                _ => {
                    ::protobuf::rt::read_unknown_or_skip_group(field_number, wire_type, is, self.mut_unknown_fields())?;
                },
            };
        }
        ::std::result::Result::Ok(())
    }

    // Compute sizes of nested messages
    #[allow(unused_variables)]
    fn compute_size(&self) -> u32 {
        let mut my_size = 0;
        if let Some(ref v) = self.model_spec.as_ref() {
            let len = v.compute_size();
            my_size += 1 + ::protobuf::rt::compute_raw_varint32_size(len) + len;
        }
        for value in &self.metadata_field {
            my_size += ::protobuf::rt::string_size(2, &value);
        };
        my_size += ::protobuf::rt::unknown_fields_size(self.get_unknown_fields());
        self.cached_size.set(my_size);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        if let Some(ref v) = self.model_spec.as_ref() {
            os.write_tag(1, ::protobuf::wire_format::WireTypeLengthDelimited)?;
            os.write_raw_varint32(v.get_cached_size())?;
            v.write_to_with_cached_sizes(os)?;
        }
        for v in &self.metadata_field {
            os.write_string(2, &v)?;
        };
        os.write_unknown_fields(self.get_unknown_fields())?;
        ::std::result::Result::Ok(())
    }

    fn get_cached_size(&self) -> u32 {
        self.cached_size.get()
    }

    fn get_unknown_fields(&self) -> &::protobuf::UnknownFields {
        &self.unknown_fields
    }

    fn mut_unknown_fields(&mut self) -> &mut ::protobuf::UnknownFields {
        &mut self.unknown_fields
    }

    fn as_any(&self) -> &dyn (::std::any::Any) {
        self as &dyn (::std::any::Any)
    }
    fn as_any_mut(&mut self) -> &mut dyn (::std::any::Any) {
        self as &mut dyn (::std::any::Any)
    }
    fn into_any(self: Box<Self>) -> ::std::boxed::Box<dyn (::std::any::Any)> {
        self
    }

    fn descriptor(&self) -> &'static ::protobuf::reflect::MessageDescriptor {
        Self::descriptor_static()
    }

    fn new() -> GetModelMetadataRequest {
        GetModelMetadataRequest::new()
    }

    fn descriptor_static() -> &'static ::protobuf::reflect::MessageDescriptor {
        static mut descriptor: ::protobuf::lazy::Lazy<::protobuf::reflect::MessageDescriptor> = ::protobuf::lazy::Lazy {
            lock: ::protobuf::lazy::ONCE_INIT,
            ptr: 0 as *const ::protobuf::reflect::MessageDescriptor,
        };
        unsafe {
            descriptor.get(|| {
                let mut fields = ::std::vec::Vec::new();
                fields.push(::protobuf::reflect::accessor::make_singular_ptr_field_accessor::<_, ::protobuf::types::ProtobufTypeMessage<super::model::ModelSpec>>(
                    "model_spec",
                    |m: &GetModelMetadataRequest| { &m.model_spec },
                    |m: &mut GetModelMetadataRequest| { &mut m.model_spec },
                ));
                fields.push(::protobuf::reflect::accessor::make_repeated_field_accessor::<_, ::protobuf::types::ProtobufTypeString>(
                    "metadata_field",
                    |m: &GetModelMetadataRequest| { &m.metadata_field },
                    |m: &mut GetModelMetadataRequest| { &mut m.metadata_field },
                ));
                ::protobuf::reflect::MessageDescriptor::new::<GetModelMetadataRequest>(
                    "GetModelMetadataRequest",
                    fields,
                    file_descriptor_proto()
                )
            })
        }
    }

    fn default_instance() -> &'static GetModelMetadataRequest {
        static mut instance: ::protobuf::lazy::Lazy<GetModelMetadataRequest> = ::protobuf::lazy::Lazy {
            lock: ::protobuf::lazy::ONCE_INIT,
            ptr: 0 as *const GetModelMetadataRequest,
        };
        unsafe {
            instance.get(GetModelMetadataRequest::new)
        }
    }
}

impl ::protobuf::Clear for GetModelMetadataRequest {
    fn clear(&mut self) {
        self.model_spec.clear();
        self.metadata_field.clear();
        self.unknown_fields.clear();
    }
}

impl ::std::fmt::Debug for GetModelMetadataRequest {
    fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::fmt::Result {
        ::protobuf::text_format::fmt(self, f)
    }
}

impl ::protobuf::reflect::ProtobufValue for GetModelMetadataRequest {
    fn as_ref(&self) -> ::protobuf::reflect::ProtobufValueRef {
        ::protobuf::reflect::ProtobufValueRef::Message(self)
    }
}

#[derive(PartialEq,Clone,Default)]
pub struct GetModelMetadataResponse {
    // message fields
    pub model_spec: ::protobuf::SingularPtrField<super::model::ModelSpec>,
    pub metadata: ::std::collections::HashMap<::std::string::String, ::protobuf::well_known_types::Any>,
    // special fields
    pub unknown_fields: ::protobuf::UnknownFields,
    pub cached_size: ::protobuf::CachedSize,
}

impl<'a> ::std::default::Default for &'a GetModelMetadataResponse {
    fn default() -> &'a GetModelMetadataResponse {
        <GetModelMetadataResponse as ::protobuf::Message>::default_instance()
    }
}

impl GetModelMetadataResponse {
    pub fn new() -> GetModelMetadataResponse {
        ::std::default::Default::default()
    }

    // .tensorflow.serving.ModelSpec model_spec = 1;


    pub fn get_model_spec(&self) -> &super::model::ModelSpec {
        self.model_spec.as_ref().unwrap_or_else(|| super::model::ModelSpec::default_instance())
    }
    pub fn clear_model_spec(&mut self) {
        self.model_spec.clear();
    }

    pub fn has_model_spec(&self) -> bool {
        self.model_spec.is_some()
    }

    // Param is passed by value, moved
    pub fn set_model_spec(&mut self, v: super::model::ModelSpec) {
        self.model_spec = ::protobuf::SingularPtrField::some(v);
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_model_spec(&mut self) -> &mut super::model::ModelSpec {
        if self.model_spec.is_none() {
            self.model_spec.set_default();
        }
        self.model_spec.as_mut().unwrap()
    }

    // Take field
    pub fn take_model_spec(&mut self) -> super::model::ModelSpec {
        self.model_spec.take().unwrap_or_else(|| super::model::ModelSpec::new())
    }

    // repeated .tensorflow.serving.GetModelMetadataResponse.MetadataEntry metadata = 2;


    pub fn get_metadata(&self) -> &::std::collections::HashMap<::std::string::String, ::protobuf::well_known_types::Any> {
        &self.metadata
    }
    pub fn clear_metadata(&mut self) {
        self.metadata.clear();
    }

    // Param is passed by value, moved
    pub fn set_metadata(&mut self, v: ::std::collections::HashMap<::std::string::String, ::protobuf::well_known_types::Any>) {
        self.metadata = v;
    }

    // Mutable pointer to the field.
    pub fn mut_metadata(&mut self) -> &mut ::std::collections::HashMap<::std::string::String, ::protobuf::well_known_types::Any> {
        &mut self.metadata
    }

    // Take field
    pub fn take_metadata(&mut self) -> ::std::collections::HashMap<::std::string::String, ::protobuf::well_known_types::Any> {
        ::std::mem::replace(&mut self.metadata, ::std::collections::HashMap::new())
    }
}

impl ::protobuf::Message for GetModelMetadataResponse {
    fn is_initialized(&self) -> bool {
        for v in &self.model_spec {
            if !v.is_initialized() {
                return false;
            }
        };
        true
    }

    fn merge_from(&mut self, is: &mut ::protobuf::CodedInputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        while !is.eof()? {
            let (field_number, wire_type) = is.read_tag_unpack()?;
            match field_number {
                1 => {
                    ::protobuf::rt::read_singular_message_into(wire_type, is, &mut self.model_spec)?;
                },
                2 => {
                    ::protobuf::rt::read_map_into::<::protobuf::types::ProtobufTypeString, ::protobuf::types::ProtobufTypeMessage<::protobuf::well_known_types::Any>>(wire_type, is, &mut self.metadata)?;
                },
                _ => {
                    ::protobuf::rt::read_unknown_or_skip_group(field_number, wire_type, is, self.mut_unknown_fields())?;
                },
            };
        }
        ::std::result::Result::Ok(())
    }

    // Compute sizes of nested messages
    #[allow(unused_variables)]
    fn compute_size(&self) -> u32 {
        let mut my_size = 0;
        if let Some(ref v) = self.model_spec.as_ref() {
            let len = v.compute_size();
            my_size += 1 + ::protobuf::rt::compute_raw_varint32_size(len) + len;
        }
        my_size += ::protobuf::rt::compute_map_size::<::protobuf::types::ProtobufTypeString, ::protobuf::types::ProtobufTypeMessage<::protobuf::well_known_types::Any>>(2, &self.metadata);
        my_size += ::protobuf::rt::unknown_fields_size(self.get_unknown_fields());
        self.cached_size.set(my_size);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        if let Some(ref v) = self.model_spec.as_ref() {
            os.write_tag(1, ::protobuf::wire_format::WireTypeLengthDelimited)?;
            os.write_raw_varint32(v.get_cached_size())?;
            v.write_to_with_cached_sizes(os)?;
        }
        ::protobuf::rt::write_map_with_cached_sizes::<::protobuf::types::ProtobufTypeString, ::protobuf::types::ProtobufTypeMessage<::protobuf::well_known_types::Any>>(2, &self.metadata, os)?;
        os.write_unknown_fields(self.get_unknown_fields())?;
        ::std::result::Result::Ok(())
    }

    fn get_cached_size(&self) -> u32 {
        self.cached_size.get()
    }

    fn get_unknown_fields(&self) -> &::protobuf::UnknownFields {
        &self.unknown_fields
    }

    fn mut_unknown_fields(&mut self) -> &mut ::protobuf::UnknownFields {
        &mut self.unknown_fields
    }

    fn as_any(&self) -> &dyn (::std::any::Any) {
        self as &dyn (::std::any::Any)
    }
    fn as_any_mut(&mut self) -> &mut dyn (::std::any::Any) {
        self as &mut dyn (::std::any::Any)
    }
    fn into_any(self: Box<Self>) -> ::std::boxed::Box<dyn (::std::any::Any)> {
        self
    }

    fn descriptor(&self) -> &'static ::protobuf::reflect::MessageDescriptor {
        Self::descriptor_static()
    }

    fn new() -> GetModelMetadataResponse {
        GetModelMetadataResponse::new()
    }

    fn descriptor_static() -> &'static ::protobuf::reflect::MessageDescriptor {
        static mut descriptor: ::protobuf::lazy::Lazy<::protobuf::reflect::MessageDescriptor> = ::protobuf::lazy::Lazy {
            lock: ::protobuf::lazy::ONCE_INIT,
            ptr: 0 as *const ::protobuf::reflect::MessageDescriptor,
        };
        unsafe {
            descriptor.get(|| {
                let mut fields = ::std::vec::Vec::new();
                fields.push(::protobuf::reflect::accessor::make_singular_ptr_field_accessor::<_, ::protobuf::types::ProtobufTypeMessage<super::model::ModelSpec>>(
                    "model_spec",
                    |m: &GetModelMetadataResponse| { &m.model_spec },
                    |m: &mut GetModelMetadataResponse| { &mut m.model_spec },
                ));
                fields.push(::protobuf::reflect::accessor::make_map_accessor::<_, ::protobuf::types::ProtobufTypeString, ::protobuf::types::ProtobufTypeMessage<::protobuf::well_known_types::Any>>(
                    "metadata",
                    |m: &GetModelMetadataResponse| { &m.metadata },
                    |m: &mut GetModelMetadataResponse| { &mut m.metadata },
                ));
                ::protobuf::reflect::MessageDescriptor::new::<GetModelMetadataResponse>(
                    "GetModelMetadataResponse",
                    fields,
                    file_descriptor_proto()
                )
            })
        }
    }

    fn default_instance() -> &'static GetModelMetadataResponse {
        static mut instance: ::protobuf::lazy::Lazy<GetModelMetadataResponse> = ::protobuf::lazy::Lazy {
            lock: ::protobuf::lazy::ONCE_INIT,
            ptr: 0 as *const GetModelMetadataResponse,
        };
        unsafe {
            instance.get(GetModelMetadataResponse::new)
        }
    }
}

impl ::protobuf::Clear for GetModelMetadataResponse {
    fn clear(&mut self) {
        self.model_spec.clear();
        self.metadata.clear();
        self.unknown_fields.clear();
    }
}

impl ::std::fmt::Debug for GetModelMetadataResponse {
    fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::fmt::Result {
        ::protobuf::text_format::fmt(self, f)
    }
}

impl ::protobuf::reflect::ProtobufValue for GetModelMetadataResponse {
    fn as_ref(&self) -> ::protobuf::reflect::ProtobufValueRef {
        ::protobuf::reflect::ProtobufValueRef::Message(self)
    }
}

static file_descriptor_proto_data: &'static [u8] = b"\
    \n0tensorflow_serving/apis/get_model_metadata.proto\x12\x12tensorflow.se\
    rving\x1a\x19google/protobuf/any.proto\x1a)tensorflow/core/protobuf/meta\
    _graph.proto\x1a#tensorflow_serving/apis/model.proto\"\xc8\x01\n\x0fSign\
    atureDefMap\x12Z\n\rsignature_def\x18\x01\x20\x03(\x0b25.tensorflow.serv\
    ing.SignatureDefMap.SignatureDefEntryR\x0csignatureDef\x1aY\n\x11Signatu\
    reDefEntry\x12\x10\n\x03key\x18\x01\x20\x01(\tR\x03key\x12.\n\x05value\
    \x18\x02\x20\x01(\x0b2\x18.tensorflow.SignatureDefR\x05value:\x028\x01\"\
    ~\n\x17GetModelMetadataRequest\x12<\n\nmodel_spec\x18\x01\x20\x01(\x0b2\
    \x1d.tensorflow.serving.ModelSpecR\tmodelSpec\x12%\n\x0emetadata_field\
    \x18\x02\x20\x03(\tR\rmetadataField\"\x83\x02\n\x18GetModelMetadataRespo\
    nse\x12<\n\nmodel_spec\x18\x01\x20\x01(\x0b2\x1d.tensorflow.serving.Mode\
    lSpecR\tmodelSpec\x12V\n\x08metadata\x18\x02\x20\x03(\x0b2:.tensorflow.s\
    erving.GetModelMetadataResponse.MetadataEntryR\x08metadata\x1aQ\n\rMetad\
    ataEntry\x12\x10\n\x03key\x18\x01\x20\x01(\tR\x03key\x12*\n\x05value\x18\
    \x02\x20\x01(\x0b2\x14.google.protobuf.AnyR\x05value:\x028\x01B\x03\xf8\
    \x01\x01J\xae\x07\n\x06\x12\x04\0\0\x1d\x01\n\x08\n\x01\x0c\x12\x03\0\0\
    \x12\n\x08\n\x01\x02\x12\x03\x02\0\x1b\n\x08\n\x01\x08\x12\x03\x03\0\x1f\
    \n\t\n\x02\x08\x1f\x12\x03\x03\0\x1f\n\t\n\x02\x03\0\x12\x03\x05\0#\n\t\
    \n\x02\x03\x01\x12\x03\x06\03\n\t\n\x02\x03\x02\x12\x03\x07\0-\n9\n\x02\
    \x04\0\x12\x04\n\0\x0c\x01\x1a-\x20Message\x20returned\x20for\x20\"signa\
    ture_def\"\x20field.\n\n\n\n\x03\x04\0\x01\x12\x03\n\x08\x17\n\x0b\n\x04\
    \x04\0\x02\0\x12\x03\x0b\x02.\n\x0c\n\x05\x04\0\x02\0\x06\x12\x03\x0b\
    \x02\x1b\n\x0c\n\x05\x04\0\x02\0\x01\x12\x03\x0b\x1c)\n\x0c\n\x05\x04\0\
    \x02\0\x03\x12\x03\x0b,-\n\n\n\x02\x04\x01\x12\x04\x0e\0\x14\x01\n\n\n\
    \x03\x04\x01\x01\x12\x03\x0e\x08\x1f\n\x9f\x01\n\x04\x04\x01\x02\0\x12\
    \x03\x11\x02\x1b\x1a\x91\x01\x20Model\x20Specification\x20indicating\x20\
    which\x20model\x20we\x20are\x20querying\x20for\x20metadata.\n\x20If\x20v\
    ersion\x20is\x20not\x20specified,\x20will\x20use\x20the\x20latest\x20(nu\
    merical)\x20version.\n\n\x0c\n\x05\x04\x01\x02\0\x06\x12\x03\x11\x02\x0b\
    \n\x0c\n\x05\x04\x01\x02\0\x01\x12\x03\x11\x0c\x16\n\x0c\n\x05\x04\x01\
    \x02\0\x03\x12\x03\x11\x19\x1a\nL\n\x04\x04\x01\x02\x01\x12\x03\x13\x02%\
    \x1a?\x20Metadata\x20fields\x20to\x20get.\x20Currently\x20supported:\x20\
    \"signature_def\".\n\n\x0c\n\x05\x04\x01\x02\x01\x04\x12\x03\x13\x02\n\n\
    \x0c\n\x05\x04\x01\x02\x01\x05\x12\x03\x13\x0b\x11\n\x0c\n\x05\x04\x01\
    \x02\x01\x01\x12\x03\x13\x12\x20\n\x0c\n\x05\x04\x01\x02\x01\x03\x12\x03\
    \x13#$\n\n\n\x02\x04\x02\x12\x04\x16\0\x1d\x01\n\n\n\x03\x04\x02\x01\x12\
    \x03\x16\x08\x20\nS\n\x04\x04\x02\x02\0\x12\x03\x18\x02\x1b\x1aF\x20Mode\
    l\x20Specification\x20indicating\x20which\x20model\x20this\x20metadata\
    \x20belongs\x20to.\n\n\x0c\n\x05\x04\x02\x02\0\x06\x12\x03\x18\x02\x0b\n\
    \x0c\n\x05\x04\x02\x02\0\x01\x12\x03\x18\x0c\x16\n\x0c\n\x05\x04\x02\x02\
    \0\x03\x12\x03\x18\x19\x1a\n\xb0\x01\n\x04\x04\x02\x02\x01\x12\x03\x1c\
    \x020\x1a\xa2\x01\x20Map\x20of\x20metadata\x20field\x20name\x20to\x20met\
    adata\x20field.\x20The\x20options\x20for\x20metadata\n\x20field\x20name\
    \x20are\x20listed\x20in\x20GetModelMetadataRequest.\x20Currently\x20supp\
    orted:\n\x20\"signature_def\".\n\n\x0c\n\x05\x04\x02\x02\x01\x06\x12\x03\
    \x1c\x02\"\n\x0c\n\x05\x04\x02\x02\x01\x01\x12\x03\x1c#+\n\x0c\n\x05\x04\
    \x02\x02\x01\x03\x12\x03\x1c./b\x06proto3\
";

static mut file_descriptor_proto_lazy: ::protobuf::lazy::Lazy<::protobuf::descriptor::FileDescriptorProto> = ::protobuf::lazy::Lazy {
    lock: ::protobuf::lazy::ONCE_INIT,
    ptr: 0 as *const ::protobuf::descriptor::FileDescriptorProto,
};

fn parse_descriptor_proto() -> ::protobuf::descriptor::FileDescriptorProto {
    ::protobuf::parse_from_bytes(file_descriptor_proto_data).unwrap()
}

pub fn file_descriptor_proto() -> &'static ::protobuf::descriptor::FileDescriptorProto {
    unsafe {
        file_descriptor_proto_lazy.get(|| {
            parse_descriptor_proto()
        })
    }
}