// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.23.0
// 	protoc        v3.14.0
// source: tensorflow_serving/apis/classification.proto

package tensorflow_serving

import (
	proto "github.com/golang/protobuf/proto"
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

// This is a compile-time assertion that a sufficiently up-to-date version
// of the legacy proto package is being used.
const _ = proto.ProtoPackageIsVersion4

// A single class.
type Class struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Label or name of the class.
	Label string `protobuf:"bytes,1,opt,name=label,proto3" json:"label,omitempty"`
	// Score for this class (e.g., the probability the item belongs to this
	// class). As per the proto3 default-value semantics, if the score is missing,
	// it should be treated as 0.
	Score float32 `protobuf:"fixed32,2,opt,name=score,proto3" json:"score,omitempty"`
}

func (x *Class) Reset() {
	*x = Class{}
	if protoimpl.UnsafeEnabled {
		mi := &file_tensorflow_serving_apis_classification_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Class) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Class) ProtoMessage() {}

func (x *Class) ProtoReflect() protoreflect.Message {
	mi := &file_tensorflow_serving_apis_classification_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Class.ProtoReflect.Descriptor instead.
func (*Class) Descriptor() ([]byte, []int) {
	return file_tensorflow_serving_apis_classification_proto_rawDescGZIP(), []int{0}
}

func (x *Class) GetLabel() string {
	if x != nil {
		return x.Label
	}
	return ""
}

func (x *Class) GetScore() float32 {
	if x != nil {
		return x.Score
	}
	return 0
}

// List of classes for a single item (tensorflow.Example).
type Classifications struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Classes []*Class `protobuf:"bytes,1,rep,name=classes,proto3" json:"classes,omitempty"`
}

func (x *Classifications) Reset() {
	*x = Classifications{}
	if protoimpl.UnsafeEnabled {
		mi := &file_tensorflow_serving_apis_classification_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Classifications) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Classifications) ProtoMessage() {}

func (x *Classifications) ProtoReflect() protoreflect.Message {
	mi := &file_tensorflow_serving_apis_classification_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Classifications.ProtoReflect.Descriptor instead.
func (*Classifications) Descriptor() ([]byte, []int) {
	return file_tensorflow_serving_apis_classification_proto_rawDescGZIP(), []int{1}
}

func (x *Classifications) GetClasses() []*Class {
	if x != nil {
		return x.Classes
	}
	return nil
}

// Contains one result per input example, in the same order as the input in
// ClassificationRequest.
type ClassificationResult struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Classifications []*Classifications `protobuf:"bytes,1,rep,name=classifications,proto3" json:"classifications,omitempty"`
}

func (x *ClassificationResult) Reset() {
	*x = ClassificationResult{}
	if protoimpl.UnsafeEnabled {
		mi := &file_tensorflow_serving_apis_classification_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ClassificationResult) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ClassificationResult) ProtoMessage() {}

func (x *ClassificationResult) ProtoReflect() protoreflect.Message {
	mi := &file_tensorflow_serving_apis_classification_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ClassificationResult.ProtoReflect.Descriptor instead.
func (*ClassificationResult) Descriptor() ([]byte, []int) {
	return file_tensorflow_serving_apis_classification_proto_rawDescGZIP(), []int{2}
}

func (x *ClassificationResult) GetClassifications() []*Classifications {
	if x != nil {
		return x.Classifications
	}
	return nil
}

type ClassificationRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Model Specification. If version is not specified, will use the latest
	// (numerical) version.
	ModelSpec *ModelSpec `protobuf:"bytes,1,opt,name=model_spec,json=modelSpec,proto3" json:"model_spec,omitempty"`
	// Input data.
	Input *Input `protobuf:"bytes,2,opt,name=input,proto3" json:"input,omitempty"`
}

func (x *ClassificationRequest) Reset() {
	*x = ClassificationRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_tensorflow_serving_apis_classification_proto_msgTypes[3]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ClassificationRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ClassificationRequest) ProtoMessage() {}

func (x *ClassificationRequest) ProtoReflect() protoreflect.Message {
	mi := &file_tensorflow_serving_apis_classification_proto_msgTypes[3]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ClassificationRequest.ProtoReflect.Descriptor instead.
func (*ClassificationRequest) Descriptor() ([]byte, []int) {
	return file_tensorflow_serving_apis_classification_proto_rawDescGZIP(), []int{3}
}

func (x *ClassificationRequest) GetModelSpec() *ModelSpec {
	if x != nil {
		return x.ModelSpec
	}
	return nil
}

func (x *ClassificationRequest) GetInput() *Input {
	if x != nil {
		return x.Input
	}
	return nil
}

type ClassificationResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Effective Model Specification used for classification.
	ModelSpec *ModelSpec `protobuf:"bytes,2,opt,name=model_spec,json=modelSpec,proto3" json:"model_spec,omitempty"`
	// Result of the classification.
	Result *ClassificationResult `protobuf:"bytes,1,opt,name=result,proto3" json:"result,omitempty"`
}

func (x *ClassificationResponse) Reset() {
	*x = ClassificationResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_tensorflow_serving_apis_classification_proto_msgTypes[4]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ClassificationResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ClassificationResponse) ProtoMessage() {}

func (x *ClassificationResponse) ProtoReflect() protoreflect.Message {
	mi := &file_tensorflow_serving_apis_classification_proto_msgTypes[4]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ClassificationResponse.ProtoReflect.Descriptor instead.
func (*ClassificationResponse) Descriptor() ([]byte, []int) {
	return file_tensorflow_serving_apis_classification_proto_rawDescGZIP(), []int{4}
}

func (x *ClassificationResponse) GetModelSpec() *ModelSpec {
	if x != nil {
		return x.ModelSpec
	}
	return nil
}

func (x *ClassificationResponse) GetResult() *ClassificationResult {
	if x != nil {
		return x.Result
	}
	return nil
}

var File_tensorflow_serving_apis_classification_proto protoreflect.FileDescriptor

var file_tensorflow_serving_apis_classification_proto_rawDesc = []byte{
	0x0a, 0x2c, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x5f, 0x73, 0x65, 0x72,
	0x76, 0x69, 0x6e, 0x67, 0x2f, 0x61, 0x70, 0x69, 0x73, 0x2f, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x69,
	0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x12,
	0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69,
	0x6e, 0x67, 0x1a, 0x23, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x5f, 0x73,
	0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2f, 0x61, 0x70, 0x69, 0x73, 0x2f, 0x69, 0x6e, 0x70, 0x75,
	0x74, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x1a, 0x23, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66,
	0x6c, 0x6f, 0x77, 0x5f, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2f, 0x61, 0x70, 0x69, 0x73,
	0x2f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x22, 0x33, 0x0a, 0x05,
	0x43, 0x6c, 0x61, 0x73, 0x73, 0x12, 0x14, 0x0a, 0x05, 0x6c, 0x61, 0x62, 0x65, 0x6c, 0x18, 0x01,
	0x20, 0x01, 0x28, 0x09, 0x52, 0x05, 0x6c, 0x61, 0x62, 0x65, 0x6c, 0x12, 0x14, 0x0a, 0x05, 0x73,
	0x63, 0x6f, 0x72, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x02, 0x52, 0x05, 0x73, 0x63, 0x6f, 0x72,
	0x65, 0x22, 0x46, 0x0a, 0x0f, 0x43, 0x6c, 0x61, 0x73, 0x73, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74,
	0x69, 0x6f, 0x6e, 0x73, 0x12, 0x33, 0x0a, 0x07, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x65, 0x73, 0x18,
	0x01, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x19, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c,
	0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e, 0x43, 0x6c, 0x61, 0x73, 0x73,
	0x52, 0x07, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x65, 0x73, 0x22, 0x65, 0x0a, 0x14, 0x43, 0x6c, 0x61,
	0x73, 0x73, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x52, 0x65, 0x73, 0x75, 0x6c,
	0x74, 0x12, 0x4d, 0x0a, 0x0f, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74,
	0x69, 0x6f, 0x6e, 0x73, 0x18, 0x01, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x23, 0x2e, 0x74, 0x65, 0x6e,
	0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e,
	0x43, 0x6c, 0x61, 0x73, 0x73, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x52,
	0x0f, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73,
	0x22, 0x86, 0x01, 0x0a, 0x15, 0x43, 0x6c, 0x61, 0x73, 0x73, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74,
	0x69, 0x6f, 0x6e, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x12, 0x3c, 0x0a, 0x0a, 0x6d, 0x6f,
	0x64, 0x65, 0x6c, 0x5f, 0x73, 0x70, 0x65, 0x63, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1d,
	0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76,
	0x69, 0x6e, 0x67, 0x2e, 0x4d, 0x6f, 0x64, 0x65, 0x6c, 0x53, 0x70, 0x65, 0x63, 0x52, 0x09, 0x6d,
	0x6f, 0x64, 0x65, 0x6c, 0x53, 0x70, 0x65, 0x63, 0x12, 0x2f, 0x0a, 0x05, 0x69, 0x6e, 0x70, 0x75,
	0x74, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x19, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72,
	0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e, 0x49, 0x6e, 0x70,
	0x75, 0x74, 0x52, 0x05, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x22, 0x98, 0x01, 0x0a, 0x16, 0x43, 0x6c,
	0x61, 0x73, 0x73, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x52, 0x65, 0x73, 0x70,
	0x6f, 0x6e, 0x73, 0x65, 0x12, 0x3c, 0x0a, 0x0a, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5f, 0x73, 0x70,
	0x65, 0x63, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1d, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f,
	0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e, 0x4d, 0x6f,
	0x64, 0x65, 0x6c, 0x53, 0x70, 0x65, 0x63, 0x52, 0x09, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x53, 0x70,
	0x65, 0x63, 0x12, 0x40, 0x0a, 0x06, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x18, 0x01, 0x20, 0x01,
	0x28, 0x0b, 0x32, 0x28, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e,
	0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e, 0x43, 0x6c, 0x61, 0x73, 0x73, 0x69, 0x66, 0x69,
	0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x52, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x52, 0x06, 0x72, 0x65,
	0x73, 0x75, 0x6c, 0x74, 0x42, 0x03, 0xf8, 0x01, 0x01, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f,
	0x33,
}

var (
	file_tensorflow_serving_apis_classification_proto_rawDescOnce sync.Once
	file_tensorflow_serving_apis_classification_proto_rawDescData = file_tensorflow_serving_apis_classification_proto_rawDesc
)

func file_tensorflow_serving_apis_classification_proto_rawDescGZIP() []byte {
	file_tensorflow_serving_apis_classification_proto_rawDescOnce.Do(func() {
		file_tensorflow_serving_apis_classification_proto_rawDescData = protoimpl.X.CompressGZIP(file_tensorflow_serving_apis_classification_proto_rawDescData)
	})
	return file_tensorflow_serving_apis_classification_proto_rawDescData
}

var file_tensorflow_serving_apis_classification_proto_msgTypes = make([]protoimpl.MessageInfo, 5)
var file_tensorflow_serving_apis_classification_proto_goTypes = []interface{}{
	(*Class)(nil),                  // 0: tensorflow.serving.Class
	(*Classifications)(nil),        // 1: tensorflow.serving.Classifications
	(*ClassificationResult)(nil),   // 2: tensorflow.serving.ClassificationResult
	(*ClassificationRequest)(nil),  // 3: tensorflow.serving.ClassificationRequest
	(*ClassificationResponse)(nil), // 4: tensorflow.serving.ClassificationResponse
	(*ModelSpec)(nil),              // 5: tensorflow.serving.ModelSpec
	(*Input)(nil),                  // 6: tensorflow.serving.Input
}
var file_tensorflow_serving_apis_classification_proto_depIdxs = []int32{
	0, // 0: tensorflow.serving.Classifications.classes:type_name -> tensorflow.serving.Class
	1, // 1: tensorflow.serving.ClassificationResult.classifications:type_name -> tensorflow.serving.Classifications
	5, // 2: tensorflow.serving.ClassificationRequest.model_spec:type_name -> tensorflow.serving.ModelSpec
	6, // 3: tensorflow.serving.ClassificationRequest.input:type_name -> tensorflow.serving.Input
	5, // 4: tensorflow.serving.ClassificationResponse.model_spec:type_name -> tensorflow.serving.ModelSpec
	2, // 5: tensorflow.serving.ClassificationResponse.result:type_name -> tensorflow.serving.ClassificationResult
	6, // [6:6] is the sub-list for method output_type
	6, // [6:6] is the sub-list for method input_type
	6, // [6:6] is the sub-list for extension type_name
	6, // [6:6] is the sub-list for extension extendee
	0, // [0:6] is the sub-list for field type_name
}

func init() { file_tensorflow_serving_apis_classification_proto_init() }
func file_tensorflow_serving_apis_classification_proto_init() {
	if File_tensorflow_serving_apis_classification_proto != nil {
		return
	}
	file_tensorflow_serving_apis_input_proto_init()
	file_tensorflow_serving_apis_model_proto_init()
	if !protoimpl.UnsafeEnabled {
		file_tensorflow_serving_apis_classification_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Class); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_tensorflow_serving_apis_classification_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Classifications); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_tensorflow_serving_apis_classification_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ClassificationResult); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_tensorflow_serving_apis_classification_proto_msgTypes[3].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ClassificationRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_tensorflow_serving_apis_classification_proto_msgTypes[4].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ClassificationResponse); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_tensorflow_serving_apis_classification_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   5,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_tensorflow_serving_apis_classification_proto_goTypes,
		DependencyIndexes: file_tensorflow_serving_apis_classification_proto_depIdxs,
		MessageInfos:      file_tensorflow_serving_apis_classification_proto_msgTypes,
	}.Build()
	File_tensorflow_serving_apis_classification_proto = out.File
	file_tensorflow_serving_apis_classification_proto_rawDesc = nil
	file_tensorflow_serving_apis_classification_proto_goTypes = nil
	file_tensorflow_serving_apis_classification_proto_depIdxs = nil
}
