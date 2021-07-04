// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.23.0
// 	protoc        v3.14.0
// source: tensorflow_serving/config/file_system_storage_path_source.proto

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

// Config proto for FileSystemStoragePathSource.
type FileSystemStoragePathSourceConfig struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// The servables to monitor for new versions, and aspire.
	Servables []*FileSystemStoragePathSourceConfig_ServableToMonitor `protobuf:"bytes,5,rep,name=servables,proto3" json:"servables,omitempty"`
	// A single servable name/base_path pair to monitor.
	// DEPRECATED: Use 'servables' instead.
	// TODO(b/30898016): Stop using these fields, and ultimately remove them here.
	//
	// Deprecated: Do not use.
	ServableName string `protobuf:"bytes,1,opt,name=servable_name,json=servableName,proto3" json:"servable_name,omitempty"`
	// Deprecated: Do not use.
	BasePath string `protobuf:"bytes,2,opt,name=base_path,json=basePath,proto3" json:"base_path,omitempty"`
	// How long to wait between file-system polling to look for children of
	// 'base_path', in seconds.
	//
	// If set to zero, filesystem will be polled exactly once. If set to a
	// negative value (for testing use only), polling will be entirely disabled.
	FileSystemPollWaitSeconds int64 `protobuf:"varint,3,opt,name=file_system_poll_wait_seconds,json=fileSystemPollWaitSeconds,proto3" json:"file_system_poll_wait_seconds,omitempty"`
	// If true, then FileSystemStoragePathSource::Create() and ::UpdateConfig()
	// fail if, for any configured servables, the file system doesn't currently
	// contain at least one version under the base path.
	// (Otherwise, it will emit a warning and keep pinging the file system to
	// check for a version to appear later.)
	// DEPRECATED: Use 'servable_versions_always_present' instead, which includes
	// this behavior.
	// TODO(b/30898016): Remove 2019-10-31 or later.
	//
	// Deprecated: Do not use.
	FailIfZeroVersionsAtStartup bool `protobuf:"varint,4,opt,name=fail_if_zero_versions_at_startup,json=failIfZeroVersionsAtStartup,proto3" json:"fail_if_zero_versions_at_startup,omitempty"`
	// If true, the servable is always expected to exist on the underlying
	// filesystem. FileSystemStoragePathSource::Create() and ::UpdateConfig() will
	// fail if, for any configured servables, the file system doesn't currently
	// contain at least one version under the base path. In addition, if a polling
	// loop find the base path empty, it will not unload existing servables.
	ServableVersionsAlwaysPresent bool `protobuf:"varint,6,opt,name=servable_versions_always_present,json=servableVersionsAlwaysPresent,proto3" json:"servable_versions_always_present,omitempty"`
}

func (x *FileSystemStoragePathSourceConfig) Reset() {
	*x = FileSystemStoragePathSourceConfig{}
	if protoimpl.UnsafeEnabled {
		mi := &file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *FileSystemStoragePathSourceConfig) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*FileSystemStoragePathSourceConfig) ProtoMessage() {}

func (x *FileSystemStoragePathSourceConfig) ProtoReflect() protoreflect.Message {
	mi := &file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use FileSystemStoragePathSourceConfig.ProtoReflect.Descriptor instead.
func (*FileSystemStoragePathSourceConfig) Descriptor() ([]byte, []int) {
	return file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDescGZIP(), []int{0}
}

func (x *FileSystemStoragePathSourceConfig) GetServables() []*FileSystemStoragePathSourceConfig_ServableToMonitor {
	if x != nil {
		return x.Servables
	}
	return nil
}

// Deprecated: Do not use.
func (x *FileSystemStoragePathSourceConfig) GetServableName() string {
	if x != nil {
		return x.ServableName
	}
	return ""
}

// Deprecated: Do not use.
func (x *FileSystemStoragePathSourceConfig) GetBasePath() string {
	if x != nil {
		return x.BasePath
	}
	return ""
}

func (x *FileSystemStoragePathSourceConfig) GetFileSystemPollWaitSeconds() int64 {
	if x != nil {
		return x.FileSystemPollWaitSeconds
	}
	return 0
}

// Deprecated: Do not use.
func (x *FileSystemStoragePathSourceConfig) GetFailIfZeroVersionsAtStartup() bool {
	if x != nil {
		return x.FailIfZeroVersionsAtStartup
	}
	return false
}

func (x *FileSystemStoragePathSourceConfig) GetServableVersionsAlwaysPresent() bool {
	if x != nil {
		return x.ServableVersionsAlwaysPresent
	}
	return false
}

// A policy that dictates which version(s) of a servable should be served.
type FileSystemStoragePathSourceConfig_ServableVersionPolicy struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Types that are assignable to PolicyChoice:
	//	*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest_
	//	*FileSystemStoragePathSourceConfig_ServableVersionPolicy_All_
	//	*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific_
	PolicyChoice isFileSystemStoragePathSourceConfig_ServableVersionPolicy_PolicyChoice `protobuf_oneof:"policy_choice"`
}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy) Reset() {
	*x = FileSystemStoragePathSourceConfig_ServableVersionPolicy{}
	if protoimpl.UnsafeEnabled {
		mi := &file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*FileSystemStoragePathSourceConfig_ServableVersionPolicy) ProtoMessage() {}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy) ProtoReflect() protoreflect.Message {
	mi := &file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use FileSystemStoragePathSourceConfig_ServableVersionPolicy.ProtoReflect.Descriptor instead.
func (*FileSystemStoragePathSourceConfig_ServableVersionPolicy) Descriptor() ([]byte, []int) {
	return file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDescGZIP(), []int{0, 0}
}

func (m *FileSystemStoragePathSourceConfig_ServableVersionPolicy) GetPolicyChoice() isFileSystemStoragePathSourceConfig_ServableVersionPolicy_PolicyChoice {
	if m != nil {
		return m.PolicyChoice
	}
	return nil
}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy) GetLatest() *FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest {
	if x, ok := x.GetPolicyChoice().(*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest_); ok {
		return x.Latest
	}
	return nil
}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy) GetAll() *FileSystemStoragePathSourceConfig_ServableVersionPolicy_All {
	if x, ok := x.GetPolicyChoice().(*FileSystemStoragePathSourceConfig_ServableVersionPolicy_All_); ok {
		return x.All
	}
	return nil
}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy) GetSpecific() *FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific {
	if x, ok := x.GetPolicyChoice().(*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific_); ok {
		return x.Specific
	}
	return nil
}

type isFileSystemStoragePathSourceConfig_ServableVersionPolicy_PolicyChoice interface {
	isFileSystemStoragePathSourceConfig_ServableVersionPolicy_PolicyChoice()
}

type FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest_ struct {
	Latest *FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest `protobuf:"bytes,100,opt,name=latest,proto3,oneof"`
}

type FileSystemStoragePathSourceConfig_ServableVersionPolicy_All_ struct {
	All *FileSystemStoragePathSourceConfig_ServableVersionPolicy_All `protobuf:"bytes,101,opt,name=all,proto3,oneof"`
}

type FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific_ struct {
	Specific *FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific `protobuf:"bytes,102,opt,name=specific,proto3,oneof"`
}

func (*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest_) isFileSystemStoragePathSourceConfig_ServableVersionPolicy_PolicyChoice() {
}

func (*FileSystemStoragePathSourceConfig_ServableVersionPolicy_All_) isFileSystemStoragePathSourceConfig_ServableVersionPolicy_PolicyChoice() {
}

func (*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific_) isFileSystemStoragePathSourceConfig_ServableVersionPolicy_PolicyChoice() {
}

// A servable name and base path to look for versions of the servable.
type FileSystemStoragePathSourceConfig_ServableToMonitor struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// The servable name to supply in aspired-versions callback calls. Child
	// paths of 'base_path' are considered to be versions of this servable.
	ServableName string `protobuf:"bytes,1,opt,name=servable_name,json=servableName,proto3" json:"servable_name,omitempty"`
	// The path to monitor, i.e. look for child paths of the form base_path/123.
	BasePath string `protobuf:"bytes,2,opt,name=base_path,json=basePath,proto3" json:"base_path,omitempty"`
	// The policy to determines the number of versions of the servable to be
	// served at the same time.
	ServableVersionPolicy *FileSystemStoragePathSourceConfig_ServableVersionPolicy `protobuf:"bytes,4,opt,name=servable_version_policy,json=servableVersionPolicy,proto3" json:"servable_version_policy,omitempty"`
}

func (x *FileSystemStoragePathSourceConfig_ServableToMonitor) Reset() {
	*x = FileSystemStoragePathSourceConfig_ServableToMonitor{}
	if protoimpl.UnsafeEnabled {
		mi := &file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *FileSystemStoragePathSourceConfig_ServableToMonitor) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*FileSystemStoragePathSourceConfig_ServableToMonitor) ProtoMessage() {}

func (x *FileSystemStoragePathSourceConfig_ServableToMonitor) ProtoReflect() protoreflect.Message {
	mi := &file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use FileSystemStoragePathSourceConfig_ServableToMonitor.ProtoReflect.Descriptor instead.
func (*FileSystemStoragePathSourceConfig_ServableToMonitor) Descriptor() ([]byte, []int) {
	return file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDescGZIP(), []int{0, 1}
}

func (x *FileSystemStoragePathSourceConfig_ServableToMonitor) GetServableName() string {
	if x != nil {
		return x.ServableName
	}
	return ""
}

func (x *FileSystemStoragePathSourceConfig_ServableToMonitor) GetBasePath() string {
	if x != nil {
		return x.BasePath
	}
	return ""
}

func (x *FileSystemStoragePathSourceConfig_ServableToMonitor) GetServableVersionPolicy() *FileSystemStoragePathSourceConfig_ServableVersionPolicy {
	if x != nil {
		return x.ServableVersionPolicy
	}
	return nil
}

// Serve the latest versions (i.e. the ones with the highest version
// numbers), among those found on disk.
//
// This is the default policy, with the default number of versions as 1.
type FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Number of latest versions to serve. (The default is 1.)
	NumVersions uint32 `protobuf:"varint,1,opt,name=num_versions,json=numVersions,proto3" json:"num_versions,omitempty"`
}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest) Reset() {
	*x = FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[3]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest) ProtoMessage() {}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest) ProtoReflect() protoreflect.Message {
	mi := &file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[3]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest.ProtoReflect.Descriptor instead.
func (*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest) Descriptor() ([]byte, []int) {
	return file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDescGZIP(), []int{0, 0, 0}
}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest) GetNumVersions() uint32 {
	if x != nil {
		return x.NumVersions
	}
	return 0
}

// Serve all versions found on disk.
type FileSystemStoragePathSourceConfig_ServableVersionPolicy_All struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy_All) Reset() {
	*x = FileSystemStoragePathSourceConfig_ServableVersionPolicy_All{}
	if protoimpl.UnsafeEnabled {
		mi := &file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[4]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy_All) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*FileSystemStoragePathSourceConfig_ServableVersionPolicy_All) ProtoMessage() {}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy_All) ProtoReflect() protoreflect.Message {
	mi := &file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[4]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use FileSystemStoragePathSourceConfig_ServableVersionPolicy_All.ProtoReflect.Descriptor instead.
func (*FileSystemStoragePathSourceConfig_ServableVersionPolicy_All) Descriptor() ([]byte, []int) {
	return file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDescGZIP(), []int{0, 0, 1}
}

// Serve a specific version (or set of versions).
//
// This policy is useful for rolling back to a specific version, or for
// canarying a specific version while still serving a separate stable
// version.
type FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// The version numbers to serve.
	Versions []int64 `protobuf:"varint,1,rep,packed,name=versions,proto3" json:"versions,omitempty"`
}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific) Reset() {
	*x = FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific{}
	if protoimpl.UnsafeEnabled {
		mi := &file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[5]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific) ProtoMessage() {}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific) ProtoReflect() protoreflect.Message {
	mi := &file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[5]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific.ProtoReflect.Descriptor instead.
func (*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific) Descriptor() ([]byte, []int) {
	return file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDescGZIP(), []int{0, 0, 2}
}

func (x *FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific) GetVersions() []int64 {
	if x != nil {
		return x.Versions
	}
	return nil
}

var File_tensorflow_serving_config_file_system_storage_path_source_proto protoreflect.FileDescriptor

var file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDesc = []byte{
	0x0a, 0x3f, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x5f, 0x73, 0x65, 0x72,
	0x76, 0x69, 0x6e, 0x67, 0x2f, 0x63, 0x6f, 0x6e, 0x66, 0x69, 0x67, 0x2f, 0x66, 0x69, 0x6c, 0x65,
	0x5f, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x5f, 0x73, 0x74, 0x6f, 0x72, 0x61, 0x67, 0x65, 0x5f,
	0x70, 0x61, 0x74, 0x68, 0x5f, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x12, 0x12, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65,
	0x72, 0x76, 0x69, 0x6e, 0x67, 0x22, 0xdc, 0x08, 0x0a, 0x21, 0x46, 0x69, 0x6c, 0x65, 0x53, 0x79,
	0x73, 0x74, 0x65, 0x6d, 0x53, 0x74, 0x6f, 0x72, 0x61, 0x67, 0x65, 0x50, 0x61, 0x74, 0x68, 0x53,
	0x6f, 0x75, 0x72, 0x63, 0x65, 0x43, 0x6f, 0x6e, 0x66, 0x69, 0x67, 0x12, 0x65, 0x0a, 0x09, 0x73,
	0x65, 0x72, 0x76, 0x61, 0x62, 0x6c, 0x65, 0x73, 0x18, 0x05, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x47,
	0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76,
	0x69, 0x6e, 0x67, 0x2e, 0x46, 0x69, 0x6c, 0x65, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x53, 0x74,
	0x6f, 0x72, 0x61, 0x67, 0x65, 0x50, 0x61, 0x74, 0x68, 0x53, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x43,
	0x6f, 0x6e, 0x66, 0x69, 0x67, 0x2e, 0x53, 0x65, 0x72, 0x76, 0x61, 0x62, 0x6c, 0x65, 0x54, 0x6f,
	0x4d, 0x6f, 0x6e, 0x69, 0x74, 0x6f, 0x72, 0x52, 0x09, 0x73, 0x65, 0x72, 0x76, 0x61, 0x62, 0x6c,
	0x65, 0x73, 0x12, 0x27, 0x0a, 0x0d, 0x73, 0x65, 0x72, 0x76, 0x61, 0x62, 0x6c, 0x65, 0x5f, 0x6e,
	0x61, 0x6d, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x42, 0x02, 0x18, 0x01, 0x52, 0x0c, 0x73,
	0x65, 0x72, 0x76, 0x61, 0x62, 0x6c, 0x65, 0x4e, 0x61, 0x6d, 0x65, 0x12, 0x1f, 0x0a, 0x09, 0x62,
	0x61, 0x73, 0x65, 0x5f, 0x70, 0x61, 0x74, 0x68, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x42, 0x02,
	0x18, 0x01, 0x52, 0x08, 0x62, 0x61, 0x73, 0x65, 0x50, 0x61, 0x74, 0x68, 0x12, 0x40, 0x0a, 0x1d,
	0x66, 0x69, 0x6c, 0x65, 0x5f, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x5f, 0x70, 0x6f, 0x6c, 0x6c,
	0x5f, 0x77, 0x61, 0x69, 0x74, 0x5f, 0x73, 0x65, 0x63, 0x6f, 0x6e, 0x64, 0x73, 0x18, 0x03, 0x20,
	0x01, 0x28, 0x03, 0x52, 0x19, 0x66, 0x69, 0x6c, 0x65, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x50,
	0x6f, 0x6c, 0x6c, 0x57, 0x61, 0x69, 0x74, 0x53, 0x65, 0x63, 0x6f, 0x6e, 0x64, 0x73, 0x12, 0x49,
	0x0a, 0x20, 0x66, 0x61, 0x69, 0x6c, 0x5f, 0x69, 0x66, 0x5f, 0x7a, 0x65, 0x72, 0x6f, 0x5f, 0x76,
	0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x73, 0x5f, 0x61, 0x74, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74,
	0x75, 0x70, 0x18, 0x04, 0x20, 0x01, 0x28, 0x08, 0x42, 0x02, 0x18, 0x01, 0x52, 0x1b, 0x66, 0x61,
	0x69, 0x6c, 0x49, 0x66, 0x5a, 0x65, 0x72, 0x6f, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x73,
	0x41, 0x74, 0x53, 0x74, 0x61, 0x72, 0x74, 0x75, 0x70, 0x12, 0x47, 0x0a, 0x20, 0x73, 0x65, 0x72,
	0x76, 0x61, 0x62, 0x6c, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x73, 0x5f, 0x61,
	0x6c, 0x77, 0x61, 0x79, 0x73, 0x5f, 0x70, 0x72, 0x65, 0x73, 0x65, 0x6e, 0x74, 0x18, 0x06, 0x20,
	0x01, 0x28, 0x08, 0x52, 0x1d, 0x73, 0x65, 0x72, 0x76, 0x61, 0x62, 0x6c, 0x65, 0x56, 0x65, 0x72,
	0x73, 0x69, 0x6f, 0x6e, 0x73, 0x41, 0x6c, 0x77, 0x61, 0x79, 0x73, 0x50, 0x72, 0x65, 0x73, 0x65,
	0x6e, 0x74, 0x1a, 0xcb, 0x03, 0x0a, 0x15, 0x53, 0x65, 0x72, 0x76, 0x61, 0x62, 0x6c, 0x65, 0x56,
	0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x50, 0x6f, 0x6c, 0x69, 0x63, 0x79, 0x12, 0x6c, 0x0a, 0x06,
	0x6c, 0x61, 0x74, 0x65, 0x73, 0x74, 0x18, 0x64, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x52, 0x2e, 0x74,
	0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e,
	0x67, 0x2e, 0x46, 0x69, 0x6c, 0x65, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x53, 0x74, 0x6f, 0x72,
	0x61, 0x67, 0x65, 0x50, 0x61, 0x74, 0x68, 0x53, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x43, 0x6f, 0x6e,
	0x66, 0x69, 0x67, 0x2e, 0x53, 0x65, 0x72, 0x76, 0x61, 0x62, 0x6c, 0x65, 0x56, 0x65, 0x72, 0x73,
	0x69, 0x6f, 0x6e, 0x50, 0x6f, 0x6c, 0x69, 0x63, 0x79, 0x2e, 0x4c, 0x61, 0x74, 0x65, 0x73, 0x74,
	0x48, 0x00, 0x52, 0x06, 0x6c, 0x61, 0x74, 0x65, 0x73, 0x74, 0x12, 0x63, 0x0a, 0x03, 0x61, 0x6c,
	0x6c, 0x18, 0x65, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x4f, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72,
	0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e, 0x46, 0x69, 0x6c,
	0x65, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x53, 0x74, 0x6f, 0x72, 0x61, 0x67, 0x65, 0x50, 0x61,
	0x74, 0x68, 0x53, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x43, 0x6f, 0x6e, 0x66, 0x69, 0x67, 0x2e, 0x53,
	0x65, 0x72, 0x76, 0x61, 0x62, 0x6c, 0x65, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x50, 0x6f,
	0x6c, 0x69, 0x63, 0x79, 0x2e, 0x41, 0x6c, 0x6c, 0x48, 0x00, 0x52, 0x03, 0x61, 0x6c, 0x6c, 0x12,
	0x72, 0x0a, 0x08, 0x73, 0x70, 0x65, 0x63, 0x69, 0x66, 0x69, 0x63, 0x18, 0x66, 0x20, 0x01, 0x28,
	0x0b, 0x32, 0x54, 0x2e, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73,
	0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e, 0x46, 0x69, 0x6c, 0x65, 0x53, 0x79, 0x73, 0x74, 0x65,
	0x6d, 0x53, 0x74, 0x6f, 0x72, 0x61, 0x67, 0x65, 0x50, 0x61, 0x74, 0x68, 0x53, 0x6f, 0x75, 0x72,
	0x63, 0x65, 0x43, 0x6f, 0x6e, 0x66, 0x69, 0x67, 0x2e, 0x53, 0x65, 0x72, 0x76, 0x61, 0x62, 0x6c,
	0x65, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x50, 0x6f, 0x6c, 0x69, 0x63, 0x79, 0x2e, 0x53,
	0x70, 0x65, 0x63, 0x69, 0x66, 0x69, 0x63, 0x48, 0x00, 0x52, 0x08, 0x73, 0x70, 0x65, 0x63, 0x69,
	0x66, 0x69, 0x63, 0x1a, 0x2b, 0x0a, 0x06, 0x4c, 0x61, 0x74, 0x65, 0x73, 0x74, 0x12, 0x21, 0x0a,
	0x0c, 0x6e, 0x75, 0x6d, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x73, 0x18, 0x01, 0x20,
	0x01, 0x28, 0x0d, 0x52, 0x0b, 0x6e, 0x75, 0x6d, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x73,
	0x1a, 0x05, 0x0a, 0x03, 0x41, 0x6c, 0x6c, 0x1a, 0x26, 0x0a, 0x08, 0x53, 0x70, 0x65, 0x63, 0x69,
	0x66, 0x69, 0x63, 0x12, 0x1a, 0x0a, 0x08, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x73, 0x18,
	0x01, 0x20, 0x03, 0x28, 0x03, 0x52, 0x08, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x73, 0x42,
	0x0f, 0x0a, 0x0d, 0x70, 0x6f, 0x6c, 0x69, 0x63, 0x79, 0x5f, 0x63, 0x68, 0x6f, 0x69, 0x63, 0x65,
	0x1a, 0xe1, 0x01, 0x0a, 0x11, 0x53, 0x65, 0x72, 0x76, 0x61, 0x62, 0x6c, 0x65, 0x54, 0x6f, 0x4d,
	0x6f, 0x6e, 0x69, 0x74, 0x6f, 0x72, 0x12, 0x23, 0x0a, 0x0d, 0x73, 0x65, 0x72, 0x76, 0x61, 0x62,
	0x6c, 0x65, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x0c, 0x73,
	0x65, 0x72, 0x76, 0x61, 0x62, 0x6c, 0x65, 0x4e, 0x61, 0x6d, 0x65, 0x12, 0x1b, 0x0a, 0x09, 0x62,
	0x61, 0x73, 0x65, 0x5f, 0x70, 0x61, 0x74, 0x68, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x08,
	0x62, 0x61, 0x73, 0x65, 0x50, 0x61, 0x74, 0x68, 0x12, 0x83, 0x01, 0x0a, 0x17, 0x73, 0x65, 0x72,
	0x76, 0x61, 0x62, 0x6c, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x5f, 0x70, 0x6f,
	0x6c, 0x69, 0x63, 0x79, 0x18, 0x04, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x4b, 0x2e, 0x74, 0x65, 0x6e,
	0x73, 0x6f, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x2e,
	0x46, 0x69, 0x6c, 0x65, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x53, 0x74, 0x6f, 0x72, 0x61, 0x67,
	0x65, 0x50, 0x61, 0x74, 0x68, 0x53, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x43, 0x6f, 0x6e, 0x66, 0x69,
	0x67, 0x2e, 0x53, 0x65, 0x72, 0x76, 0x61, 0x62, 0x6c, 0x65, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f,
	0x6e, 0x50, 0x6f, 0x6c, 0x69, 0x63, 0x79, 0x52, 0x15, 0x73, 0x65, 0x72, 0x76, 0x61, 0x62, 0x6c,
	0x65, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x50, 0x6f, 0x6c, 0x69, 0x63, 0x79, 0x4a, 0x04,
	0x08, 0x03, 0x10, 0x04, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDescOnce sync.Once
	file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDescData = file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDesc
)

func file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDescGZIP() []byte {
	file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDescOnce.Do(func() {
		file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDescData = protoimpl.X.CompressGZIP(file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDescData)
	})
	return file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDescData
}

var file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes = make([]protoimpl.MessageInfo, 6)
var file_tensorflow_serving_config_file_system_storage_path_source_proto_goTypes = []interface{}{
	(*FileSystemStoragePathSourceConfig)(nil),                                // 0: tensorflow.serving.FileSystemStoragePathSourceConfig
	(*FileSystemStoragePathSourceConfig_ServableVersionPolicy)(nil),          // 1: tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy
	(*FileSystemStoragePathSourceConfig_ServableToMonitor)(nil),              // 2: tensorflow.serving.FileSystemStoragePathSourceConfig.ServableToMonitor
	(*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest)(nil),   // 3: tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.Latest
	(*FileSystemStoragePathSourceConfig_ServableVersionPolicy_All)(nil),      // 4: tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.All
	(*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific)(nil), // 5: tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.Specific
}
var file_tensorflow_serving_config_file_system_storage_path_source_proto_depIdxs = []int32{
	2, // 0: tensorflow.serving.FileSystemStoragePathSourceConfig.servables:type_name -> tensorflow.serving.FileSystemStoragePathSourceConfig.ServableToMonitor
	3, // 1: tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.latest:type_name -> tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.Latest
	4, // 2: tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.all:type_name -> tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.All
	5, // 3: tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.specific:type_name -> tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.Specific
	1, // 4: tensorflow.serving.FileSystemStoragePathSourceConfig.ServableToMonitor.servable_version_policy:type_name -> tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy
	5, // [5:5] is the sub-list for method output_type
	5, // [5:5] is the sub-list for method input_type
	5, // [5:5] is the sub-list for extension type_name
	5, // [5:5] is the sub-list for extension extendee
	0, // [0:5] is the sub-list for field type_name
}

func init() { file_tensorflow_serving_config_file_system_storage_path_source_proto_init() }
func file_tensorflow_serving_config_file_system_storage_path_source_proto_init() {
	if File_tensorflow_serving_config_file_system_storage_path_source_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*FileSystemStoragePathSourceConfig); i {
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
		file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*FileSystemStoragePathSourceConfig_ServableVersionPolicy); i {
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
		file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*FileSystemStoragePathSourceConfig_ServableToMonitor); i {
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
		file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[3].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest); i {
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
		file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[4].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*FileSystemStoragePathSourceConfig_ServableVersionPolicy_All); i {
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
		file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[5].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific); i {
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
	file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes[1].OneofWrappers = []interface{}{
		(*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Latest_)(nil),
		(*FileSystemStoragePathSourceConfig_ServableVersionPolicy_All_)(nil),
		(*FileSystemStoragePathSourceConfig_ServableVersionPolicy_Specific_)(nil),
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   6,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_tensorflow_serving_config_file_system_storage_path_source_proto_goTypes,
		DependencyIndexes: file_tensorflow_serving_config_file_system_storage_path_source_proto_depIdxs,
		MessageInfos:      file_tensorflow_serving_config_file_system_storage_path_source_proto_msgTypes,
	}.Build()
	File_tensorflow_serving_config_file_system_storage_path_source_proto = out.File
	file_tensorflow_serving_config_file_system_storage_path_source_proto_rawDesc = nil
	file_tensorflow_serving_config_file_system_storage_path_source_proto_goTypes = nil
	file_tensorflow_serving_config_file_system_storage_path_source_proto_depIdxs = nil
}
