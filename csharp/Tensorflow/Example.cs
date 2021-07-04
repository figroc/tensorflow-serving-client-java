// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: tensorflow/core/example/example.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Tensorflow {

  /// <summary>Holder for reflection information generated from tensorflow/core/example/example.proto</summary>
  public static partial class ExampleReflection {

    #region Descriptor
    /// <summary>File descriptor for tensorflow/core/example/example.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ExampleReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CiV0ZW5zb3JmbG93L2NvcmUvZXhhbXBsZS9leGFtcGxlLnByb3RvEgp0ZW5z",
            "b3JmbG93GiV0ZW5zb3JmbG93L2NvcmUvZXhhbXBsZS9mZWF0dXJlLnByb3Rv",
            "IjEKB0V4YW1wbGUSJgoIZmVhdHVyZXMYASABKAsyFC50ZW5zb3JmbG93LkZl",
            "YXR1cmVzImkKD1NlcXVlbmNlRXhhbXBsZRIlCgdjb250ZXh0GAEgASgLMhQu",
            "dGVuc29yZmxvdy5GZWF0dXJlcxIvCg1mZWF0dXJlX2xpc3RzGAIgASgLMhgu",
            "dGVuc29yZmxvdy5GZWF0dXJlTGlzdHNCaQoWb3JnLnRlbnNvcmZsb3cuZXhh",
            "bXBsZUINRXhhbXBsZVByb3Rvc1ABWjtnaXRodWIuY29tL3RlbnNvcmZsb3cv",
            "dGVuc29yZmxvdy90ZW5zb3JmbG93L2dvL2NvcmUvZXhhbXBsZfgBAWIGcHJv",
            "dG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Tensorflow.FeatureReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Tensorflow.Example), global::Tensorflow.Example.Parser, new[]{ "Features" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Tensorflow.SequenceExample), global::Tensorflow.SequenceExample.Parser, new[]{ "Context", "FeatureLists" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class Example : pb::IMessage<Example>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<Example> _parser = new pb::MessageParser<Example>(() => new Example());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<Example> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Tensorflow.ExampleReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Example() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Example(Example other) : this() {
      features_ = other.features_ != null ? other.features_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Example Clone() {
      return new Example(this);
    }

    /// <summary>Field number for the "features" field.</summary>
    public const int FeaturesFieldNumber = 1;
    private global::Tensorflow.Features features_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Tensorflow.Features Features {
      get { return features_; }
      set {
        features_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as Example);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(Example other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Features, other.Features)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (features_ != null) hash ^= Features.GetHashCode();
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
      if (features_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(Features);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (features_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(Features);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (features_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Features);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(Example other) {
      if (other == null) {
        return;
      }
      if (other.features_ != null) {
        if (features_ == null) {
          Features = new global::Tensorflow.Features();
        }
        Features.MergeFrom(other.Features);
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
            if (features_ == null) {
              Features = new global::Tensorflow.Features();
            }
            input.ReadMessage(Features);
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
            if (features_ == null) {
              Features = new global::Tensorflow.Features();
            }
            input.ReadMessage(Features);
            break;
          }
        }
      }
    }
    #endif

  }

  public sealed partial class SequenceExample : pb::IMessage<SequenceExample>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<SequenceExample> _parser = new pb::MessageParser<SequenceExample>(() => new SequenceExample());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<SequenceExample> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Tensorflow.ExampleReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public SequenceExample() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public SequenceExample(SequenceExample other) : this() {
      context_ = other.context_ != null ? other.context_.Clone() : null;
      featureLists_ = other.featureLists_ != null ? other.featureLists_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public SequenceExample Clone() {
      return new SequenceExample(this);
    }

    /// <summary>Field number for the "context" field.</summary>
    public const int ContextFieldNumber = 1;
    private global::Tensorflow.Features context_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Tensorflow.Features Context {
      get { return context_; }
      set {
        context_ = value;
      }
    }

    /// <summary>Field number for the "feature_lists" field.</summary>
    public const int FeatureListsFieldNumber = 2;
    private global::Tensorflow.FeatureLists featureLists_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Tensorflow.FeatureLists FeatureLists {
      get { return featureLists_; }
      set {
        featureLists_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as SequenceExample);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(SequenceExample other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Context, other.Context)) return false;
      if (!object.Equals(FeatureLists, other.FeatureLists)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (context_ != null) hash ^= Context.GetHashCode();
      if (featureLists_ != null) hash ^= FeatureLists.GetHashCode();
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
      if (context_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(Context);
      }
      if (featureLists_ != null) {
        output.WriteRawTag(18);
        output.WriteMessage(FeatureLists);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (context_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(Context);
      }
      if (featureLists_ != null) {
        output.WriteRawTag(18);
        output.WriteMessage(FeatureLists);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (context_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Context);
      }
      if (featureLists_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(FeatureLists);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(SequenceExample other) {
      if (other == null) {
        return;
      }
      if (other.context_ != null) {
        if (context_ == null) {
          Context = new global::Tensorflow.Features();
        }
        Context.MergeFrom(other.Context);
      }
      if (other.featureLists_ != null) {
        if (featureLists_ == null) {
          FeatureLists = new global::Tensorflow.FeatureLists();
        }
        FeatureLists.MergeFrom(other.FeatureLists);
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
            if (context_ == null) {
              Context = new global::Tensorflow.Features();
            }
            input.ReadMessage(Context);
            break;
          }
          case 18: {
            if (featureLists_ == null) {
              FeatureLists = new global::Tensorflow.FeatureLists();
            }
            input.ReadMessage(FeatureLists);
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
            if (context_ == null) {
              Context = new global::Tensorflow.Features();
            }
            input.ReadMessage(Context);
            break;
          }
          case 18: {
            if (featureLists_ == null) {
              FeatureLists = new global::Tensorflow.FeatureLists();
            }
            input.ReadMessage(FeatureLists);
            break;
          }
        }
      }
    }
    #endif

  }

  #endregion

}

#endregion Designer generated code
