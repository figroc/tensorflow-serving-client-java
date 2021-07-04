// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.23.0
// 	protoc        v3.14.0
// source: tensorflow_serving/apis/model_service.proto

package tensorflow_serving

import (
	context "context"
	proto "github.com/golang/protobuf/proto"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
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

var File_tensorflow_serving_apis_model_service_proto protoreflect.FileDescriptor

var file_tensorflow_serving_apis_model_service_proto_rawDesc = []byte{
	0x0a, 0x2b, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x5f, 0x73, 0x65, 0x72,
	0x76, 0x69, 0x6e, 0x67, 0x2f, 0x61, 0x70, 0x69, 0x73, 0x2f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5f,
	0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x12, 0x74,
	0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e,
	0x67, 0x1a, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x5f, 0x73, 0x65,
	0x72, 0x76, 0x69, 0x6e, 0x67, 0x2f, 0x61, 0x70, 0x69, 0x73, 0x2f, 0x67, 0x65, 0x74, 0x5f, 0x6d,
	0x6f, 0x64, 0x65, 0x6c, 0x5f, 0x73, 0x74, 0x61, 0x74, 0x75, 0x73, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x1a, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x5f, 0x73, 0x65,
	0x72, 0x76, 0x69, 0x6e, 0x67, 0x2f, 0x61, 0x70, 0x69, 0x73, 0x2f, 0x6d, 0x6f, 0x64, 0x65, 0x6c,
	0x5f, 0x6d, 0x61, 0x6e, 0x61, 0x67, 0x65, 0x6d, 0x65, 0x6e, 0x74, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x32, 0xe7, 0x01, 0x0a, 0x0c, 0x4d, 0x6f, 0x64, 0x65, 0x6c, 0x53, 0x65, 0x72, 0x76, 0x69,
	0x63, 0x65, 0x12, 0x67, 0x0a, 0x0e, 0x47, 0x65, 0x74, 0x4d, 0x6f, 0x64, 0x65, 0x6c, 0x53, 0x74,
	0x61, 0x74, 0x75, 0x73, 0x12, 0x29, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f,
	0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e, 0x47, 0x65, 0x74, 0x4d, 0x6f, 0x64,
	0x65, 0x6c, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a,
	0x2a, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72,
	0x76, 0x69, 0x6e, 0x67, 0x2e, 0x47, 0x65, 0x74, 0x4d, 0x6f, 0x64, 0x65, 0x6c, 0x53, 0x74, 0x61,
	0x74, 0x75, 0x73, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x12, 0x6e, 0x0a, 0x19, 0x48,
	0x61, 0x6e, 0x64, 0x6c, 0x65, 0x52, 0x65, 0x6c, 0x6f, 0x61, 0x64, 0x43, 0x6f, 0x6e, 0x66, 0x69,
	0x67, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x12, 0x27, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f,
	0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e, 0x52, 0x65,
	0x6c, 0x6f, 0x61, 0x64, 0x43, 0x6f, 0x6e, 0x66, 0x69, 0x67, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73,
	0x74, 0x1a, 0x28, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73,
	0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e, 0x52, 0x65, 0x6c, 0x6f, 0x61, 0x64, 0x43, 0x6f, 0x6e,
	0x66, 0x69, 0x67, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x42, 0x03, 0xf8, 0x01, 0x01,
	0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var file_tensorflow_serving_apis_model_service_proto_goTypes = []interface{}{
	(*GetModelStatusRequest)(nil),  // 0: tensorflow.serving.GetModelStatusRequest
	(*ReloadConfigRequest)(nil),    // 1: tensorflow.serving.ReloadConfigRequest
	(*GetModelStatusResponse)(nil), // 2: tensorflow.serving.GetModelStatusResponse
	(*ReloadConfigResponse)(nil),   // 3: tensorflow.serving.ReloadConfigResponse
}
var file_tensorflow_serving_apis_model_service_proto_depIdxs = []int32{
	0, // 0: tensorflow.serving.ModelService.GetModelStatus:input_type -> tensorflow.serving.GetModelStatusRequest
	1, // 1: tensorflow.serving.ModelService.HandleReloadConfigRequest:input_type -> tensorflow.serving.ReloadConfigRequest
	2, // 2: tensorflow.serving.ModelService.GetModelStatus:output_type -> tensorflow.serving.GetModelStatusResponse
	3, // 3: tensorflow.serving.ModelService.HandleReloadConfigRequest:output_type -> tensorflow.serving.ReloadConfigResponse
	2, // [2:4] is the sub-list for method output_type
	0, // [0:2] is the sub-list for method input_type
	0, // [0:0] is the sub-list for extension type_name
	0, // [0:0] is the sub-list for extension extendee
	0, // [0:0] is the sub-list for field type_name
}

func init() { file_tensorflow_serving_apis_model_service_proto_init() }
func file_tensorflow_serving_apis_model_service_proto_init() {
	if File_tensorflow_serving_apis_model_service_proto != nil {
		return
	}
	file_tensorflow_serving_apis_get_model_status_proto_init()
	file_tensorflow_serving_apis_model_management_proto_init()
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_tensorflow_serving_apis_model_service_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   0,
			NumExtensions: 0,
			NumServices:   1,
		},
		GoTypes:           file_tensorflow_serving_apis_model_service_proto_goTypes,
		DependencyIndexes: file_tensorflow_serving_apis_model_service_proto_depIdxs,
	}.Build()
	File_tensorflow_serving_apis_model_service_proto = out.File
	file_tensorflow_serving_apis_model_service_proto_rawDesc = nil
	file_tensorflow_serving_apis_model_service_proto_goTypes = nil
	file_tensorflow_serving_apis_model_service_proto_depIdxs = nil
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConnInterface

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion6

// ModelServiceClient is the client API for ModelService service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type ModelServiceClient interface {
	// Gets status of model. If the ModelSpec in the request does not specify
	// version, information about all versions of the model will be returned. If
	// the ModelSpec in the request does specify a version, the status of only
	// that version will be returned.
	GetModelStatus(ctx context.Context, in *GetModelStatusRequest, opts ...grpc.CallOption) (*GetModelStatusResponse, error)
	// Reloads the set of served models. The new config supersedes the old one,
	// so if a model is omitted from the new config it will be unloaded and no
	// longer served.
	HandleReloadConfigRequest(ctx context.Context, in *ReloadConfigRequest, opts ...grpc.CallOption) (*ReloadConfigResponse, error)
}

type modelServiceClient struct {
	cc grpc.ClientConnInterface
}

func NewModelServiceClient(cc grpc.ClientConnInterface) ModelServiceClient {
	return &modelServiceClient{cc}
}

func (c *modelServiceClient) GetModelStatus(ctx context.Context, in *GetModelStatusRequest, opts ...grpc.CallOption) (*GetModelStatusResponse, error) {
	out := new(GetModelStatusResponse)
	err := c.cc.Invoke(ctx, "/tensorflow.serving.ModelService/GetModelStatus", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *modelServiceClient) HandleReloadConfigRequest(ctx context.Context, in *ReloadConfigRequest, opts ...grpc.CallOption) (*ReloadConfigResponse, error) {
	out := new(ReloadConfigResponse)
	err := c.cc.Invoke(ctx, "/tensorflow.serving.ModelService/HandleReloadConfigRequest", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// ModelServiceServer is the server API for ModelService service.
type ModelServiceServer interface {
	// Gets status of model. If the ModelSpec in the request does not specify
	// version, information about all versions of the model will be returned. If
	// the ModelSpec in the request does specify a version, the status of only
	// that version will be returned.
	GetModelStatus(context.Context, *GetModelStatusRequest) (*GetModelStatusResponse, error)
	// Reloads the set of served models. The new config supersedes the old one,
	// so if a model is omitted from the new config it will be unloaded and no
	// longer served.
	HandleReloadConfigRequest(context.Context, *ReloadConfigRequest) (*ReloadConfigResponse, error)
}

// UnimplementedModelServiceServer can be embedded to have forward compatible implementations.
type UnimplementedModelServiceServer struct {
}

func (*UnimplementedModelServiceServer) GetModelStatus(context.Context, *GetModelStatusRequest) (*GetModelStatusResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method GetModelStatus not implemented")
}
func (*UnimplementedModelServiceServer) HandleReloadConfigRequest(context.Context, *ReloadConfigRequest) (*ReloadConfigResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method HandleReloadConfigRequest not implemented")
}

func RegisterModelServiceServer(s *grpc.Server, srv ModelServiceServer) {
	s.RegisterService(&_ModelService_serviceDesc, srv)
}

func _ModelService_GetModelStatus_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(GetModelStatusRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(ModelServiceServer).GetModelStatus(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/tensorflow.serving.ModelService/GetModelStatus",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(ModelServiceServer).GetModelStatus(ctx, req.(*GetModelStatusRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _ModelService_HandleReloadConfigRequest_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(ReloadConfigRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(ModelServiceServer).HandleReloadConfigRequest(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/tensorflow.serving.ModelService/HandleReloadConfigRequest",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(ModelServiceServer).HandleReloadConfigRequest(ctx, req.(*ReloadConfigRequest))
	}
	return interceptor(ctx, in, info, handler)
}

var _ModelService_serviceDesc = grpc.ServiceDesc{
	ServiceName: "tensorflow.serving.ModelService",
	HandlerType: (*ModelServiceServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "GetModelStatus",
			Handler:    _ModelService_GetModelStatus_Handler,
		},
		{
			MethodName: "HandleReloadConfigRequest",
			Handler:    _ModelService_HandleReloadConfigRequest_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "tensorflow_serving/apis/model_service.proto",
}
