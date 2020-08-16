// This file is generated by rust-protobuf 2.14.0. Do not edit
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
//! Generated file from `tensorflow/core/protobuf/error_codes.proto`

use protobuf::Message as Message_imported_for_functions;
use protobuf::ProtobufEnum as ProtobufEnum_imported_for_functions;

/// Generated files are compatible only with the same version
/// of protobuf runtime.
// const _PROTOBUF_VERSION_CHECK: () = ::protobuf::VERSION_2_14_0;

#[derive(Clone,PartialEq,Eq,Debug,Hash)]
pub enum Code {
    OK = 0,
    CANCELLED = 1,
    UNKNOWN = 2,
    INVALID_ARGUMENT = 3,
    DEADLINE_EXCEEDED = 4,
    NOT_FOUND = 5,
    ALREADY_EXISTS = 6,
    PERMISSION_DENIED = 7,
    UNAUTHENTICATED = 16,
    RESOURCE_EXHAUSTED = 8,
    FAILED_PRECONDITION = 9,
    ABORTED = 10,
    OUT_OF_RANGE = 11,
    UNIMPLEMENTED = 12,
    INTERNAL = 13,
    UNAVAILABLE = 14,
    DATA_LOSS = 15,
    DO_NOT_USE_RESERVED_FOR_FUTURE_EXPANSION_USE_DEFAULT_IN_SWITCH_INSTEAD_ = 20,
}

impl ::protobuf::ProtobufEnum for Code {
    fn value(&self) -> i32 {
        *self as i32
    }

    fn from_i32(value: i32) -> ::std::option::Option<Code> {
        match value {
            0 => ::std::option::Option::Some(Code::OK),
            1 => ::std::option::Option::Some(Code::CANCELLED),
            2 => ::std::option::Option::Some(Code::UNKNOWN),
            3 => ::std::option::Option::Some(Code::INVALID_ARGUMENT),
            4 => ::std::option::Option::Some(Code::DEADLINE_EXCEEDED),
            5 => ::std::option::Option::Some(Code::NOT_FOUND),
            6 => ::std::option::Option::Some(Code::ALREADY_EXISTS),
            7 => ::std::option::Option::Some(Code::PERMISSION_DENIED),
            16 => ::std::option::Option::Some(Code::UNAUTHENTICATED),
            8 => ::std::option::Option::Some(Code::RESOURCE_EXHAUSTED),
            9 => ::std::option::Option::Some(Code::FAILED_PRECONDITION),
            10 => ::std::option::Option::Some(Code::ABORTED),
            11 => ::std::option::Option::Some(Code::OUT_OF_RANGE),
            12 => ::std::option::Option::Some(Code::UNIMPLEMENTED),
            13 => ::std::option::Option::Some(Code::INTERNAL),
            14 => ::std::option::Option::Some(Code::UNAVAILABLE),
            15 => ::std::option::Option::Some(Code::DATA_LOSS),
            20 => ::std::option::Option::Some(Code::DO_NOT_USE_RESERVED_FOR_FUTURE_EXPANSION_USE_DEFAULT_IN_SWITCH_INSTEAD_),
            _ => ::std::option::Option::None
        }
    }

    fn values() -> &'static [Self] {
        static values: &'static [Code] = &[
            Code::OK,
            Code::CANCELLED,
            Code::UNKNOWN,
            Code::INVALID_ARGUMENT,
            Code::DEADLINE_EXCEEDED,
            Code::NOT_FOUND,
            Code::ALREADY_EXISTS,
            Code::PERMISSION_DENIED,
            Code::UNAUTHENTICATED,
            Code::RESOURCE_EXHAUSTED,
            Code::FAILED_PRECONDITION,
            Code::ABORTED,
            Code::OUT_OF_RANGE,
            Code::UNIMPLEMENTED,
            Code::INTERNAL,
            Code::UNAVAILABLE,
            Code::DATA_LOSS,
            Code::DO_NOT_USE_RESERVED_FOR_FUTURE_EXPANSION_USE_DEFAULT_IN_SWITCH_INSTEAD_,
        ];
        values
    }

    fn enum_descriptor_static() -> &'static ::protobuf::reflect::EnumDescriptor {
        static mut descriptor: ::protobuf::lazy::Lazy<::protobuf::reflect::EnumDescriptor> = ::protobuf::lazy::Lazy::INIT;
        unsafe {
            descriptor.get(|| {
                ::protobuf::reflect::EnumDescriptor::new_pb_name::<Code>("Code", file_descriptor_proto())
            })
        }
    }
}

impl ::std::marker::Copy for Code {
}

impl ::std::default::Default for Code {
    fn default() -> Self {
        Code::OK
    }
}

impl ::protobuf::reflect::ProtobufValue for Code {
    fn as_ref(&self) -> ::protobuf::reflect::ReflectValueRef {
        ::protobuf::reflect::ReflectValueRef::Enum(self.descriptor())
    }
}

static file_descriptor_proto_data: &'static [u8] = b"\
    \n*tensorflow/core/protobuf/error_codes.proto\x12\x10tensorflow.error*\
    \x84\x03\n\x04Code\x12\x06\n\x02OK\x10\0\x12\r\n\tCANCELLED\x10\x01\x12\
    \x0b\n\x07UNKNOWN\x10\x02\x12\x14\n\x10INVALID_ARGUMENT\x10\x03\x12\x15\
    \n\x11DEADLINE_EXCEEDED\x10\x04\x12\r\n\tNOT_FOUND\x10\x05\x12\x12\n\x0e\
    ALREADY_EXISTS\x10\x06\x12\x15\n\x11PERMISSION_DENIED\x10\x07\x12\x13\n\
    \x0fUNAUTHENTICATED\x10\x10\x12\x16\n\x12RESOURCE_EXHAUSTED\x10\x08\x12\
    \x17\n\x13FAILED_PRECONDITION\x10\t\x12\x0b\n\x07ABORTED\x10\n\x12\x10\n\
    \x0cOUT_OF_RANGE\x10\x0b\x12\x11\n\rUNIMPLEMENTED\x10\x0c\x12\x0c\n\x08I\
    NTERNAL\x10\r\x12\x0f\n\x0bUNAVAILABLE\x10\x0e\x12\r\n\tDATA_LOSS\x10\
    \x0f\x12K\nGDO_NOT_USE_RESERVED_FOR_FUTURE_EXPANSION_USE_DEFAULT_IN_SWIT\
    CH_INSTEAD_\x10\x14B{\n\x18org.tensorflow.frameworkB\x10ErrorCodesProtos\
    P\x01ZHgithub.com/tensorflow/tensorflow/tensorflow/go/core/core_protos_g\
    o_proto\xf8\x01\x01J\xa11\n\x07\x12\x05\0\0\x97\x01\x01\n\x08\n\x01\x0c\
    \x12\x03\0\0\x12\n\x08\n\x01\x02\x12\x03\x02\0\x19\n\x08\n\x01\x08\x12\
    \x03\x04\0\x1f\n\t\n\x02\x08\x1f\x12\x03\x04\0\x1f\n\x08\n\x01\x08\x12\
    \x03\x05\01\n\t\n\x02\x08\x08\x12\x03\x05\01\n\x08\n\x01\x08\x12\x03\x06\
    \0\"\n\t\n\x02\x08\n\x12\x03\x06\0\"\n\x08\n\x01\x08\x12\x03\x07\01\n\t\
    \n\x02\x08\x01\x12\x03\x07\01\n\x08\n\x01\x08\x12\x03\x08\0_\n\t\n\x02\
    \x08\x0b\x12\x03\x08\0_\n\xd0\x05\n\x02\x05\0\x12\x05\x19\0\x97\x01\x01\
    \x1a\xc2\x05\x20The\x20canonical\x20error\x20codes\x20for\x20TensorFlow\
    \x20APIs.\n\n\x20Warnings:\n\n\x20-\x20\x20\x20Do\x20not\x20change\x20an\
    y\x20numeric\x20assignments.\n\x20-\x20\x20\x20Changes\x20to\x20this\x20\
    list\x20should\x20only\x20be\x20made\x20if\x20there\x20is\x20a\x20compel\
    ling\n\x20\x20\x20\x20\x20need\x20that\x20can't\x20be\x20satisfied\x20in\
    \x20another\x20way.\x20\x20Such\x20changes\n\x20\x20\x20\x20\x20must\x20\
    be\x20approved\x20by\x20at\x20least\x20two\x20OWNERS.\n\x20-\x20\x20\x20\
    These\x20error\x20codes\x20must\x20match\x20gRPC\x20and\x20protobuf\x20e\
    rror\x20codes\x20(except\x20for\n\x20\x20\x20\x20\x20DO_NOT_USE_RESERVED\
    _FOR_FUTURE_EXPANSION_USE_DEFAULT_IN_SWITCH_INSTEAD_).\n\n\x20Sometimes\
    \x20multiple\x20error\x20codes\x20may\x20apply.\x20\x20Services\x20shoul\
    d\x20return\n\x20the\x20most\x20specific\x20error\x20code\x20that\x20app\
    lies.\x20\x20For\x20example,\x20prefer\n\x20OUT_OF_RANGE\x20over\x20FAIL\
    ED_PRECONDITION\x20if\x20both\x20codes\x20apply.\n\x20Similarly\x20prefe\
    r\x20NOT_FOUND\x20or\x20ALREADY_EXISTS\x20over\x20FAILED_PRECONDITION.\n\
    \n\n\n\x03\x05\0\x01\x12\x03\x19\x05\t\n0\n\x04\x05\0\x02\0\x12\x03\x1b\
    \x02\t\x1a#\x20Not\x20an\x20error;\x20returned\x20on\x20success\n\n\x0c\
    \n\x05\x05\0\x02\0\x01\x12\x03\x1b\x02\x04\n\x0c\n\x05\x05\0\x02\0\x02\
    \x12\x03\x1b\x07\x08\nE\n\x04\x05\0\x02\x01\x12\x03\x1e\x02\x10\x1a8\x20\
    The\x20operation\x20was\x20cancelled\x20(typically\x20by\x20the\x20calle\
    r).\n\n\x0c\n\x05\x05\0\x02\x01\x01\x12\x03\x1e\x02\x0b\n\x0c\n\x05\x05\
    \0\x02\x01\x02\x12\x03\x1e\x0e\x0f\n\xb6\x02\n\x04\x05\0\x02\x02\x12\x03\
    %\x02\x0e\x1a\xa8\x02\x20Unknown\x20error.\x20\x20An\x20example\x20of\
    \x20where\x20this\x20error\x20may\x20be\x20returned\x20is\n\x20if\x20a\
    \x20Status\x20value\x20received\x20from\x20another\x20address\x20space\
    \x20belongs\x20to\n\x20an\x20error-space\x20that\x20is\x20not\x20known\
    \x20in\x20this\x20address\x20space.\x20\x20Also\n\x20errors\x20raised\
    \x20by\x20APIs\x20that\x20do\x20not\x20return\x20enough\x20error\x20info\
    rmation\n\x20may\x20be\x20converted\x20to\x20this\x20error.\n\n\x0c\n\
    \x05\x05\0\x02\x02\x01\x12\x03%\x02\t\n\x0c\n\x05\x05\0\x02\x02\x02\x12\
    \x03%\x0c\r\n\xea\x01\n\x04\x05\0\x02\x03\x12\x03+\x02\x17\x1a\xdc\x01\
    \x20Client\x20specified\x20an\x20invalid\x20argument.\x20\x20Note\x20tha\
    t\x20this\x20differs\n\x20from\x20FAILED_PRECONDITION.\x20\x20INVALID_AR\
    GUMENT\x20indicates\x20arguments\n\x20that\x20are\x20problematic\x20rega\
    rdless\x20of\x20the\x20state\x20of\x20the\x20system\n\x20(e.g.,\x20a\x20\
    malformed\x20file\x20name).\n\n\x0c\n\x05\x05\0\x02\x03\x01\x12\x03+\x02\
    \x12\n\x0c\n\x05\x05\0\x02\x03\x02\x12\x03+\x15\x16\n\xb9\x02\n\x04\x05\
    \0\x02\x04\x12\x032\x02\x18\x1a\xab\x02\x20Deadline\x20expired\x20before\
    \x20operation\x20could\x20complete.\x20\x20For\x20operations\n\x20that\
    \x20change\x20the\x20state\x20of\x20the\x20system,\x20this\x20error\x20m\
    ay\x20be\x20returned\n\x20even\x20if\x20the\x20operation\x20has\x20compl\
    eted\x20successfully.\x20\x20For\x20example,\x20a\n\x20successful\x20res\
    ponse\x20from\x20a\x20server\x20could\x20have\x20been\x20delayed\x20long\
    \n\x20enough\x20for\x20the\x20deadline\x20to\x20expire.\n\n\x0c\n\x05\
    \x05\0\x02\x04\x01\x12\x032\x02\x13\n\x0c\n\x05\x05\0\x02\x04\x02\x12\
    \x032\x16\x17\n\xbf\x01\n\x04\x05\0\x02\x05\x12\x037\x02\x10\x1a\xb1\x01\
    \x20Some\x20requested\x20entity\x20(e.g.,\x20file\x20or\x20directory)\
    \x20was\x20not\x20found.\n\x20For\x20privacy\x20reasons,\x20this\x20code\
    \x20*may*\x20be\x20returned\x20when\x20the\x20client\n\x20does\x20not\
    \x20have\x20the\x20access\x20right\x20to\x20the\x20entity.\n\n\x0c\n\x05\
    \x05\0\x02\x05\x01\x12\x037\x02\x0b\n\x0c\n\x05\x05\0\x02\x05\x02\x12\
    \x037\x0e\x0f\na\n\x04\x05\0\x02\x06\x12\x03;\x02\x15\x1aT\x20Some\x20en\
    tity\x20that\x20we\x20attempted\x20to\x20create\x20(e.g.,\x20file\x20or\
    \x20directory)\n\x20already\x20exists.\n\n\x0c\n\x05\x05\0\x02\x06\x01\
    \x12\x03;\x02\x10\n\x0c\n\x05\x05\0\x02\x06\x02\x12\x03;\x13\x14\n\xdd\
    \x02\n\x04\x05\0\x02\x07\x12\x03C\x02\x18\x1a\xcf\x02\x20The\x20caller\
    \x20does\x20not\x20have\x20permission\x20to\x20execute\x20the\x20specifi\
    ed\n\x20operation.\x20\x20PERMISSION_DENIED\x20must\x20not\x20be\x20used\
    \x20for\x20rejections\n\x20caused\x20by\x20exhausting\x20some\x20resourc\
    e\x20(use\x20RESOURCE_EXHAUSTED\n\x20instead\x20for\x20those\x20errors).\
    \x20\x20PERMISSION_DENIED\x20must\x20not\x20be\n\x20used\x20if\x20the\
    \x20caller\x20can\x20not\x20be\x20identified\x20(use\x20UNAUTHENTICATED\
    \n\x20instead\x20for\x20those\x20errors).\n\n\x0c\n\x05\x05\0\x02\x07\
    \x01\x12\x03C\x02\x13\n\x0c\n\x05\x05\0\x02\x07\x02\x12\x03C\x16\x17\n]\
    \n\x04\x05\0\x02\x08\x12\x03G\x02\x17\x1aP\x20The\x20request\x20does\x20\
    not\x20have\x20valid\x20authentication\x20credentials\x20for\x20the\n\
    \x20operation.\n\n\x0c\n\x05\x05\0\x02\x08\x01\x12\x03G\x02\x11\n\x0c\n\
    \x05\x05\0\x02\x08\x02\x12\x03G\x14\x16\n~\n\x04\x05\0\x02\t\x12\x03K\
    \x02\x19\x1aq\x20Some\x20resource\x20has\x20been\x20exhausted,\x20perhap\
    s\x20a\x20per-user\x20quota,\x20or\n\x20perhaps\x20the\x20entire\x20file\
    \x20system\x20is\x20out\x20of\x20space.\n\n\x0c\n\x05\x05\0\x02\t\x01\
    \x12\x03K\x02\x14\n\x0c\n\x05\x05\0\x02\t\x02\x12\x03K\x17\x18\n\xdf\x08\
    \n\x04\x05\0\x02\n\x12\x03`\x02\x1a\x1a\xd1\x08\x20Operation\x20was\x20r\
    ejected\x20because\x20the\x20system\x20is\x20not\x20in\x20a\x20state\n\
    \x20required\x20for\x20the\x20operation's\x20execution.\x20\x20For\x20ex\
    ample,\x20directory\n\x20to\x20be\x20deleted\x20may\x20be\x20non-empty,\
    \x20an\x20rmdir\x20operation\x20is\x20applied\x20to\n\x20a\x20non-direct\
    ory,\x20etc.\n\n\x20A\x20litmus\x20test\x20that\x20may\x20help\x20a\x20s\
    ervice\x20implementor\x20in\x20deciding\n\x20between\x20FAILED_PRECONDIT\
    ION,\x20ABORTED,\x20and\x20UNAVAILABLE:\n\x20\x20(a)\x20Use\x20UNAVAILAB\
    LE\x20if\x20the\x20client\x20can\x20retry\x20just\x20the\x20failing\x20c\
    all.\n\x20\x20(b)\x20Use\x20ABORTED\x20if\x20the\x20client\x20should\x20\
    retry\x20at\x20a\x20higher-level\n\x20\x20\x20\x20\x20\x20(e.g.,\x20rest\
    arting\x20a\x20read-modify-write\x20sequence).\n\x20\x20(c)\x20Use\x20FA\
    ILED_PRECONDITION\x20if\x20the\x20client\x20should\x20not\x20retry\x20un\
    til\n\x20\x20\x20\x20\x20\x20the\x20system\x20state\x20has\x20been\x20ex\
    plicitly\x20fixed.\x20\x20E.g.,\x20if\x20an\x20\"rmdir\"\n\x20\x20\x20\
    \x20\x20\x20fails\x20because\x20the\x20directory\x20is\x20non-empty,\x20\
    FAILED_PRECONDITION\n\x20\x20\x20\x20\x20\x20should\x20be\x20returned\
    \x20since\x20the\x20client\x20should\x20not\x20retry\x20unless\n\x20\x20\
    \x20\x20\x20\x20they\x20have\x20first\x20fixed\x20up\x20the\x20directory\
    \x20by\x20deleting\x20files\x20from\x20it.\n\x20\x20(d)\x20Use\x20FAILED\
    _PRECONDITION\x20if\x20the\x20client\x20performs\x20conditional\n\x20\
    \x20\x20\x20\x20\x20REST\x20Get/Update/Delete\x20on\x20a\x20resource\x20\
    and\x20the\x20resource\x20on\x20the\n\x20\x20\x20\x20\x20\x20server\x20d\
    oes\x20not\x20match\x20the\x20condition.\x20E.g.,\x20conflicting\n\x20\
    \x20\x20\x20\x20\x20read-modify-write\x20on\x20the\x20same\x20resource.\
    \n\n\x0c\n\x05\x05\0\x02\n\x01\x12\x03`\x02\x15\n\x0c\n\x05\x05\0\x02\n\
    \x02\x12\x03`\x18\x19\n\xe5\x01\n\x04\x05\0\x02\x0b\x12\x03g\x02\x0f\x1a\
    \xd7\x01\x20The\x20operation\x20was\x20aborted,\x20typically\x20due\x20t\
    o\x20a\x20concurrency\x20issue\n\x20like\x20sequencer\x20check\x20failur\
    es,\x20transaction\x20aborts,\x20etc.\n\n\x20See\x20litmus\x20test\x20ab\
    ove\x20for\x20deciding\x20between\x20FAILED_PRECONDITION,\n\x20ABORTED,\
    \x20and\x20UNAVAILABLE.\n\n\x0c\n\x05\x05\0\x02\x0b\x01\x12\x03g\x02\t\n\
    \x0c\n\x05\x05\0\x02\x0b\x02\x12\x03g\x0c\x0e\n\xdb\x05\n\x04\x05\0\x02\
    \x0c\x12\x03x\x02\x14\x1a\xcd\x05\x20Operation\x20tried\x20to\x20iterate\
    \x20past\x20the\x20valid\x20input\x20range.\x20\x20E.g.,\x20seeking\x20o\
    r\n\x20reading\x20past\x20end\x20of\x20file.\n\n\x20Unlike\x20INVALID_AR\
    GUMENT,\x20this\x20error\x20indicates\x20a\x20problem\x20that\x20may\n\
    \x20be\x20fixed\x20if\x20the\x20system\x20state\x20changes.\x20For\x20ex\
    ample,\x20a\x2032-bit\x20file\n\x20system\x20will\x20generate\x20INVALID\
    _ARGUMENT\x20if\x20asked\x20to\x20read\x20at\x20an\n\x20offset\x20that\
    \x20is\x20not\x20in\x20the\x20range\x20[0,2^32-1],\x20but\x20it\x20will\
    \x20generate\n\x20OUT_OF_RANGE\x20if\x20asked\x20to\x20read\x20from\x20a\
    n\x20offset\x20past\x20the\x20current\n\x20file\x20size.\n\n\x20There\
    \x20is\x20a\x20fair\x20bit\x20of\x20overlap\x20between\x20FAILED_PRECOND\
    ITION\x20and\n\x20OUT_OF_RANGE.\x20\x20We\x20recommend\x20using\x20OUT_O\
    F_RANGE\x20(the\x20more\x20specific\n\x20error)\x20when\x20it\x20applies\
    \x20so\x20that\x20callers\x20who\x20are\x20iterating\x20through\n\x20a\
    \x20space\x20can\x20easily\x20look\x20for\x20an\x20OUT_OF_RANGE\x20error\
    \x20to\x20detect\x20when\n\x20they\x20are\x20done.\n\n\x0c\n\x05\x05\0\
    \x02\x0c\x01\x12\x03x\x02\x0e\n\x0c\n\x05\x05\0\x02\x0c\x02\x12\x03x\x11\
    \x13\nU\n\x04\x05\0\x02\r\x12\x03{\x02\x15\x1aH\x20Operation\x20is\x20no\
    t\x20implemented\x20or\x20not\x20supported/enabled\x20in\x20this\x20serv\
    ice.\n\n\x0c\n\x05\x05\0\x02\r\x01\x12\x03{\x02\x0f\n\x0c\n\x05\x05\0\
    \x02\r\x02\x12\x03{\x12\x14\n\xa7\x01\n\x04\x05\0\x02\x0e\x12\x04\x80\
    \x01\x02\x10\x1a\x98\x01\x20Internal\x20errors.\x20\x20Means\x20some\x20\
    invariant\x20expected\x20by\x20the\x20underlying\n\x20system\x20has\x20b\
    een\x20broken.\x20\x20If\x20you\x20see\x20one\x20of\x20these\x20errors,\
    \n\x20something\x20is\x20very\x20broken.\n\n\r\n\x05\x05\0\x02\x0e\x01\
    \x12\x04\x80\x01\x02\n\n\r\n\x05\x05\0\x02\x0e\x02\x12\x04\x80\x01\r\x0f\
    \n\xf3\x01\n\x04\x05\0\x02\x0f\x12\x04\x88\x01\x02\x13\x1a\xe4\x01\x20Th\
    e\x20service\x20is\x20currently\x20unavailable.\x20\x20This\x20is\x20a\
    \x20most\x20likely\x20a\n\x20transient\x20condition\x20and\x20may\x20be\
    \x20corrected\x20by\x20retrying\x20with\n\x20a\x20backoff.\n\n\x20See\
    \x20litmus\x20test\x20above\x20for\x20deciding\x20between\x20FAILED_PREC\
    ONDITION,\n\x20ABORTED,\x20and\x20UNAVAILABLE.\n\n\r\n\x05\x05\0\x02\x0f\
    \x01\x12\x04\x88\x01\x02\r\n\r\n\x05\x05\0\x02\x0f\x02\x12\x04\x88\x01\
    \x10\x12\n6\n\x04\x05\0\x02\x10\x12\x04\x8b\x01\x02\x11\x1a(\x20Unrecove\
    rable\x20data\x20loss\x20or\x20corruption.\n\n\r\n\x05\x05\0\x02\x10\x01\
    \x12\x04\x8b\x01\x02\x0b\n\r\n\x05\x05\0\x02\x10\x02\x12\x04\x8b\x01\x0e\
    \x10\n\xa3\x03\n\x04\x05\0\x02\x11\x12\x04\x96\x01\x02O\x1a\x94\x03\x20A\
    n\x20extra\x20enum\x20entry\x20to\x20prevent\x20people\x20from\x20writin\
    g\x20code\x20that\n\x20fails\x20to\x20compile\x20when\x20a\x20new\x20cod\
    e\x20is\x20added.\n\n\x20Nobody\x20should\x20ever\x20reference\x20this\
    \x20enumeration\x20entry.\x20In\x20particular,\n\x20if\x20you\x20write\
    \x20C++\x20code\x20that\x20switches\x20on\x20this\x20enumeration,\x20add\
    \x20a\x20default:\n\x20case\x20instead\x20of\x20a\x20case\x20that\x20men\
    tions\x20this\x20enumeration\x20entry.\n\n\x20Nobody\x20should\x20rely\
    \x20on\x20the\x20value\x20(currently\x2020)\x20listed\x20here.\x20\x20It\
    \n\x20may\x20change\x20in\x20the\x20future.\n\n\r\n\x05\x05\0\x02\x11\
    \x01\x12\x04\x96\x01\x02I\n\r\n\x05\x05\0\x02\x11\x02\x12\x04\x96\x01LNb\
    \x06proto3\
";

static mut file_descriptor_proto_lazy: ::protobuf::lazy::Lazy<::protobuf::descriptor::FileDescriptorProto> = ::protobuf::lazy::Lazy::INIT;

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