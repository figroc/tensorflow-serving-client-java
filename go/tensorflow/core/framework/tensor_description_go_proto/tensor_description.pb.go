// Code generated by protoc-gen-go. DO NOT EDIT.
// source: tensorflow/core/framework/tensor_description.proto

package tensorflow

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	allocation_description_go_proto "github.com/figroc/tensorflow-serving-client/v2/go/tensorflow/core/framework/allocation_description_go_proto"
	tensor_shape_go_proto "github.com/figroc/tensorflow-serving-client/v2/go/tensorflow/core/framework/tensor_shape_go_proto"
	types_go_proto "github.com/figroc/tensorflow-serving-client/v2/go/tensorflow/core/framework/types_go_proto"
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

type TensorDescription struct {
	// Data type of tensor elements
	Dtype types_go_proto.DataType `protobuf:"varint,1,opt,name=dtype,proto3,enum=tensorflow.DataType" json:"dtype,omitempty"`
	// Shape of the tensor.
	Shape *tensor_shape_go_proto.TensorShapeProto `protobuf:"bytes,2,opt,name=shape,proto3" json:"shape,omitempty"`
	// Information about the size and allocator used for the data
	AllocationDescription *allocation_description_go_proto.AllocationDescription `protobuf:"bytes,4,opt,name=allocation_description,json=allocationDescription,proto3" json:"allocation_description,omitempty"`
	XXX_NoUnkeyedLiteral  struct{}                                               `json:"-"`
	XXX_unrecognized      []byte                                                 `json:"-"`
	XXX_sizecache         int32                                                  `json:"-"`
}

func (m *TensorDescription) Reset()         { *m = TensorDescription{} }
func (m *TensorDescription) String() string { return proto.CompactTextString(m) }
func (*TensorDescription) ProtoMessage()    {}
func (*TensorDescription) Descriptor() ([]byte, []int) {
	return fileDescriptor_aa203ffb9e427669, []int{0}
}

func (m *TensorDescription) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TensorDescription.Unmarshal(m, b)
}
func (m *TensorDescription) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TensorDescription.Marshal(b, m, deterministic)
}
func (m *TensorDescription) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TensorDescription.Merge(m, src)
}
func (m *TensorDescription) XXX_Size() int {
	return xxx_messageInfo_TensorDescription.Size(m)
}
func (m *TensorDescription) XXX_DiscardUnknown() {
	xxx_messageInfo_TensorDescription.DiscardUnknown(m)
}

var xxx_messageInfo_TensorDescription proto.InternalMessageInfo

func (m *TensorDescription) GetDtype() types_go_proto.DataType {
	if m != nil {
		return m.Dtype
	}
	return types_go_proto.DataType_DT_INVALID
}

func (m *TensorDescription) GetShape() *tensor_shape_go_proto.TensorShapeProto {
	if m != nil {
		return m.Shape
	}
	return nil
}

func (m *TensorDescription) GetAllocationDescription() *allocation_description_go_proto.AllocationDescription {
	if m != nil {
		return m.AllocationDescription
	}
	return nil
}

func init() {
	proto.RegisterType((*TensorDescription)(nil), "tensorflow.TensorDescription")
}

func init() {
	proto.RegisterFile("tensorflow/core/framework/tensor_description.proto", fileDescriptor_aa203ffb9e427669)
}

var fileDescriptor_aa203ffb9e427669 = []byte{
	// 263 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0x32, 0x2a, 0x49, 0xcd, 0x2b,
	0xce, 0x2f, 0x4a, 0xcb, 0xc9, 0x2f, 0xd7, 0x4f, 0xce, 0x2f, 0x4a, 0xd5, 0x4f, 0x2b, 0x4a, 0xcc,
	0x4d, 0x2d, 0xcf, 0x2f, 0xca, 0xd6, 0x87, 0xc8, 0xc4, 0xa7, 0xa4, 0x16, 0x27, 0x17, 0x65, 0x16,
	0x94, 0x64, 0xe6, 0xe7, 0xe9, 0x15, 0x14, 0xe5, 0x97, 0xe4, 0x0b, 0x71, 0x21, 0xf4, 0x48, 0x99,
	0xe1, 0xd6, 0x9f, 0x98, 0x93, 0x93, 0x9f, 0x9c, 0x08, 0xd2, 0x87, 0x69, 0x86, 0x94, 0x0e, 0x41,
	0x7b, 0x8b, 0x33, 0x12, 0x0b, 0x52, 0xa1, 0xaa, 0x55, 0xf1, 0xa8, 0xae, 0x2c, 0x48, 0x2d, 0x86,
	0x28, 0x53, 0x3a, 0xcb, 0xc8, 0x25, 0x18, 0x02, 0x56, 0xe9, 0x82, 0xb0, 0x50, 0x48, 0x8b, 0x8b,
	0x35, 0x05, 0xa4, 0x4a, 0x82, 0x51, 0x81, 0x51, 0x83, 0xcf, 0x48, 0x44, 0x0f, 0x61, 0x98, 0x9e,
	0x4b, 0x62, 0x49, 0x62, 0x48, 0x65, 0x41, 0x6a, 0x10, 0x44, 0x89, 0x90, 0x11, 0x17, 0x2b, 0xd8,
	0x5e, 0x09, 0x26, 0x05, 0x46, 0x0d, 0x6e, 0x23, 0x19, 0x64, 0xb5, 0x10, 0x93, 0x83, 0x41, 0xd2,
	0x01, 0x20, 0xeb, 0x82, 0x20, 0x4a, 0x85, 0x22, 0xb8, 0xc4, 0xb0, 0x7b, 0x55, 0x82, 0x05, 0x6c,
	0x88, 0x22, 0xb2, 0x21, 0x8e, 0x70, 0x95, 0x48, 0x4e, 0x0c, 0x12, 0x4d, 0xc4, 0x26, 0xec, 0x34,
	0x99, 0x91, 0x4b, 0x22, 0xbf, 0x28, 0x1d, 0x59, 0x3f, 0xdc, 0xe3, 0x4e, 0xe2, 0x18, 0x3e, 0x05,
	0xbb, 0xaa, 0x38, 0x80, 0x31, 0x2a, 0x32, 0x3d, 0xb3, 0x24, 0xa3, 0x34, 0x49, 0x2f, 0x39, 0x3f,
	0x57, 0x1f, 0x29, 0xe4, 0xb0, 0x33, 0xd3, 0xf3, 0x09, 0x47, 0x7c, 0x7c, 0x7a, 0x7e, 0x3c, 0x38,
	0x88, 0x7f, 0x30, 0x32, 0x26, 0xb1, 0x81, 0x59, 0xc6, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0xda,
	0xb9, 0x9f, 0x68, 0x3b, 0x02, 0x00, 0x00,
}
