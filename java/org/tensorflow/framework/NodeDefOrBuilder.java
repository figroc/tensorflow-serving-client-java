// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/node_def.proto

package org.tensorflow.framework;

public interface NodeDefOrBuilder extends
    // @@protoc_insertion_point(interface_extends:tensorflow.NodeDef)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <pre>
   * The name given to this operator. Used for naming inputs,
   * logging, visualization, etc.  Unique within a single GraphDef.
   * Must match the regexp "[A-Za-z0-9.][A-Za-z0-9_&gt;./]*".
   * </pre>
   *
   * <code>string name = 1;</code>
   * @return The name.
   */
  java.lang.String getName();
  /**
   * <pre>
   * The name given to this operator. Used for naming inputs,
   * logging, visualization, etc.  Unique within a single GraphDef.
   * Must match the regexp "[A-Za-z0-9.][A-Za-z0-9_&gt;./]*".
   * </pre>
   *
   * <code>string name = 1;</code>
   * @return The bytes for name.
   */
  com.google.protobuf.ByteString
      getNameBytes();

  /**
   * <pre>
   * The operation name.  There may be custom parameters in attrs.
   * Op names starting with an underscore are reserved for internal use.
   * </pre>
   *
   * <code>string op = 2;</code>
   * @return The op.
   */
  java.lang.String getOp();
  /**
   * <pre>
   * The operation name.  There may be custom parameters in attrs.
   * Op names starting with an underscore are reserved for internal use.
   * </pre>
   *
   * <code>string op = 2;</code>
   * @return The bytes for op.
   */
  com.google.protobuf.ByteString
      getOpBytes();

  /**
   * <pre>
   * Each input is "node:src_output" with "node" being a string name and
   * "src_output" indicating which output tensor to use from "node". If
   * "src_output" is 0 the ":0" suffix can be omitted.  Regular inputs
   * may optionally be followed by control inputs that have the format
   * "^node".
   * </pre>
   *
   * <code>repeated string input = 3;</code>
   * @return A list containing the input.
   */
  java.util.List<java.lang.String>
      getInputList();
  /**
   * <pre>
   * Each input is "node:src_output" with "node" being a string name and
   * "src_output" indicating which output tensor to use from "node". If
   * "src_output" is 0 the ":0" suffix can be omitted.  Regular inputs
   * may optionally be followed by control inputs that have the format
   * "^node".
   * </pre>
   *
   * <code>repeated string input = 3;</code>
   * @return The count of input.
   */
  int getInputCount();
  /**
   * <pre>
   * Each input is "node:src_output" with "node" being a string name and
   * "src_output" indicating which output tensor to use from "node". If
   * "src_output" is 0 the ":0" suffix can be omitted.  Regular inputs
   * may optionally be followed by control inputs that have the format
   * "^node".
   * </pre>
   *
   * <code>repeated string input = 3;</code>
   * @param index The index of the element to return.
   * @return The input at the given index.
   */
  java.lang.String getInput(int index);
  /**
   * <pre>
   * Each input is "node:src_output" with "node" being a string name and
   * "src_output" indicating which output tensor to use from "node". If
   * "src_output" is 0 the ":0" suffix can be omitted.  Regular inputs
   * may optionally be followed by control inputs that have the format
   * "^node".
   * </pre>
   *
   * <code>repeated string input = 3;</code>
   * @param index The index of the value to return.
   * @return The bytes of the input at the given index.
   */
  com.google.protobuf.ByteString
      getInputBytes(int index);

  /**
   * <pre>
   * A (possibly partial) specification for the device on which this
   * node should be placed.
   * The expected syntax for this string is as follows:
   * DEVICE_SPEC ::= PARTIAL_SPEC
   * PARTIAL_SPEC ::= ("/" CONSTRAINT) *
   * CONSTRAINT ::= ("job:" JOB_NAME)
   *              | ("replica:" [1-9][0-9]*)
   *              | ("task:" [1-9][0-9]*)
   *              | ("device:" [A-Za-z]* ":" ([1-9][0-9]* | "*") )
   * Valid values for this string include:
   * * "/job:worker/replica:0/task:1/device:GPU:3"  (full specification)
   * * "/job:worker/device:GPU:3"                   (partial specification)
   * * ""                                    (no specification)
   * If the constraints do not resolve to a single device (or if this
   * field is empty or not present), the runtime will attempt to
   * choose a device automatically.
   * </pre>
   *
   * <code>string device = 4;</code>
   * @return The device.
   */
  java.lang.String getDevice();
  /**
   * <pre>
   * A (possibly partial) specification for the device on which this
   * node should be placed.
   * The expected syntax for this string is as follows:
   * DEVICE_SPEC ::= PARTIAL_SPEC
   * PARTIAL_SPEC ::= ("/" CONSTRAINT) *
   * CONSTRAINT ::= ("job:" JOB_NAME)
   *              | ("replica:" [1-9][0-9]*)
   *              | ("task:" [1-9][0-9]*)
   *              | ("device:" [A-Za-z]* ":" ([1-9][0-9]* | "*") )
   * Valid values for this string include:
   * * "/job:worker/replica:0/task:1/device:GPU:3"  (full specification)
   * * "/job:worker/device:GPU:3"                   (partial specification)
   * * ""                                    (no specification)
   * If the constraints do not resolve to a single device (or if this
   * field is empty or not present), the runtime will attempt to
   * choose a device automatically.
   * </pre>
   *
   * <code>string device = 4;</code>
   * @return The bytes for device.
   */
  com.google.protobuf.ByteString
      getDeviceBytes();

  /**
   * <pre>
   * Operation-specific graph-construction-time configuration.
   * Note that this should include all attrs defined in the
   * corresponding OpDef, including those with a value matching
   * the default -- this allows the default to change and makes
   * NodeDefs easier to interpret on their own.  However, if
   * an attr with a default is not specified in this list, the
   * default will be used.
   * The "names" (keys) must match the regexp "[a-z][a-z0-9_]+" (and
   * one of the names from the corresponding OpDef's attr field).
   * The values must have a type matching the corresponding OpDef
   * attr's type field.
   * TODO(josh11b): Add some examples here showing best practices.
   * </pre>
   *
   * <code>map&lt;string, .tensorflow.AttrValue&gt; attr = 5;</code>
   */
  int getAttrCount();
  /**
   * <pre>
   * Operation-specific graph-construction-time configuration.
   * Note that this should include all attrs defined in the
   * corresponding OpDef, including those with a value matching
   * the default -- this allows the default to change and makes
   * NodeDefs easier to interpret on their own.  However, if
   * an attr with a default is not specified in this list, the
   * default will be used.
   * The "names" (keys) must match the regexp "[a-z][a-z0-9_]+" (and
   * one of the names from the corresponding OpDef's attr field).
   * The values must have a type matching the corresponding OpDef
   * attr's type field.
   * TODO(josh11b): Add some examples here showing best practices.
   * </pre>
   *
   * <code>map&lt;string, .tensorflow.AttrValue&gt; attr = 5;</code>
   */
  boolean containsAttr(
      java.lang.String key);
  /**
   * Use {@link #getAttrMap()} instead.
   */
  @java.lang.Deprecated
  java.util.Map<java.lang.String, org.tensorflow.framework.AttrValue>
  getAttr();
  /**
   * <pre>
   * Operation-specific graph-construction-time configuration.
   * Note that this should include all attrs defined in the
   * corresponding OpDef, including those with a value matching
   * the default -- this allows the default to change and makes
   * NodeDefs easier to interpret on their own.  However, if
   * an attr with a default is not specified in this list, the
   * default will be used.
   * The "names" (keys) must match the regexp "[a-z][a-z0-9_]+" (and
   * one of the names from the corresponding OpDef's attr field).
   * The values must have a type matching the corresponding OpDef
   * attr's type field.
   * TODO(josh11b): Add some examples here showing best practices.
   * </pre>
   *
   * <code>map&lt;string, .tensorflow.AttrValue&gt; attr = 5;</code>
   */
  java.util.Map<java.lang.String, org.tensorflow.framework.AttrValue>
  getAttrMap();
  /**
   * <pre>
   * Operation-specific graph-construction-time configuration.
   * Note that this should include all attrs defined in the
   * corresponding OpDef, including those with a value matching
   * the default -- this allows the default to change and makes
   * NodeDefs easier to interpret on their own.  However, if
   * an attr with a default is not specified in this list, the
   * default will be used.
   * The "names" (keys) must match the regexp "[a-z][a-z0-9_]+" (and
   * one of the names from the corresponding OpDef's attr field).
   * The values must have a type matching the corresponding OpDef
   * attr's type field.
   * TODO(josh11b): Add some examples here showing best practices.
   * </pre>
   *
   * <code>map&lt;string, .tensorflow.AttrValue&gt; attr = 5;</code>
   */

  org.tensorflow.framework.AttrValue getAttrOrDefault(
      java.lang.String key,
      org.tensorflow.framework.AttrValue defaultValue);
  /**
   * <pre>
   * Operation-specific graph-construction-time configuration.
   * Note that this should include all attrs defined in the
   * corresponding OpDef, including those with a value matching
   * the default -- this allows the default to change and makes
   * NodeDefs easier to interpret on their own.  However, if
   * an attr with a default is not specified in this list, the
   * default will be used.
   * The "names" (keys) must match the regexp "[a-z][a-z0-9_]+" (and
   * one of the names from the corresponding OpDef's attr field).
   * The values must have a type matching the corresponding OpDef
   * attr's type field.
   * TODO(josh11b): Add some examples here showing best practices.
   * </pre>
   *
   * <code>map&lt;string, .tensorflow.AttrValue&gt; attr = 5;</code>
   */

  org.tensorflow.framework.AttrValue getAttrOrThrow(
      java.lang.String key);

  /**
   * <pre>
   * This stores debug information associated with the node.
   * </pre>
   *
   * <code>.tensorflow.NodeDef.ExperimentalDebugInfo experimental_debug_info = 6;</code>
   * @return Whether the experimentalDebugInfo field is set.
   */
  boolean hasExperimentalDebugInfo();
  /**
   * <pre>
   * This stores debug information associated with the node.
   * </pre>
   *
   * <code>.tensorflow.NodeDef.ExperimentalDebugInfo experimental_debug_info = 6;</code>
   * @return The experimentalDebugInfo.
   */
  org.tensorflow.framework.NodeDef.ExperimentalDebugInfo getExperimentalDebugInfo();
  /**
   * <pre>
   * This stores debug information associated with the node.
   * </pre>
   *
   * <code>.tensorflow.NodeDef.ExperimentalDebugInfo experimental_debug_info = 6;</code>
   */
  org.tensorflow.framework.NodeDef.ExperimentalDebugInfoOrBuilder getExperimentalDebugInfoOrBuilder();
}
