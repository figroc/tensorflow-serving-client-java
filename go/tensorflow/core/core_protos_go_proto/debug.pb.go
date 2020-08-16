// Code generated by protoc-gen-go. DO NOT EDIT.
// source: tensorflow/core/protobuf/debug.proto

package tensorflow

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
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

// Option for watching a node in TensorFlow Debugger (tfdbg).
type DebugTensorWatch struct {
	// Name of the node to watch.
	// Use "*" for wildcard. But note: currently, regex is not supported in
	// general.
	NodeName string `protobuf:"bytes,1,opt,name=node_name,json=nodeName,proto3" json:"node_name,omitempty"`
	// Output slot to watch.
	// The semantics of output_slot == -1 is that all outputs of the node
	// will be watched (i.e., a wildcard).
	// Other negative values of output_slot are invalid and will lead to
	// errors currently.
	OutputSlot int32 `protobuf:"varint,2,opt,name=output_slot,json=outputSlot,proto3" json:"output_slot,omitempty"`
	// Name(s) of the debugging op(s).
	// One or more than one probes on a tensor.
	// e.g., {"DebugIdentity", "DebugNanCount"}
	DebugOps []string `protobuf:"bytes,3,rep,name=debug_ops,json=debugOps,proto3" json:"debug_ops,omitempty"`
	// URL(s) for debug targets(s).
	//
	// Supported URL formats are:
	//   - file:///foo/tfdbg_dump: Writes out Event content to file
	//     /foo/tfdbg_dump.  Assumes all directories can be created if they don't
	//     already exist.
	//   - grpc://localhost:11011: Sends an RPC request to an EventListener
	//     service running at localhost:11011 with the event.
	//   - memcbk:///event_key: Routes tensors to clients using the
	//     callback registered with the DebugCallbackRegistry for event_key.
	//
	// Each debug op listed in debug_ops will publish its output tensor (debug
	// signal) to all URLs in debug_urls.
	//
	// N.B. Session::Run() supports concurrent invocations of the same inputs
	// (feed keys), outputs and target nodes. If such concurrent invocations
	// are to be debugged, the callers of Session::Run() must use distinct
	// debug_urls to make sure that the streamed or dumped events do not overlap
	// among the invocations.
	// TODO(cais): More visible documentation of this in g3docs.
	DebugUrls []string `protobuf:"bytes,4,rep,name=debug_urls,json=debugUrls,proto3" json:"debug_urls,omitempty"`
	// Do not error out if debug op creation fails (e.g., due to dtype
	// incompatibility). Instead, just log the failure.
	TolerateDebugOpCreationFailures bool     `protobuf:"varint,5,opt,name=tolerate_debug_op_creation_failures,json=tolerateDebugOpCreationFailures,proto3" json:"tolerate_debug_op_creation_failures,omitempty"`
	XXX_NoUnkeyedLiteral            struct{} `json:"-"`
	XXX_unrecognized                []byte   `json:"-"`
	XXX_sizecache                   int32    `json:"-"`
}

func (m *DebugTensorWatch) Reset()         { *m = DebugTensorWatch{} }
func (m *DebugTensorWatch) String() string { return proto.CompactTextString(m) }
func (*DebugTensorWatch) ProtoMessage()    {}
func (*DebugTensorWatch) Descriptor() ([]byte, []int) {
	return fileDescriptor_4fbf764b7c91eef6, []int{0}
}

func (m *DebugTensorWatch) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_DebugTensorWatch.Unmarshal(m, b)
}
func (m *DebugTensorWatch) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_DebugTensorWatch.Marshal(b, m, deterministic)
}
func (m *DebugTensorWatch) XXX_Merge(src proto.Message) {
	xxx_messageInfo_DebugTensorWatch.Merge(m, src)
}
func (m *DebugTensorWatch) XXX_Size() int {
	return xxx_messageInfo_DebugTensorWatch.Size(m)
}
func (m *DebugTensorWatch) XXX_DiscardUnknown() {
	xxx_messageInfo_DebugTensorWatch.DiscardUnknown(m)
}

var xxx_messageInfo_DebugTensorWatch proto.InternalMessageInfo

func (m *DebugTensorWatch) GetNodeName() string {
	if m != nil {
		return m.NodeName
	}
	return ""
}

func (m *DebugTensorWatch) GetOutputSlot() int32 {
	if m != nil {
		return m.OutputSlot
	}
	return 0
}

func (m *DebugTensorWatch) GetDebugOps() []string {
	if m != nil {
		return m.DebugOps
	}
	return nil
}

func (m *DebugTensorWatch) GetDebugUrls() []string {
	if m != nil {
		return m.DebugUrls
	}
	return nil
}

func (m *DebugTensorWatch) GetTolerateDebugOpCreationFailures() bool {
	if m != nil {
		return m.TolerateDebugOpCreationFailures
	}
	return false
}

// Options for initializing DebuggerState in TensorFlow Debugger (tfdbg).
type DebugOptions struct {
	// Debugging options
	DebugTensorWatchOpts []*DebugTensorWatch `protobuf:"bytes,4,rep,name=debug_tensor_watch_opts,json=debugTensorWatchOpts,proto3" json:"debug_tensor_watch_opts,omitempty"`
	// Caller-specified global step count.
	// Note that this is distinct from the session run count and the executor
	// step count.
	GlobalStep int64 `protobuf:"varint,10,opt,name=global_step,json=globalStep,proto3" json:"global_step,omitempty"`
	// Whether the total disk usage of tfdbg is to be reset to zero
	// in this Session.run call. This is used by wrappers and hooks
	// such as the local CLI ones to indicate that the dumped tensors
	// are cleaned up from the disk after each Session.run.
	ResetDiskByteUsage   bool     `protobuf:"varint,11,opt,name=reset_disk_byte_usage,json=resetDiskByteUsage,proto3" json:"reset_disk_byte_usage,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *DebugOptions) Reset()         { *m = DebugOptions{} }
func (m *DebugOptions) String() string { return proto.CompactTextString(m) }
func (*DebugOptions) ProtoMessage()    {}
func (*DebugOptions) Descriptor() ([]byte, []int) {
	return fileDescriptor_4fbf764b7c91eef6, []int{1}
}

func (m *DebugOptions) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_DebugOptions.Unmarshal(m, b)
}
func (m *DebugOptions) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_DebugOptions.Marshal(b, m, deterministic)
}
func (m *DebugOptions) XXX_Merge(src proto.Message) {
	xxx_messageInfo_DebugOptions.Merge(m, src)
}
func (m *DebugOptions) XXX_Size() int {
	return xxx_messageInfo_DebugOptions.Size(m)
}
func (m *DebugOptions) XXX_DiscardUnknown() {
	xxx_messageInfo_DebugOptions.DiscardUnknown(m)
}

var xxx_messageInfo_DebugOptions proto.InternalMessageInfo

func (m *DebugOptions) GetDebugTensorWatchOpts() []*DebugTensorWatch {
	if m != nil {
		return m.DebugTensorWatchOpts
	}
	return nil
}

func (m *DebugOptions) GetGlobalStep() int64 {
	if m != nil {
		return m.GlobalStep
	}
	return 0
}

func (m *DebugOptions) GetResetDiskByteUsage() bool {
	if m != nil {
		return m.ResetDiskByteUsage
	}
	return false
}

type DebuggedSourceFile struct {
	// The host name on which a source code file is located.
	Host string `protobuf:"bytes,1,opt,name=host,proto3" json:"host,omitempty"`
	// Path to the source code file.
	FilePath string `protobuf:"bytes,2,opt,name=file_path,json=filePath,proto3" json:"file_path,omitempty"`
	// The timestamp at which the source code file is last modified.
	LastModified int64 `protobuf:"varint,3,opt,name=last_modified,json=lastModified,proto3" json:"last_modified,omitempty"`
	// Byte size of the file.
	Bytes int64 `protobuf:"varint,4,opt,name=bytes,proto3" json:"bytes,omitempty"`
	// Line-by-line content of the source code file.
	Lines                []string `protobuf:"bytes,5,rep,name=lines,proto3" json:"lines,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *DebuggedSourceFile) Reset()         { *m = DebuggedSourceFile{} }
func (m *DebuggedSourceFile) String() string { return proto.CompactTextString(m) }
func (*DebuggedSourceFile) ProtoMessage()    {}
func (*DebuggedSourceFile) Descriptor() ([]byte, []int) {
	return fileDescriptor_4fbf764b7c91eef6, []int{2}
}

func (m *DebuggedSourceFile) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_DebuggedSourceFile.Unmarshal(m, b)
}
func (m *DebuggedSourceFile) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_DebuggedSourceFile.Marshal(b, m, deterministic)
}
func (m *DebuggedSourceFile) XXX_Merge(src proto.Message) {
	xxx_messageInfo_DebuggedSourceFile.Merge(m, src)
}
func (m *DebuggedSourceFile) XXX_Size() int {
	return xxx_messageInfo_DebuggedSourceFile.Size(m)
}
func (m *DebuggedSourceFile) XXX_DiscardUnknown() {
	xxx_messageInfo_DebuggedSourceFile.DiscardUnknown(m)
}

var xxx_messageInfo_DebuggedSourceFile proto.InternalMessageInfo

func (m *DebuggedSourceFile) GetHost() string {
	if m != nil {
		return m.Host
	}
	return ""
}

func (m *DebuggedSourceFile) GetFilePath() string {
	if m != nil {
		return m.FilePath
	}
	return ""
}

func (m *DebuggedSourceFile) GetLastModified() int64 {
	if m != nil {
		return m.LastModified
	}
	return 0
}

func (m *DebuggedSourceFile) GetBytes() int64 {
	if m != nil {
		return m.Bytes
	}
	return 0
}

func (m *DebuggedSourceFile) GetLines() []string {
	if m != nil {
		return m.Lines
	}
	return nil
}

type DebuggedSourceFiles struct {
	// A collection of source code files.
	SourceFiles          []*DebuggedSourceFile `protobuf:"bytes,1,rep,name=source_files,json=sourceFiles,proto3" json:"source_files,omitempty"`
	XXX_NoUnkeyedLiteral struct{}              `json:"-"`
	XXX_unrecognized     []byte                `json:"-"`
	XXX_sizecache        int32                 `json:"-"`
}

func (m *DebuggedSourceFiles) Reset()         { *m = DebuggedSourceFiles{} }
func (m *DebuggedSourceFiles) String() string { return proto.CompactTextString(m) }
func (*DebuggedSourceFiles) ProtoMessage()    {}
func (*DebuggedSourceFiles) Descriptor() ([]byte, []int) {
	return fileDescriptor_4fbf764b7c91eef6, []int{3}
}

func (m *DebuggedSourceFiles) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_DebuggedSourceFiles.Unmarshal(m, b)
}
func (m *DebuggedSourceFiles) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_DebuggedSourceFiles.Marshal(b, m, deterministic)
}
func (m *DebuggedSourceFiles) XXX_Merge(src proto.Message) {
	xxx_messageInfo_DebuggedSourceFiles.Merge(m, src)
}
func (m *DebuggedSourceFiles) XXX_Size() int {
	return xxx_messageInfo_DebuggedSourceFiles.Size(m)
}
func (m *DebuggedSourceFiles) XXX_DiscardUnknown() {
	xxx_messageInfo_DebuggedSourceFiles.DiscardUnknown(m)
}

var xxx_messageInfo_DebuggedSourceFiles proto.InternalMessageInfo

func (m *DebuggedSourceFiles) GetSourceFiles() []*DebuggedSourceFile {
	if m != nil {
		return m.SourceFiles
	}
	return nil
}

func init() {
	proto.RegisterType((*DebugTensorWatch)(nil), "tensorflow.DebugTensorWatch")
	proto.RegisterType((*DebugOptions)(nil), "tensorflow.DebugOptions")
	proto.RegisterType((*DebuggedSourceFile)(nil), "tensorflow.DebuggedSourceFile")
	proto.RegisterType((*DebuggedSourceFiles)(nil), "tensorflow.DebuggedSourceFiles")
}

func init() {
	proto.RegisterFile("tensorflow/core/protobuf/debug.proto", fileDescriptor_4fbf764b7c91eef6)
}

var fileDescriptor_4fbf764b7c91eef6 = []byte{
	// 491 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x6c, 0x53, 0xdd, 0x6e, 0x13, 0x3d,
	0x10, 0x95, 0xbf, 0x34, 0x9f, 0x12, 0x27, 0x48, 0xc8, 0x14, 0xb1, 0x12, 0x3f, 0x8d, 0x52, 0x2e,
	0x72, 0x95, 0x08, 0x78, 0x02, 0x42, 0x54, 0x71, 0x01, 0x34, 0xda, 0x50, 0x81, 0xb8, 0xb1, 0xbc,
	0xd9, 0xd9, 0xcd, 0x2a, 0x4e, 0x66, 0xe5, 0x99, 0x25, 0xea, 0x8b, 0xf0, 0x2a, 0xbc, 0x0b, 0x4f,
	0xc2, 0x25, 0xb2, 0xbd, 0x55, 0x4a, 0xcb, 0x8d, 0x35, 0x73, 0xce, 0xfc, 0xf9, 0x8c, 0x2d, 0x5f,
	0x32, 0xec, 0x09, 0x5d, 0x61, 0xf1, 0x30, 0x5b, 0xa3, 0x83, 0x59, 0xed, 0x90, 0x31, 0x6b, 0x8a,
	0x59, 0x0e, 0x59, 0x53, 0x4e, 0x83, 0xab, 0xe4, 0x31, 0x6a, 0xfc, 0x4b, 0xc8, 0x87, 0x0b, 0xcf,
	0x7d, 0x0e, 0xd8, 0x17, 0xc3, 0xeb, 0x8d, 0x7a, 0x2a, 0xfb, 0x7b, 0xcc, 0x41, 0xef, 0xcd, 0x0e,
	0x12, 0x31, 0x12, 0x93, 0x7e, 0xda, 0xf3, 0xc0, 0x27, 0xb3, 0x03, 0x75, 0x26, 0x07, 0xd8, 0x70,
	0xdd, 0xb0, 0x26, 0x8b, 0x9c, 0xfc, 0x37, 0x12, 0x93, 0x6e, 0x2a, 0x23, 0xb4, 0xb2, 0xc8, 0x3e,
	0x3b, 0x74, 0xd3, 0x58, 0x53, 0xd2, 0x19, 0x75, 0x7c, 0x76, 0x00, 0x2e, 0x6b, 0x52, 0xcf, 0xa5,
	0x8c, 0x64, 0xe3, 0x2c, 0x25, 0x27, 0x81, 0x8d, 0xe1, 0x57, 0xce, 0x92, 0xfa, 0x20, 0xcf, 0x19,
	0x2d, 0x38, 0xc3, 0xa0, 0x6f, 0x8a, 0xe8, 0xb5, 0x03, 0xc3, 0x15, 0xee, 0x75, 0x61, 0x2a, 0xdb,
	0x38, 0xa0, 0xa4, 0x3b, 0x12, 0x93, 0x5e, 0x7a, 0x76, 0x13, 0xba, 0x88, 0xd5, 0xdf, 0xb5, 0x71,
	0x17, 0x6d, 0xd8, 0xf8, 0xa7, 0x90, 0xc3, 0x96, 0xf3, 0x38, 0xa9, 0x95, 0x7c, 0x12, 0xab, 0x46,
	0x05, 0xf4, 0xc1, 0x5f, 0x57, 0x63, 0xcd, 0x71, 0x94, 0xc1, 0xeb, 0x67, 0xd3, 0xa3, 0x36, 0xd3,
	0xbb, 0xba, 0xa4, 0xa7, 0xf9, 0x1d, 0xe4, 0xb2, 0x66, 0xf2, 0x82, 0x94, 0x16, 0x33, 0x63, 0x35,
	0x31, 0xd4, 0x89, 0x1c, 0x89, 0x49, 0x27, 0x95, 0x11, 0x5a, 0x31, 0xd4, 0xea, 0x95, 0x7c, 0xec,
	0x80, 0x80, 0x75, 0x5e, 0xd1, 0x56, 0x67, 0xd7, 0x0c, 0xba, 0x21, 0x53, 0x42, 0x32, 0x08, 0xd7,
	0x50, 0x81, 0x5c, 0x54, 0xb4, 0x9d, 0x5f, 0x33, 0x5c, 0x79, 0x66, 0xfc, 0x43, 0x48, 0x15, 0xda,
	0x97, 0x90, 0xaf, 0xb0, 0x71, 0x6b, 0xb8, 0xa8, 0x2c, 0x28, 0x25, 0x4f, 0x36, 0x48, 0xdc, 0xee,
	0x24, 0xd8, 0x5e, 0xee, 0xa2, 0xb2, 0xa0, 0x6b, 0xc3, 0x9b, 0xb0, 0x8d, 0x7e, 0xda, 0xf3, 0xc0,
	0xd2, 0xf0, 0x46, 0x9d, 0xcb, 0x07, 0xd6, 0x10, 0xeb, 0x1d, 0xe6, 0x55, 0x51, 0x41, 0x9e, 0x74,
	0xc2, 0x74, 0x43, 0x0f, 0x7e, 0x6c, 0x31, 0x75, 0x2a, 0xbb, 0x7e, 0x28, 0xaf, 0x81, 0x27, 0xa3,
	0xe3, 0x51, 0x5b, 0xed, 0x83, 0xd8, 0x7e, 0x49, 0xd1, 0x19, 0x7f, 0x95, 0x8f, 0xee, 0xcf, 0x45,
	0xea, 0xad, 0x1c, 0x52, 0x70, 0xb5, 0x6f, 0x4d, 0x89, 0x08, 0x6a, 0xbe, 0xb8, 0xa7, 0xe6, 0x5f,
	0x69, 0xe9, 0x80, 0x8e, 0x25, 0xe6, 0xdf, 0x65, 0x82, 0xae, 0xbc, 0x9d, 0x51, 0x38, 0xb3, 0x83,
	0x03, 0xba, 0xed, 0x7c, 0x10, 0x92, 0x97, 0xfe, 0xf5, 0xd2, 0x52, 0x7c, 0x7b, 0x5f, 0x56, 0xbc,
	0x69, 0xb2, 0xe9, 0x1a, 0x77, 0xb3, 0x5b, 0x2f, 0xfe, 0xdf, 0x66, 0x89, 0xf1, 0x2b, 0xf8, 0x43,
	0x87, 0x0f, 0x40, 0xba, 0xc4, 0x68, 0xfd, 0x16, 0x22, 0xfb, 0x3f, 0x58, 0x6f, 0xfe, 0x04, 0x00,
	0x00, 0xff, 0xff, 0xb0, 0x6b, 0x75, 0xcf, 0x3c, 0x03, 0x00, 0x00,
}