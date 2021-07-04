// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: tensorflow/core/framework/node_def.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Tensorflow {

  /// <summary>Holder for reflection information generated from tensorflow/core/framework/node_def.proto</summary>
  public static partial class NodeDefReflection {

    #region Descriptor
    /// <summary>File descriptor for tensorflow/core/framework/node_def.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static NodeDefReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Cih0ZW5zb3JmbG93L2NvcmUvZnJhbWV3b3JrL25vZGVfZGVmLnByb3RvEgp0",
            "ZW5zb3JmbG93Gip0ZW5zb3JmbG93L2NvcmUvZnJhbWV3b3JrL2F0dHJfdmFs",
            "dWUucHJvdG8i0gIKB05vZGVEZWYSDAoEbmFtZRgBIAEoCRIKCgJvcBgCIAEo",
            "CRINCgVpbnB1dBgDIAMoCRIOCgZkZXZpY2UYBCABKAkSKwoEYXR0chgFIAMo",
            "CzIdLnRlbnNvcmZsb3cuTm9kZURlZi5BdHRyRW50cnkSSgoXZXhwZXJpbWVu",
            "dGFsX2RlYnVnX2luZm8YBiABKAsyKS50ZW5zb3JmbG93Lk5vZGVEZWYuRXhw",
            "ZXJpbWVudGFsRGVidWdJbmZvGkIKCUF0dHJFbnRyeRILCgNrZXkYASABKAkS",
            "JAoFdmFsdWUYAiABKAsyFS50ZW5zb3JmbG93LkF0dHJWYWx1ZToCOAEaUQoV",
            "RXhwZXJpbWVudGFsRGVidWdJbmZvEhsKE29yaWdpbmFsX25vZGVfbmFtZXMY",
            "ASADKAkSGwoTb3JpZ2luYWxfZnVuY19uYW1lcxgCIAMoCUJpChhvcmcudGVu",
            "c29yZmxvdy5mcmFtZXdvcmtCCU5vZGVQcm90b1ABWj1naXRodWIuY29tL3Rl",
            "bnNvcmZsb3cvdGVuc29yZmxvdy90ZW5zb3JmbG93L2dvL2NvcmUvZnJhbWV3",
            "b3Jr+AEBYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Tensorflow.AttrValueReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Tensorflow.NodeDef), global::Tensorflow.NodeDef.Parser, new[]{ "Name", "Op", "Input", "Device", "Attr", "ExperimentalDebugInfo" }, null, null, null, new pbr::GeneratedClrTypeInfo[] { null, new pbr::GeneratedClrTypeInfo(typeof(global::Tensorflow.NodeDef.Types.ExperimentalDebugInfo), global::Tensorflow.NodeDef.Types.ExperimentalDebugInfo.Parser, new[]{ "OriginalNodeNames", "OriginalFuncNames" }, null, null, null, null)})
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class NodeDef : pb::IMessage<NodeDef>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<NodeDef> _parser = new pb::MessageParser<NodeDef>(() => new NodeDef());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<NodeDef> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Tensorflow.NodeDefReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public NodeDef() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public NodeDef(NodeDef other) : this() {
      name_ = other.name_;
      op_ = other.op_;
      input_ = other.input_.Clone();
      device_ = other.device_;
      attr_ = other.attr_.Clone();
      experimentalDebugInfo_ = other.experimentalDebugInfo_ != null ? other.experimentalDebugInfo_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public NodeDef Clone() {
      return new NodeDef(this);
    }

    /// <summary>Field number for the "name" field.</summary>
    public const int NameFieldNumber = 1;
    private string name_ = "";
    /// <summary>
    /// The name given to this operator. Used for naming inputs,
    /// logging, visualization, etc.  Unique within a single GraphDef.
    /// Must match the regexp "[A-Za-z0-9.][A-Za-z0-9_>./]*".
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Name {
      get { return name_; }
      set {
        name_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "op" field.</summary>
    public const int OpFieldNumber = 2;
    private string op_ = "";
    /// <summary>
    /// The operation name.  There may be custom parameters in attrs.
    /// Op names starting with an underscore are reserved for internal use.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Op {
      get { return op_; }
      set {
        op_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "input" field.</summary>
    public const int InputFieldNumber = 3;
    private static readonly pb::FieldCodec<string> _repeated_input_codec
        = pb::FieldCodec.ForString(26);
    private readonly pbc::RepeatedField<string> input_ = new pbc::RepeatedField<string>();
    /// <summary>
    /// Each input is "node:src_output" with "node" being a string name and
    /// "src_output" indicating which output tensor to use from "node". If
    /// "src_output" is 0 the ":0" suffix can be omitted.  Regular inputs
    /// may optionally be followed by control inputs that have the format
    /// "^node".
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<string> Input {
      get { return input_; }
    }

    /// <summary>Field number for the "device" field.</summary>
    public const int DeviceFieldNumber = 4;
    private string device_ = "";
    /// <summary>
    /// A (possibly partial) specification for the device on which this
    /// node should be placed.
    /// The expected syntax for this string is as follows:
    ///
    /// DEVICE_SPEC ::= PARTIAL_SPEC
    ///
    /// PARTIAL_SPEC ::= ("/" CONSTRAINT) *
    /// CONSTRAINT ::= ("job:" JOB_NAME)
    ///              | ("replica:" [1-9][0-9]*)
    ///              | ("task:" [1-9][0-9]*)
    ///              | ("device:" [A-Za-z]* ":" ([1-9][0-9]* | "*") )
    ///
    /// Valid values for this string include:
    /// * "/job:worker/replica:0/task:1/device:GPU:3"  (full specification)
    /// * "/job:worker/device:GPU:3"                   (partial specification)
    /// * ""                                    (no specification)
    ///
    /// If the constraints do not resolve to a single device (or if this
    /// field is empty or not present), the runtime will attempt to
    /// choose a device automatically.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Device {
      get { return device_; }
      set {
        device_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "attr" field.</summary>
    public const int AttrFieldNumber = 5;
    private static readonly pbc::MapField<string, global::Tensorflow.AttrValue>.Codec _map_attr_codec
        = new pbc::MapField<string, global::Tensorflow.AttrValue>.Codec(pb::FieldCodec.ForString(10, ""), pb::FieldCodec.ForMessage(18, global::Tensorflow.AttrValue.Parser), 42);
    private readonly pbc::MapField<string, global::Tensorflow.AttrValue> attr_ = new pbc::MapField<string, global::Tensorflow.AttrValue>();
    /// <summary>
    /// Operation-specific graph-construction-time configuration.
    /// Note that this should include all attrs defined in the
    /// corresponding OpDef, including those with a value matching
    /// the default -- this allows the default to change and makes
    /// NodeDefs easier to interpret on their own.  However, if
    /// an attr with a default is not specified in this list, the
    /// default will be used.
    /// The "names" (keys) must match the regexp "[a-z][a-z0-9_]+" (and
    /// one of the names from the corresponding OpDef's attr field).
    /// The values must have a type matching the corresponding OpDef
    /// attr's type field.
    /// TODO(josh11b): Add some examples here showing best practices.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::MapField<string, global::Tensorflow.AttrValue> Attr {
      get { return attr_; }
    }

    /// <summary>Field number for the "experimental_debug_info" field.</summary>
    public const int ExperimentalDebugInfoFieldNumber = 6;
    private global::Tensorflow.NodeDef.Types.ExperimentalDebugInfo experimentalDebugInfo_;
    /// <summary>
    /// This stores debug information associated with the node.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Tensorflow.NodeDef.Types.ExperimentalDebugInfo ExperimentalDebugInfo {
      get { return experimentalDebugInfo_; }
      set {
        experimentalDebugInfo_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as NodeDef);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(NodeDef other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Name != other.Name) return false;
      if (Op != other.Op) return false;
      if(!input_.Equals(other.input_)) return false;
      if (Device != other.Device) return false;
      if (!Attr.Equals(other.Attr)) return false;
      if (!object.Equals(ExperimentalDebugInfo, other.ExperimentalDebugInfo)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (Name.Length != 0) hash ^= Name.GetHashCode();
      if (Op.Length != 0) hash ^= Op.GetHashCode();
      hash ^= input_.GetHashCode();
      if (Device.Length != 0) hash ^= Device.GetHashCode();
      hash ^= Attr.GetHashCode();
      if (experimentalDebugInfo_ != null) hash ^= ExperimentalDebugInfo.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      output.WriteRawMessage(this);
    #else
      if (Name.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Name);
      }
      if (Op.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(Op);
      }
      input_.WriteTo(output, _repeated_input_codec);
      if (Device.Length != 0) {
        output.WriteRawTag(34);
        output.WriteString(Device);
      }
      attr_.WriteTo(output, _map_attr_codec);
      if (experimentalDebugInfo_ != null) {
        output.WriteRawTag(50);
        output.WriteMessage(ExperimentalDebugInfo);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (Name.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Name);
      }
      if (Op.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(Op);
      }
      input_.WriteTo(ref output, _repeated_input_codec);
      if (Device.Length != 0) {
        output.WriteRawTag(34);
        output.WriteString(Device);
      }
      attr_.WriteTo(ref output, _map_attr_codec);
      if (experimentalDebugInfo_ != null) {
        output.WriteRawTag(50);
        output.WriteMessage(ExperimentalDebugInfo);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (Name.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Name);
      }
      if (Op.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Op);
      }
      size += input_.CalculateSize(_repeated_input_codec);
      if (Device.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Device);
      }
      size += attr_.CalculateSize(_map_attr_codec);
      if (experimentalDebugInfo_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(ExperimentalDebugInfo);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(NodeDef other) {
      if (other == null) {
        return;
      }
      if (other.Name.Length != 0) {
        Name = other.Name;
      }
      if (other.Op.Length != 0) {
        Op = other.Op;
      }
      input_.Add(other.input_);
      if (other.Device.Length != 0) {
        Device = other.Device;
      }
      attr_.Add(other.attr_);
      if (other.experimentalDebugInfo_ != null) {
        if (experimentalDebugInfo_ == null) {
          ExperimentalDebugInfo = new global::Tensorflow.NodeDef.Types.ExperimentalDebugInfo();
        }
        ExperimentalDebugInfo.MergeFrom(other.ExperimentalDebugInfo);
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      input.ReadRawMessage(this);
    #else
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            Name = input.ReadString();
            break;
          }
          case 18: {
            Op = input.ReadString();
            break;
          }
          case 26: {
            input_.AddEntriesFrom(input, _repeated_input_codec);
            break;
          }
          case 34: {
            Device = input.ReadString();
            break;
          }
          case 42: {
            attr_.AddEntriesFrom(input, _map_attr_codec);
            break;
          }
          case 50: {
            if (experimentalDebugInfo_ == null) {
              ExperimentalDebugInfo = new global::Tensorflow.NodeDef.Types.ExperimentalDebugInfo();
            }
            input.ReadMessage(ExperimentalDebugInfo);
            break;
          }
        }
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
            break;
          case 10: {
            Name = input.ReadString();
            break;
          }
          case 18: {
            Op = input.ReadString();
            break;
          }
          case 26: {
            input_.AddEntriesFrom(ref input, _repeated_input_codec);
            break;
          }
          case 34: {
            Device = input.ReadString();
            break;
          }
          case 42: {
            attr_.AddEntriesFrom(ref input, _map_attr_codec);
            break;
          }
          case 50: {
            if (experimentalDebugInfo_ == null) {
              ExperimentalDebugInfo = new global::Tensorflow.NodeDef.Types.ExperimentalDebugInfo();
            }
            input.ReadMessage(ExperimentalDebugInfo);
            break;
          }
        }
      }
    }
    #endif

    #region Nested types
    /// <summary>Container for nested types declared in the NodeDef message type.</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static partial class Types {
      public sealed partial class ExperimentalDebugInfo : pb::IMessage<ExperimentalDebugInfo>
      #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
          , pb::IBufferMessage
      #endif
      {
        private static readonly pb::MessageParser<ExperimentalDebugInfo> _parser = new pb::MessageParser<ExperimentalDebugInfo>(() => new ExperimentalDebugInfo());
        private pb::UnknownFieldSet _unknownFields;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public static pb::MessageParser<ExperimentalDebugInfo> Parser { get { return _parser; } }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public static pbr::MessageDescriptor Descriptor {
          get { return global::Tensorflow.NodeDef.Descriptor.NestedTypes[1]; }
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        pbr::MessageDescriptor pb::IMessage.Descriptor {
          get { return Descriptor; }
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public ExperimentalDebugInfo() {
          OnConstruction();
        }

        partial void OnConstruction();

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public ExperimentalDebugInfo(ExperimentalDebugInfo other) : this() {
          originalNodeNames_ = other.originalNodeNames_.Clone();
          originalFuncNames_ = other.originalFuncNames_.Clone();
          _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public ExperimentalDebugInfo Clone() {
          return new ExperimentalDebugInfo(this);
        }

        /// <summary>Field number for the "original_node_names" field.</summary>
        public const int OriginalNodeNamesFieldNumber = 1;
        private static readonly pb::FieldCodec<string> _repeated_originalNodeNames_codec
            = pb::FieldCodec.ForString(10);
        private readonly pbc::RepeatedField<string> originalNodeNames_ = new pbc::RepeatedField<string>();
        /// <summary>
        /// Opaque string inserted into error messages created by the runtime.
        ///
        /// This is intended to store the list of names of the nodes from the
        /// original graph that this node was derived. For example if this node, say
        /// C, was result of a fusion of 2 nodes A and B, then 'original_node' would
        /// be {A, B}. This information can be used to map errors originating at the
        /// current node to some top level source code.
        /// </summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public pbc::RepeatedField<string> OriginalNodeNames {
          get { return originalNodeNames_; }
        }

        /// <summary>Field number for the "original_func_names" field.</summary>
        public const int OriginalFuncNamesFieldNumber = 2;
        private static readonly pb::FieldCodec<string> _repeated_originalFuncNames_codec
            = pb::FieldCodec.ForString(18);
        private readonly pbc::RepeatedField<string> originalFuncNames_ = new pbc::RepeatedField<string>();
        /// <summary>
        /// This is intended to store the list of names of the functions from the
        /// original graph that this node was derived. For example if this node, say
        /// C, was result of a fusion of node A in function FA and node B in function
        /// FB, then `original_funcs` would be {FA, FB}. If the node is in the top
        /// level graph, the `original_func` is empty. This information, with the
        /// `original_node_names` can be used to map errors originating at the
        /// current ndoe to some top level source code.
        /// </summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public pbc::RepeatedField<string> OriginalFuncNames {
          get { return originalFuncNames_; }
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public override bool Equals(object other) {
          return Equals(other as ExperimentalDebugInfo);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public bool Equals(ExperimentalDebugInfo other) {
          if (ReferenceEquals(other, null)) {
            return false;
          }
          if (ReferenceEquals(other, this)) {
            return true;
          }
          if(!originalNodeNames_.Equals(other.originalNodeNames_)) return false;
          if(!originalFuncNames_.Equals(other.originalFuncNames_)) return false;
          return Equals(_unknownFields, other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public override int GetHashCode() {
          int hash = 1;
          hash ^= originalNodeNames_.GetHashCode();
          hash ^= originalFuncNames_.GetHashCode();
          if (_unknownFields != null) {
            hash ^= _unknownFields.GetHashCode();
          }
          return hash;
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public override string ToString() {
          return pb::JsonFormatter.ToDiagnosticString(this);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public void WriteTo(pb::CodedOutputStream output) {
        #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
          output.WriteRawMessage(this);
        #else
          originalNodeNames_.WriteTo(output, _repeated_originalNodeNames_codec);
          originalFuncNames_.WriteTo(output, _repeated_originalFuncNames_codec);
          if (_unknownFields != null) {
            _unknownFields.WriteTo(output);
          }
        #endif
        }

        #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
          originalNodeNames_.WriteTo(ref output, _repeated_originalNodeNames_codec);
          originalFuncNames_.WriteTo(ref output, _repeated_originalFuncNames_codec);
          if (_unknownFields != null) {
            _unknownFields.WriteTo(ref output);
          }
        }
        #endif

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public int CalculateSize() {
          int size = 0;
          size += originalNodeNames_.CalculateSize(_repeated_originalNodeNames_codec);
          size += originalFuncNames_.CalculateSize(_repeated_originalFuncNames_codec);
          if (_unknownFields != null) {
            size += _unknownFields.CalculateSize();
          }
          return size;
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public void MergeFrom(ExperimentalDebugInfo other) {
          if (other == null) {
            return;
          }
          originalNodeNames_.Add(other.originalNodeNames_);
          originalFuncNames_.Add(other.originalFuncNames_);
          _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        public void MergeFrom(pb::CodedInputStream input) {
        #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
          input.ReadRawMessage(this);
        #else
          uint tag;
          while ((tag = input.ReadTag()) != 0) {
            switch(tag) {
              default:
                _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
                break;
              case 10: {
                originalNodeNames_.AddEntriesFrom(input, _repeated_originalNodeNames_codec);
                break;
              }
              case 18: {
                originalFuncNames_.AddEntriesFrom(input, _repeated_originalFuncNames_codec);
                break;
              }
            }
          }
        #endif
        }

        #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
          uint tag;
          while ((tag = input.ReadTag()) != 0) {
            switch(tag) {
              default:
                _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
                break;
              case 10: {
                originalNodeNames_.AddEntriesFrom(ref input, _repeated_originalNodeNames_codec);
                break;
              }
              case 18: {
                originalFuncNames_.AddEntriesFrom(ref input, _repeated_originalFuncNames_codec);
                break;
              }
            }
          }
        }
        #endif

      }

    }
    #endregion

  }

  #endregion

}

#endregion Designer generated code
