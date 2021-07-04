// This file is generated by rust-protobuf 2.22.0. Do not edit
// @generated

// https://github.com/rust-lang/rust-clippy/issues/702
#![allow(unknown_lints)]
#![allow(clippy::all)]

#![allow(unused_attributes)]
#![rustfmt::skip]

#![allow(box_pointers)]
#![allow(dead_code)]
#![allow(missing_docs)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(trivial_casts)]
#![allow(unused_imports)]
#![allow(unused_results)]
//! Generated file from `tensorflow_serving/util/status.proto`

/// Generated files are compatible only with the same version
/// of protobuf runtime.
// const _PROTOBUF_VERSION_CHECK: () = ::protobuf::VERSION_2_22_0;

#[derive(PartialEq,Clone,Default)]
pub struct StatusProto {
    // message fields
    pub error_code: super::error_codes::Code,
    pub error_message: ::std::string::String,
    // special fields
    pub unknown_fields: ::protobuf::UnknownFields,
    pub cached_size: ::protobuf::CachedSize,
}

impl<'a> ::std::default::Default for &'a StatusProto {
    fn default() -> &'a StatusProto {
        <StatusProto as ::protobuf::Message>::default_instance()
    }
}

impl StatusProto {
    pub fn new() -> StatusProto {
        ::std::default::Default::default()
    }

    // .tensorflow.error.Code error_code = 1;


    pub fn get_error_code(&self) -> super::error_codes::Code {
        self.error_code
    }
    pub fn clear_error_code(&mut self) {
        self.error_code = super::error_codes::Code::OK;
    }

    // Param is passed by value, moved
    pub fn set_error_code(&mut self, v: super::error_codes::Code) {
        self.error_code = v;
    }

    // string error_message = 2;


    pub fn get_error_message(&self) -> &str {
        &self.error_message
    }
    pub fn clear_error_message(&mut self) {
        self.error_message.clear();
    }

    // Param is passed by value, moved
    pub fn set_error_message(&mut self, v: ::std::string::String) {
        self.error_message = v;
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_error_message(&mut self) -> &mut ::std::string::String {
        &mut self.error_message
    }

    // Take field
    pub fn take_error_message(&mut self) -> ::std::string::String {
        ::std::mem::replace(&mut self.error_message, ::std::string::String::new())
    }
}

impl ::protobuf::Message for StatusProto {
    fn is_initialized(&self) -> bool {
        true
    }

    fn merge_from(&mut self, is: &mut ::protobuf::CodedInputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        while !is.eof()? {
            let (field_number, wire_type) = is.read_tag_unpack()?;
            match field_number {
                1 => {
                    ::protobuf::rt::read_proto3_enum_with_unknown_fields_into(wire_type, is, &mut self.error_code, 1, &mut self.unknown_fields)?
                },
                2 => {
                    ::protobuf::rt::read_singular_proto3_string_into(wire_type, is, &mut self.error_message)?;
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
        if self.error_code != super::error_codes::Code::OK {
            my_size += ::protobuf::rt::enum_size(1, self.error_code);
        }
        if !self.error_message.is_empty() {
            my_size += ::protobuf::rt::string_size(2, &self.error_message);
        }
        my_size += ::protobuf::rt::unknown_fields_size(self.get_unknown_fields());
        self.cached_size.set(my_size);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        if self.error_code != super::error_codes::Code::OK {
            os.write_enum(1, ::protobuf::ProtobufEnum::value(&self.error_code))?;
        }
        if !self.error_message.is_empty() {
            os.write_string(2, &self.error_message)?;
        }
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
    fn into_any(self: ::std::boxed::Box<Self>) -> ::std::boxed::Box<dyn (::std::any::Any)> {
        self
    }

    fn descriptor(&self) -> &'static ::protobuf::reflect::MessageDescriptor {
        Self::descriptor_static()
    }

    fn new() -> StatusProto {
        StatusProto::new()
    }

    fn descriptor_static() -> &'static ::protobuf::reflect::MessageDescriptor {
        static descriptor: ::protobuf::rt::LazyV2<::protobuf::reflect::MessageDescriptor> = ::protobuf::rt::LazyV2::INIT;
        descriptor.get(|| {
            let mut fields = ::std::vec::Vec::new();
            fields.push(::protobuf::reflect::accessor::make_simple_field_accessor::<_, ::protobuf::types::ProtobufTypeEnum<super::error_codes::Code>>(
                "error_code",
                |m: &StatusProto| { &m.error_code },
                |m: &mut StatusProto| { &mut m.error_code },
            ));
            fields.push(::protobuf::reflect::accessor::make_simple_field_accessor::<_, ::protobuf::types::ProtobufTypeString>(
                "error_message",
                |m: &StatusProto| { &m.error_message },
                |m: &mut StatusProto| { &mut m.error_message },
            ));
            ::protobuf::reflect::MessageDescriptor::new_pb_name::<StatusProto>(
                "StatusProto",
                fields,
                file_descriptor_proto()
            )
        })
    }

    fn default_instance() -> &'static StatusProto {
        static instance: ::protobuf::rt::LazyV2<StatusProto> = ::protobuf::rt::LazyV2::INIT;
        instance.get(StatusProto::new)
    }
}

impl ::protobuf::Clear for StatusProto {
    fn clear(&mut self) {
        self.error_code = super::error_codes::Code::OK;
        self.error_message.clear();
        self.unknown_fields.clear();
    }
}

impl ::std::fmt::Debug for StatusProto {
    fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::fmt::Result {
        ::protobuf::text_format::fmt(self, f)
    }
}

impl ::protobuf::reflect::ProtobufValue for StatusProto {
    fn as_ref(&self) -> ::protobuf::reflect::ReflectValueRef {
        ::protobuf::reflect::ReflectValueRef::Message(self)
    }
}

static file_descriptor_proto_data: &'static [u8] = b"\
    \n$tensorflow_serving/util/status.proto\x12\x12tensorflow.serving\x1a*te\
    nsorflow/core/protobuf/error_codes.proto\"k\n\x0bStatusProto\x126\n\nerr\
    or_code\x18\x01\x20\x01(\x0e2\x16.tensorflow.error.CodeR\nerror_code\x12\
    $\n\rerror_message\x18\x02\x20\x01(\tR\rerror_messageB\x03\xf8\x01\x01J\
    \xbd\x03\n\x06\x12\x04\0\0\x10\x01\n\x08\n\x01\x0c\x12\x03\0\0\x12\n\x08\
    \n\x01\x02\x12\x03\x02\0\x1b\n\t\n\x02\x03\0\x12\x03\x04\04\n\x08\n\x01\
    \x08\x12\x03\x06\0\x1f\n\t\n\x02\x08\x1f\x12\x03\x06\0\x1f\nb\n\x02\x04\
    \0\x12\x04\n\0\x10\x01\x1aV\x20Status\x20that\x20corresponds\x20to\x20St\
    atus\x20in\n\x20third_party/tensorflow/core/lib/core/status.h.\n\n\n\n\
    \x03\x04\0\x01\x12\x03\n\x08\x13\n\x1a\n\x04\x04\0\x02\0\x12\x03\x0c\x02\
    7\x1a\r\x20Error\x20code.\n\n\x0c\n\x05\x04\0\x02\0\x06\x12\x03\x0c\x02\
    \x0c\n\x0c\n\x05\x04\0\x02\0\x01\x12\x03\x0c\r\x17\n\x0c\n\x05\x04\0\x02\
    \0\x03\x12\x03\x0c\x1a\x1b\n\x0c\n\x05\x04\0\x02\0\x08\x12\x03\x0c\x1c6\
    \n\x0c\n\x05\x04\0\x02\0\n\x12\x03\x0c\x1d5\n\x0c\n\x05\x04\0\x02\0\n\
    \x12\x03\x0c)5\nK\n\x04\x04\0\x02\x01\x12\x03\x0f\x029\x1a>\x20Error\x20\
    message.\x20Will\x20only\x20be\x20set\x20if\x20an\x20error\x20was\x20enc\
    ountered.\n\n\x0c\n\x05\x04\0\x02\x01\x05\x12\x03\x0f\x02\x08\n\x0c\n\
    \x05\x04\0\x02\x01\x01\x12\x03\x0f\t\x16\n\x0c\n\x05\x04\0\x02\x01\x03\
    \x12\x03\x0f\x19\x1a\n\x0c\n\x05\x04\0\x02\x01\x08\x12\x03\x0f\x1b8\n\
    \x0c\n\x05\x04\0\x02\x01\n\x12\x03\x0f\x1c7\n\x0c\n\x05\x04\0\x02\x01\n\
    \x12\x03\x0f(7b\x06proto3\
";

static file_descriptor_proto_lazy: ::protobuf::rt::LazyV2<::protobuf::descriptor::FileDescriptorProto> = ::protobuf::rt::LazyV2::INIT;

fn parse_descriptor_proto() -> ::protobuf::descriptor::FileDescriptorProto {
    ::protobuf::Message::parse_from_bytes(file_descriptor_proto_data).unwrap()
}

pub fn file_descriptor_proto() -> &'static ::protobuf::descriptor::FileDescriptorProto {
    file_descriptor_proto_lazy.get(|| {
        parse_descriptor_proto()
    })
}
