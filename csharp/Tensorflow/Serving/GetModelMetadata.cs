// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: tensorflow_serving/apis/get_model_metadata.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Tensorflow.Serving {

  /// <summary>Holder for reflection information generated from tensorflow_serving/apis/get_model_metadata.proto</summary>
  public static partial class GetModelMetadataReflection {

    #region Descriptor
    /// <summary>File descriptor for tensorflow_serving/apis/get_model_metadata.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static GetModelMetadataReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CjB0ZW5zb3JmbG93X3NlcnZpbmcvYXBpcy9nZXRfbW9kZWxfbWV0YWRhdGEu",
            "cHJvdG8SEnRlbnNvcmZsb3cuc2VydmluZxoZZ29vZ2xlL3Byb3RvYnVmL2Fu",
            "eS5wcm90bxopdGVuc29yZmxvdy9jb3JlL3Byb3RvYnVmL21ldGFfZ3JhcGgu",
            "cHJvdG8aI3RlbnNvcmZsb3dfc2VydmluZy9hcGlzL21vZGVsLnByb3RvIq4B",
            "Cg9TaWduYXR1cmVEZWZNYXASTAoNc2lnbmF0dXJlX2RlZhgBIAMoCzI1LnRl",
            "bnNvcmZsb3cuc2VydmluZy5TaWduYXR1cmVEZWZNYXAuU2lnbmF0dXJlRGVm",
            "RW50cnkaTQoRU2lnbmF0dXJlRGVmRW50cnkSCwoDa2V5GAEgASgJEicKBXZh",
            "bHVlGAIgASgLMhgudGVuc29yZmxvdy5TaWduYXR1cmVEZWY6AjgBImQKF0dl",
            "dE1vZGVsTWV0YWRhdGFSZXF1ZXN0EjEKCm1vZGVsX3NwZWMYASABKAsyHS50",
            "ZW5zb3JmbG93LnNlcnZpbmcuTW9kZWxTcGVjEhYKDm1ldGFkYXRhX2ZpZWxk",
            "GAIgAygJIuIBChhHZXRNb2RlbE1ldGFkYXRhUmVzcG9uc2USMQoKbW9kZWxf",
            "c3BlYxgBIAEoCzIdLnRlbnNvcmZsb3cuc2VydmluZy5Nb2RlbFNwZWMSTAoI",
            "bWV0YWRhdGEYAiADKAsyOi50ZW5zb3JmbG93LnNlcnZpbmcuR2V0TW9kZWxN",
            "ZXRhZGF0YVJlc3BvbnNlLk1ldGFkYXRhRW50cnkaRQoNTWV0YWRhdGFFbnRy",
            "eRILCgNrZXkYASABKAkSIwoFdmFsdWUYAiABKAsyFC5nb29nbGUucHJvdG9i",
            "dWYuQW55OgI4AUID+AEBYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Google.Protobuf.WellKnownTypes.AnyReflection.Descriptor, global::Tensorflow.MetaGraphReflection.Descriptor, global::Tensorflow.Serving.ModelReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Tensorflow.Serving.SignatureDefMap), global::Tensorflow.Serving.SignatureDefMap.Parser, new[]{ "SignatureDef" }, null, null, null, new pbr::GeneratedClrTypeInfo[] { null, }),
            new pbr::GeneratedClrTypeInfo(typeof(global::Tensorflow.Serving.GetModelMetadataRequest), global::Tensorflow.Serving.GetModelMetadataRequest.Parser, new[]{ "ModelSpec", "MetadataField" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Tensorflow.Serving.GetModelMetadataResponse), global::Tensorflow.Serving.GetModelMetadataResponse.Parser, new[]{ "ModelSpec", "Metadata" }, null, null, null, new pbr::GeneratedClrTypeInfo[] { null, })
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  /// Message returned for "signature_def" field.
  /// </summary>
  public sealed partial class SignatureDefMap : pb::IMessage<SignatureDefMap>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<SignatureDefMap> _parser = new pb::MessageParser<SignatureDefMap>(() => new SignatureDefMap());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<SignatureDefMap> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Tensorflow.Serving.GetModelMetadataReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public SignatureDefMap() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public SignatureDefMap(SignatureDefMap other) : this() {
      signatureDef_ = other.signatureDef_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public SignatureDefMap Clone() {
      return new SignatureDefMap(this);
    }

    /// <summary>Field number for the "signature_def" field.</summary>
    public const int SignatureDefFieldNumber = 1;
    private static readonly pbc::MapField<string, global::Tensorflow.SignatureDef>.Codec _map_signatureDef_codec
        = new pbc::MapField<string, global::Tensorflow.SignatureDef>.Codec(pb::FieldCodec.ForString(10, ""), pb::FieldCodec.ForMessage(18, global::Tensorflow.SignatureDef.Parser), 10);
    private readonly pbc::MapField<string, global::Tensorflow.SignatureDef> signatureDef_ = new pbc::MapField<string, global::Tensorflow.SignatureDef>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::MapField<string, global::Tensorflow.SignatureDef> SignatureDef {
      get { return signatureDef_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as SignatureDefMap);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(SignatureDefMap other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!SignatureDef.Equals(other.SignatureDef)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= SignatureDef.GetHashCode();
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
      signatureDef_.WriteTo(output, _map_signatureDef_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      signatureDef_.WriteTo(ref output, _map_signatureDef_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      size += signatureDef_.CalculateSize(_map_signatureDef_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(SignatureDefMap other) {
      if (other == null) {
        return;
      }
      signatureDef_.Add(other.signatureDef_);
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
            signatureDef_.AddEntriesFrom(input, _map_signatureDef_codec);
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
            signatureDef_.AddEntriesFrom(ref input, _map_signatureDef_codec);
            break;
          }
        }
      }
    }
    #endif

  }

  public sealed partial class GetModelMetadataRequest : pb::IMessage<GetModelMetadataRequest>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<GetModelMetadataRequest> _parser = new pb::MessageParser<GetModelMetadataRequest>(() => new GetModelMetadataRequest());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<GetModelMetadataRequest> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Tensorflow.Serving.GetModelMetadataReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public GetModelMetadataRequest() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public GetModelMetadataRequest(GetModelMetadataRequest other) : this() {
      modelSpec_ = other.modelSpec_ != null ? other.modelSpec_.Clone() : null;
      metadataField_ = other.metadataField_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public GetModelMetadataRequest Clone() {
      return new GetModelMetadataRequest(this);
    }

    /// <summary>Field number for the "model_spec" field.</summary>
    public const int ModelSpecFieldNumber = 1;
    private global::Tensorflow.Serving.ModelSpec modelSpec_;
    /// <summary>
    /// Model Specification indicating which model we are querying for metadata.
    /// If version is not specified, will use the latest (numerical) version.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Tensorflow.Serving.ModelSpec ModelSpec {
      get { return modelSpec_; }
      set {
        modelSpec_ = value;
      }
    }

    /// <summary>Field number for the "metadata_field" field.</summary>
    public const int MetadataFieldFieldNumber = 2;
    private static readonly pb::FieldCodec<string> _repeated_metadataField_codec
        = pb::FieldCodec.ForString(18);
    private readonly pbc::RepeatedField<string> metadataField_ = new pbc::RepeatedField<string>();
    /// <summary>
    /// Metadata fields to get. Currently supported: "signature_def".
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<string> MetadataField {
      get { return metadataField_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as GetModelMetadataRequest);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(GetModelMetadataRequest other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(ModelSpec, other.ModelSpec)) return false;
      if(!metadataField_.Equals(other.metadataField_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (modelSpec_ != null) hash ^= ModelSpec.GetHashCode();
      hash ^= metadataField_.GetHashCode();
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
      if (modelSpec_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(ModelSpec);
      }
      metadataField_.WriteTo(output, _repeated_metadataField_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (modelSpec_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(ModelSpec);
      }
      metadataField_.WriteTo(ref output, _repeated_metadataField_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (modelSpec_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(ModelSpec);
      }
      size += metadataField_.CalculateSize(_repeated_metadataField_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(GetModelMetadataRequest other) {
      if (other == null) {
        return;
      }
      if (other.modelSpec_ != null) {
        if (modelSpec_ == null) {
          ModelSpec = new global::Tensorflow.Serving.ModelSpec();
        }
        ModelSpec.MergeFrom(other.ModelSpec);
      }
      metadataField_.Add(other.metadataField_);
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
            if (modelSpec_ == null) {
              ModelSpec = new global::Tensorflow.Serving.ModelSpec();
            }
            input.ReadMessage(ModelSpec);
            break;
          }
          case 18: {
            metadataField_.AddEntriesFrom(input, _repeated_metadataField_codec);
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
            if (modelSpec_ == null) {
              ModelSpec = new global::Tensorflow.Serving.ModelSpec();
            }
            input.ReadMessage(ModelSpec);
            break;
          }
          case 18: {
            metadataField_.AddEntriesFrom(ref input, _repeated_metadataField_codec);
            break;
          }
        }
      }
    }
    #endif

  }

  public sealed partial class GetModelMetadataResponse : pb::IMessage<GetModelMetadataResponse>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<GetModelMetadataResponse> _parser = new pb::MessageParser<GetModelMetadataResponse>(() => new GetModelMetadataResponse());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<GetModelMetadataResponse> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Tensorflow.Serving.GetModelMetadataReflection.Descriptor.MessageTypes[2]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public GetModelMetadataResponse() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public GetModelMetadataResponse(GetModelMetadataResponse other) : this() {
      modelSpec_ = other.modelSpec_ != null ? other.modelSpec_.Clone() : null;
      metadata_ = other.metadata_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public GetModelMetadataResponse Clone() {
      return new GetModelMetadataResponse(this);
    }

    /// <summary>Field number for the "model_spec" field.</summary>
    public const int ModelSpecFieldNumber = 1;
    private global::Tensorflow.Serving.ModelSpec modelSpec_;
    /// <summary>
    /// Model Specification indicating which model this metadata belongs to.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Tensorflow.Serving.ModelSpec ModelSpec {
      get { return modelSpec_; }
      set {
        modelSpec_ = value;
      }
    }

    /// <summary>Field number for the "metadata" field.</summary>
    public const int MetadataFieldNumber = 2;
    private static readonly pbc::MapField<string, global::Google.Protobuf.WellKnownTypes.Any>.Codec _map_metadata_codec
        = new pbc::MapField<string, global::Google.Protobuf.WellKnownTypes.Any>.Codec(pb::FieldCodec.ForString(10, ""), pb::FieldCodec.ForMessage(18, global::Google.Protobuf.WellKnownTypes.Any.Parser), 18);
    private readonly pbc::MapField<string, global::Google.Protobuf.WellKnownTypes.Any> metadata_ = new pbc::MapField<string, global::Google.Protobuf.WellKnownTypes.Any>();
    /// <summary>
    /// Map of metadata field name to metadata field. The options for metadata
    /// field name are listed in GetModelMetadataRequest. Currently supported:
    /// "signature_def".
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::MapField<string, global::Google.Protobuf.WellKnownTypes.Any> Metadata {
      get { return metadata_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as GetModelMetadataResponse);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(GetModelMetadataResponse other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(ModelSpec, other.ModelSpec)) return false;
      if (!Metadata.Equals(other.Metadata)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (modelSpec_ != null) hash ^= ModelSpec.GetHashCode();
      hash ^= Metadata.GetHashCode();
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
      if (modelSpec_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(ModelSpec);
      }
      metadata_.WriteTo(output, _map_metadata_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (modelSpec_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(ModelSpec);
      }
      metadata_.WriteTo(ref output, _map_metadata_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (modelSpec_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(ModelSpec);
      }
      size += metadata_.CalculateSize(_map_metadata_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(GetModelMetadataResponse other) {
      if (other == null) {
        return;
      }
      if (other.modelSpec_ != null) {
        if (modelSpec_ == null) {
          ModelSpec = new global::Tensorflow.Serving.ModelSpec();
        }
        ModelSpec.MergeFrom(other.ModelSpec);
      }
      metadata_.Add(other.metadata_);
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
            if (modelSpec_ == null) {
              ModelSpec = new global::Tensorflow.Serving.ModelSpec();
            }
            input.ReadMessage(ModelSpec);
            break;
          }
          case 18: {
            metadata_.AddEntriesFrom(input, _map_metadata_codec);
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
            if (modelSpec_ == null) {
              ModelSpec = new global::Tensorflow.Serving.ModelSpec();
            }
            input.ReadMessage(ModelSpec);
            break;
          }
          case 18: {
            metadata_.AddEntriesFrom(ref input, _map_metadata_codec);
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
