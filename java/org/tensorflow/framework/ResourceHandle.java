// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/resource_handle.proto

package org.tensorflow.framework;

public final class ResourceHandle {
  private ResourceHandle() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_tensorflow_ResourceHandleProto_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_tensorflow_ResourceHandleProto_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_tensorflow_ResourceHandleProto_DtypeAndShape_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_tensorflow_ResourceHandleProto_DtypeAndShape_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n/tensorflow/core/framework/resource_han" +
      "dle.proto\022\ntensorflow\032,tensorflow/core/f" +
      "ramework/tensor_shape.proto\032%tensorflow/" +
      "core/framework/types.proto\"\245\002\n\023ResourceH" +
      "andleProto\022\016\n\006device\030\001 \001(\t\022\021\n\tcontainer\030" +
      "\002 \001(\t\022\014\n\004name\030\003 \001(\t\022\021\n\thash_code\030\004 \001(\004\022\027" +
      "\n\017maybe_type_name\030\005 \001(\t\022H\n\021dtypes_and_sh" +
      "apes\030\006 \003(\0132-.tensorflow.ResourceHandlePr" +
      "oto.DtypeAndShape\032a\n\rDtypeAndShape\022#\n\005dt" +
      "ype\030\001 \001(\0162\024.tensorflow.DataType\022+\n\005shape" +
      "\030\002 \001(\0132\034.tensorflow.TensorShapeProtoJ\004\010\007" +
      "\020\010Bn\n\030org.tensorflow.frameworkB\016Resource" +
      "HandleP\001Z=github.com/tensorflow/tensorfl" +
      "ow/tensorflow/go/core/framework\370\001\001b\006prot" +
      "o3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          org.tensorflow.framework.TensorShapeProtos.getDescriptor(),
          org.tensorflow.framework.TypesProtos.getDescriptor(),
        });
    internal_static_tensorflow_ResourceHandleProto_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_tensorflow_ResourceHandleProto_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_tensorflow_ResourceHandleProto_descriptor,
        new java.lang.String[] { "Device", "Container", "Name", "HashCode", "MaybeTypeName", "DtypesAndShapes", });
    internal_static_tensorflow_ResourceHandleProto_DtypeAndShape_descriptor =
      internal_static_tensorflow_ResourceHandleProto_descriptor.getNestedTypes().get(0);
    internal_static_tensorflow_ResourceHandleProto_DtypeAndShape_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_tensorflow_ResourceHandleProto_DtypeAndShape_descriptor,
        new java.lang.String[] { "Dtype", "Shape", });
    org.tensorflow.framework.TensorShapeProtos.getDescriptor();
    org.tensorflow.framework.TypesProtos.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
