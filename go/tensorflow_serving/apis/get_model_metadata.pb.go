// Code generated by protoc-gen-go. DO NOT EDIT.
// source: tensorflow_serving/apis/get_model_metadata.proto

package tensorflow_serving

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	any "github.com/golang/protobuf/ptypes/any"
	protobuf "github.com/figroc/tensorflow-serving-client/v2/go/tensorflow/core/protobuf"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

// Message returned for "signature_def" field.
type SignatureDefMap struct {
	SignatureDef         map[string]*protobuf.SignatureDef `protobuf:"bytes,1,rep,name=signature_def,json=signatureDef,proto3" json:"signature_def,omitempty" protobuf_key:"bytes,1,opt,name=key,proto3" protobuf_val:"bytes,2,opt,name=value,proto3"`
	XXX_NoUnkeyedLiteral struct{}                          `json:"-"`
	XXX_unrecognized     []byte                            `json:"-"`
	XXX_sizecache        int32                             `json:"-"`
}

func (m *SignatureDefMap) Reset()         { *m = SignatureDefMap{} }
func (m *SignatureDefMap) String() string { return proto.CompactTextString(m) }
func (*SignatureDefMap) ProtoMessage()    {}
func (*SignatureDefMap) Descriptor() ([]byte, []int) {
	return fileDescriptor_4f6b64919204d6ed, []int{0}
}

func (m *SignatureDefMap) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SignatureDefMap.Unmarshal(m, b)
}
func (m *SignatureDefMap) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SignatureDefMap.Marshal(b, m, deterministic)
}
func (m *SignatureDefMap) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SignatureDefMap.Merge(m, src)
}
func (m *SignatureDefMap) XXX_Size() int {
	return xxx_messageInfo_SignatureDefMap.Size(m)
}
func (m *SignatureDefMap) XXX_DiscardUnknown() {
	xxx_messageInfo_SignatureDefMap.DiscardUnknown(m)
}

var xxx_messageInfo_SignatureDefMap proto.InternalMessageInfo

func (m *SignatureDefMap) GetSignatureDef() map[string]*protobuf.SignatureDef {
	if m != nil {
		return m.SignatureDef
	}
	return nil
}

type GetModelMetadataRequest struct {
	// Model Specification indicating which model we are querying for metadata.
	// If version is not specified, will use the latest (numerical) version.
	ModelSpec *ModelSpec `protobuf:"bytes,1,opt,name=model_spec,json=modelSpec,proto3" json:"model_spec,omitempty"`
	// Metadata fields to get. Currently supported: "signature_def".
	MetadataField        []string `protobuf:"bytes,2,rep,name=metadata_field,json=metadataField,proto3" json:"metadata_field,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *GetModelMetadataRequest) Reset()         { *m = GetModelMetadataRequest{} }
func (m *GetModelMetadataRequest) String() string { return proto.CompactTextString(m) }
func (*GetModelMetadataRequest) ProtoMessage()    {}
func (*GetModelMetadataRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_4f6b64919204d6ed, []int{1}
}

func (m *GetModelMetadataRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_GetModelMetadataRequest.Unmarshal(m, b)
}
func (m *GetModelMetadataRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_GetModelMetadataRequest.Marshal(b, m, deterministic)
}
func (m *GetModelMetadataRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_GetModelMetadataRequest.Merge(m, src)
}
func (m *GetModelMetadataRequest) XXX_Size() int {
	return xxx_messageInfo_GetModelMetadataRequest.Size(m)
}
func (m *GetModelMetadataRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_GetModelMetadataRequest.DiscardUnknown(m)
}

var xxx_messageInfo_GetModelMetadataRequest proto.InternalMessageInfo

func (m *GetModelMetadataRequest) GetModelSpec() *ModelSpec {
	if m != nil {
		return m.ModelSpec
	}
	return nil
}

func (m *GetModelMetadataRequest) GetMetadataField() []string {
	if m != nil {
		return m.MetadataField
	}
	return nil
}

type GetModelMetadataResponse struct {
	// Model Specification indicating which model this metadata belongs to.
	ModelSpec *ModelSpec `protobuf:"bytes,1,opt,name=model_spec,json=modelSpec,proto3" json:"model_spec,omitempty"`
	// Map of metadata field name to metadata field. The options for metadata
	// field name are listed in GetModelMetadataRequest. Currently supported:
	// "signature_def".
	Metadata             map[string]*any.Any `protobuf:"bytes,2,rep,name=metadata,proto3" json:"metadata,omitempty" protobuf_key:"bytes,1,opt,name=key,proto3" protobuf_val:"bytes,2,opt,name=value,proto3"`
	XXX_NoUnkeyedLiteral struct{}            `json:"-"`
	XXX_unrecognized     []byte              `json:"-"`
	XXX_sizecache        int32               `json:"-"`
}

func (m *GetModelMetadataResponse) Reset()         { *m = GetModelMetadataResponse{} }
func (m *GetModelMetadataResponse) String() string { return proto.CompactTextString(m) }
func (*GetModelMetadataResponse) ProtoMessage()    {}
func (*GetModelMetadataResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_4f6b64919204d6ed, []int{2}
}

func (m *GetModelMetadataResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_GetModelMetadataResponse.Unmarshal(m, b)
}
func (m *GetModelMetadataResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_GetModelMetadataResponse.Marshal(b, m, deterministic)
}
func (m *GetModelMetadataResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_GetModelMetadataResponse.Merge(m, src)
}
func (m *GetModelMetadataResponse) XXX_Size() int {
	return xxx_messageInfo_GetModelMetadataResponse.Size(m)
}
func (m *GetModelMetadataResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_GetModelMetadataResponse.DiscardUnknown(m)
}

var xxx_messageInfo_GetModelMetadataResponse proto.InternalMessageInfo

func (m *GetModelMetadataResponse) GetModelSpec() *ModelSpec {
	if m != nil {
		return m.ModelSpec
	}
	return nil
}

func (m *GetModelMetadataResponse) GetMetadata() map[string]*any.Any {
	if m != nil {
		return m.Metadata
	}
	return nil
}

func init() {
	proto.RegisterType((*SignatureDefMap)(nil), "tensorflow.serving.SignatureDefMap")
	proto.RegisterMapType((map[string]*protobuf.SignatureDef)(nil), "tensorflow.serving.SignatureDefMap.SignatureDefEntry")
	proto.RegisterType((*GetModelMetadataRequest)(nil), "tensorflow.serving.GetModelMetadataRequest")
	proto.RegisterType((*GetModelMetadataResponse)(nil), "tensorflow.serving.GetModelMetadataResponse")
	proto.RegisterMapType((map[string]*any.Any)(nil), "tensorflow.serving.GetModelMetadataResponse.MetadataEntry")
}

func init() {
	proto.RegisterFile("tensorflow_serving/apis/get_model_metadata.proto", fileDescriptor_4f6b64919204d6ed)
}

var fileDescriptor_4f6b64919204d6ed = []byte{
	// 376 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xa4, 0x52, 0x4f, 0x4b, 0xe3, 0x40,
	0x1c, 0x65, 0x12, 0x76, 0xd9, 0x4e, 0xb6, 0xbb, 0x1a, 0x04, 0x63, 0x40, 0x08, 0x15, 0x21, 0x7a,
	0x98, 0x48, 0x44, 0x90, 0xe2, 0x45, 0xf1, 0xcf, 0xa9, 0x07, 0x53, 0x10, 0xf4, 0x12, 0xa6, 0xcd,
	0x2f, 0x31, 0x98, 0x66, 0x62, 0x66, 0x52, 0xc9, 0xc5, 0x8b, 0x5f, 0xce, 0x8f, 0xe4, 0x51, 0x92,
	0x74, 0x6c, 0x6a, 0xdb, 0x93, 0xb7, 0x99, 0x37, 0xef, 0xcd, 0x7b, 0x33, 0xef, 0x87, 0x8f, 0x04,
	0xa4, 0x9c, 0xe5, 0x61, 0xc2, 0x5e, 0x7c, 0x0e, 0xf9, 0x34, 0x4e, 0x23, 0x87, 0x66, 0x31, 0x77,
	0x22, 0x10, 0xfe, 0x84, 0x05, 0x90, 0xf8, 0x13, 0x10, 0x34, 0xa0, 0x82, 0x92, 0x2c, 0x67, 0x82,
	0xe9, 0xfa, 0x5c, 0x41, 0x66, 0x0a, 0x73, 0x27, 0x62, 0x2c, 0x4a, 0xc0, 0xa9, 0x19, 0xa3, 0x22,
	0x74, 0x68, 0x5a, 0x36, 0x74, 0xf3, 0x60, 0x4e, 0x77, 0xc6, 0x2c, 0x6f, 0x71, 0xaa, 0x7b, 0xfd,
	0x28, 0xa7, 0xd9, 0xe3, 0x8c, 0xba, 0xb7, 0x2e, 0x4b, 0x9d, 0xa3, 0x21, 0xf5, 0xde, 0x11, 0xfe,
	0x3f, 0x8c, 0xa3, 0x94, 0x8a, 0x22, 0x87, 0x4b, 0x08, 0x07, 0x34, 0xd3, 0x1f, 0x70, 0x97, 0x4b,
	0xc8, 0x0f, 0x20, 0x34, 0x90, 0xa5, 0xda, 0x9a, 0x7b, 0x42, 0x96, 0xa3, 0x92, 0x6f, 0xda, 0x85,
	0xfd, 0x55, 0x2a, 0xf2, 0xd2, 0xfb, 0xcb, 0x5b, 0x90, 0x79, 0x8f, 0x37, 0x97, 0x28, 0xfa, 0x06,
	0x56, 0x9f, 0xa0, 0x34, 0x90, 0x85, 0xec, 0x8e, 0x57, 0x2d, 0x75, 0x82, 0x7f, 0x4d, 0x69, 0x52,
	0x80, 0xa1, 0x58, 0xc8, 0xd6, 0x5c, 0xa3, 0x6d, 0xdd, 0xd6, 0x7b, 0x0d, 0xad, 0xaf, 0x9c, 0xa2,
	0xde, 0x2b, 0xde, 0xbe, 0x01, 0x31, 0xa8, 0x1e, 0x37, 0x98, 0xfd, 0xb1, 0x07, 0xcf, 0x05, 0x70,
	0xa1, 0x9f, 0x61, 0xdc, 0x7c, 0x3e, 0xcf, 0x60, 0x5c, 0xfb, 0x68, 0xee, 0xee, 0xaa, 0xe7, 0xd4,
	0xea, 0x61, 0x06, 0x63, 0xaf, 0x33, 0x91, 0x4b, 0x7d, 0x1f, 0xff, 0x93, 0xa5, 0xf9, 0x61, 0x0c,
	0x49, 0x60, 0x28, 0x96, 0x6a, 0x77, 0xbc, 0xae, 0x44, 0xaf, 0x2b, 0xb0, 0xf7, 0xa6, 0x60, 0x63,
	0x39, 0x00, 0xcf, 0x58, 0xca, 0xe1, 0x87, 0x09, 0xee, 0xf0, 0x1f, 0xe9, 0x55, 0x7b, 0x6b, 0x6e,
	0x7f, 0x95, 0x76, 0x9d, 0x3b, 0x91, 0x40, 0xd3, 0xc8, 0xd7, 0x5d, 0xe6, 0x2d, 0xee, 0x2e, 0x1c,
	0xad, 0x68, 0xe2, 0x70, 0xb1, 0x89, 0x2d, 0xd2, 0xcc, 0x26, 0x91, 0x73, 0x47, 0xce, 0xd3, 0xb2,
	0xd5, 0xc2, 0x85, 0xfa, 0x81, 0xd0, 0xe8, 0x77, 0x7d, 0x7a, 0xfc, 0x19, 0x00, 0x00, 0xff, 0xff,
	0xfe, 0xfe, 0x12, 0x0e, 0x0f, 0x03, 0x00, 0x00,
}
