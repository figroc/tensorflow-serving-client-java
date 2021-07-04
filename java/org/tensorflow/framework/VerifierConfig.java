// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/verifier_config.proto

package org.tensorflow.framework;

/**
 * <pre>
 * The config for graph verifiers.
 * </pre>
 *
 * Protobuf type {@code tensorflow.VerifierConfig}
 */
public final class VerifierConfig extends
    com.google.protobuf.GeneratedMessageV3 implements
    // @@protoc_insertion_point(message_implements:tensorflow.VerifierConfig)
    VerifierConfigOrBuilder {
private static final long serialVersionUID = 0L;
  // Use VerifierConfig.newBuilder() to construct.
  private VerifierConfig(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
    super(builder);
  }
  private VerifierConfig() {
    structureVerifier_ = 0;
  }

  @java.lang.Override
  @SuppressWarnings({"unused"})
  protected java.lang.Object newInstance(
      UnusedPrivateParameter unused) {
    return new VerifierConfig();
  }

  @java.lang.Override
  public final com.google.protobuf.UnknownFieldSet
  getUnknownFields() {
    return this.unknownFields;
  }
  private VerifierConfig(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    this();
    if (extensionRegistry == null) {
      throw new java.lang.NullPointerException();
    }
    com.google.protobuf.UnknownFieldSet.Builder unknownFields =
        com.google.protobuf.UnknownFieldSet.newBuilder();
    try {
      boolean done = false;
      while (!done) {
        int tag = input.readTag();
        switch (tag) {
          case 0:
            done = true;
            break;
          case 8: {

            verificationTimeoutInMs_ = input.readInt64();
            break;
          }
          case 16: {
            int rawValue = input.readEnum();

            structureVerifier_ = rawValue;
            break;
          }
          default: {
            if (!parseUnknownField(
                input, unknownFields, extensionRegistry, tag)) {
              done = true;
            }
            break;
          }
        }
      }
    } catch (com.google.protobuf.InvalidProtocolBufferException e) {
      throw e.setUnfinishedMessage(this);
    } catch (java.io.IOException e) {
      throw new com.google.protobuf.InvalidProtocolBufferException(
          e).setUnfinishedMessage(this);
    } finally {
      this.unknownFields = unknownFields.build();
      makeExtensionsImmutable();
    }
  }
  public static final com.google.protobuf.Descriptors.Descriptor
      getDescriptor() {
    return org.tensorflow.framework.VerifierConfigProtos.internal_static_tensorflow_VerifierConfig_descriptor;
  }

  @java.lang.Override
  protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internalGetFieldAccessorTable() {
    return org.tensorflow.framework.VerifierConfigProtos.internal_static_tensorflow_VerifierConfig_fieldAccessorTable
        .ensureFieldAccessorsInitialized(
            org.tensorflow.framework.VerifierConfig.class, org.tensorflow.framework.VerifierConfig.Builder.class);
  }

  /**
   * Protobuf enum {@code tensorflow.VerifierConfig.Toggle}
   */
  public enum Toggle
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>DEFAULT = 0;</code>
     */
    DEFAULT(0),
    /**
     * <code>ON = 1;</code>
     */
    ON(1),
    /**
     * <code>OFF = 2;</code>
     */
    OFF(2),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>DEFAULT = 0;</code>
     */
    public static final int DEFAULT_VALUE = 0;
    /**
     * <code>ON = 1;</code>
     */
    public static final int ON_VALUE = 1;
    /**
     * <code>OFF = 2;</code>
     */
    public static final int OFF_VALUE = 2;


    public final int getNumber() {
      if (this == UNRECOGNIZED) {
        throw new java.lang.IllegalArgumentException(
            "Can't get the number of an unknown enum value.");
      }
      return value;
    }

    /**
     * @param value The numeric wire value of the corresponding enum entry.
     * @return The enum associated with the given numeric wire value.
     * @deprecated Use {@link #forNumber(int)} instead.
     */
    @java.lang.Deprecated
    public static Toggle valueOf(int value) {
      return forNumber(value);
    }

    /**
     * @param value The numeric wire value of the corresponding enum entry.
     * @return The enum associated with the given numeric wire value.
     */
    public static Toggle forNumber(int value) {
      switch (value) {
        case 0: return DEFAULT;
        case 1: return ON;
        case 2: return OFF;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<Toggle>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        Toggle> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<Toggle>() {
            public Toggle findValueByNumber(int number) {
              return Toggle.forNumber(number);
            }
          };

    public final com.google.protobuf.Descriptors.EnumValueDescriptor
        getValueDescriptor() {
      if (this == UNRECOGNIZED) {
        throw new java.lang.IllegalStateException(
            "Can't get the descriptor of an unrecognized enum value.");
      }
      return getDescriptor().getValues().get(ordinal());
    }
    public final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptorForType() {
      return getDescriptor();
    }
    public static final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptor() {
      return org.tensorflow.framework.VerifierConfig.getDescriptor().getEnumTypes().get(0);
    }

    private static final Toggle[] VALUES = values();

    public static Toggle valueOf(
        com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
      if (desc.getType() != getDescriptor()) {
        throw new java.lang.IllegalArgumentException(
          "EnumValueDescriptor is not for this type.");
      }
      if (desc.getIndex() == -1) {
        return UNRECOGNIZED;
      }
      return VALUES[desc.getIndex()];
    }

    private final int value;

    private Toggle(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:tensorflow.VerifierConfig.Toggle)
  }

  public static final int VERIFICATION_TIMEOUT_IN_MS_FIELD_NUMBER = 1;
  private long verificationTimeoutInMs_;
  /**
   * <pre>
   * Deadline for completion of all verification i.e. all the Toggle ON
   * verifiers must complete execution within this time.
   * </pre>
   *
   * <code>int64 verification_timeout_in_ms = 1;</code>
   * @return The verificationTimeoutInMs.
   */
  @java.lang.Override
  public long getVerificationTimeoutInMs() {
    return verificationTimeoutInMs_;
  }

  public static final int STRUCTURE_VERIFIER_FIELD_NUMBER = 2;
  private int structureVerifier_;
  /**
   * <pre>
   * Perform structural validation on a tensorflow graph. Default is OFF.
   * </pre>
   *
   * <code>.tensorflow.VerifierConfig.Toggle structure_verifier = 2;</code>
   * @return The enum numeric value on the wire for structureVerifier.
   */
  @java.lang.Override public int getStructureVerifierValue() {
    return structureVerifier_;
  }
  /**
   * <pre>
   * Perform structural validation on a tensorflow graph. Default is OFF.
   * </pre>
   *
   * <code>.tensorflow.VerifierConfig.Toggle structure_verifier = 2;</code>
   * @return The structureVerifier.
   */
  @java.lang.Override public org.tensorflow.framework.VerifierConfig.Toggle getStructureVerifier() {
    @SuppressWarnings("deprecation")
    org.tensorflow.framework.VerifierConfig.Toggle result = org.tensorflow.framework.VerifierConfig.Toggle.valueOf(structureVerifier_);
    return result == null ? org.tensorflow.framework.VerifierConfig.Toggle.UNRECOGNIZED : result;
  }

  private byte memoizedIsInitialized = -1;
  @java.lang.Override
  public final boolean isInitialized() {
    byte isInitialized = memoizedIsInitialized;
    if (isInitialized == 1) return true;
    if (isInitialized == 0) return false;

    memoizedIsInitialized = 1;
    return true;
  }

  @java.lang.Override
  public void writeTo(com.google.protobuf.CodedOutputStream output)
                      throws java.io.IOException {
    if (verificationTimeoutInMs_ != 0L) {
      output.writeInt64(1, verificationTimeoutInMs_);
    }
    if (structureVerifier_ != org.tensorflow.framework.VerifierConfig.Toggle.DEFAULT.getNumber()) {
      output.writeEnum(2, structureVerifier_);
    }
    unknownFields.writeTo(output);
  }

  @java.lang.Override
  public int getSerializedSize() {
    int size = memoizedSize;
    if (size != -1) return size;

    size = 0;
    if (verificationTimeoutInMs_ != 0L) {
      size += com.google.protobuf.CodedOutputStream
        .computeInt64Size(1, verificationTimeoutInMs_);
    }
    if (structureVerifier_ != org.tensorflow.framework.VerifierConfig.Toggle.DEFAULT.getNumber()) {
      size += com.google.protobuf.CodedOutputStream
        .computeEnumSize(2, structureVerifier_);
    }
    size += unknownFields.getSerializedSize();
    memoizedSize = size;
    return size;
  }

  @java.lang.Override
  public boolean equals(final java.lang.Object obj) {
    if (obj == this) {
     return true;
    }
    if (!(obj instanceof org.tensorflow.framework.VerifierConfig)) {
      return super.equals(obj);
    }
    org.tensorflow.framework.VerifierConfig other = (org.tensorflow.framework.VerifierConfig) obj;

    if (getVerificationTimeoutInMs()
        != other.getVerificationTimeoutInMs()) return false;
    if (structureVerifier_ != other.structureVerifier_) return false;
    if (!unknownFields.equals(other.unknownFields)) return false;
    return true;
  }

  @java.lang.Override
  public int hashCode() {
    if (memoizedHashCode != 0) {
      return memoizedHashCode;
    }
    int hash = 41;
    hash = (19 * hash) + getDescriptor().hashCode();
    hash = (37 * hash) + VERIFICATION_TIMEOUT_IN_MS_FIELD_NUMBER;
    hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
        getVerificationTimeoutInMs());
    hash = (37 * hash) + STRUCTURE_VERIFIER_FIELD_NUMBER;
    hash = (53 * hash) + structureVerifier_;
    hash = (29 * hash) + unknownFields.hashCode();
    memoizedHashCode = hash;
    return hash;
  }

  public static org.tensorflow.framework.VerifierConfig parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static org.tensorflow.framework.VerifierConfig parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static org.tensorflow.framework.VerifierConfig parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static org.tensorflow.framework.VerifierConfig parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static org.tensorflow.framework.VerifierConfig parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static org.tensorflow.framework.VerifierConfig parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static org.tensorflow.framework.VerifierConfig parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static org.tensorflow.framework.VerifierConfig parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }
  public static org.tensorflow.framework.VerifierConfig parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input);
  }
  public static org.tensorflow.framework.VerifierConfig parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
  }
  public static org.tensorflow.framework.VerifierConfig parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static org.tensorflow.framework.VerifierConfig parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }

  @java.lang.Override
  public Builder newBuilderForType() { return newBuilder(); }
  public static Builder newBuilder() {
    return DEFAULT_INSTANCE.toBuilder();
  }
  public static Builder newBuilder(org.tensorflow.framework.VerifierConfig prototype) {
    return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
  }
  @java.lang.Override
  public Builder toBuilder() {
    return this == DEFAULT_INSTANCE
        ? new Builder() : new Builder().mergeFrom(this);
  }

  @java.lang.Override
  protected Builder newBuilderForType(
      com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
    Builder builder = new Builder(parent);
    return builder;
  }
  /**
   * <pre>
   * The config for graph verifiers.
   * </pre>
   *
   * Protobuf type {@code tensorflow.VerifierConfig}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
      // @@protoc_insertion_point(builder_implements:tensorflow.VerifierConfig)
      org.tensorflow.framework.VerifierConfigOrBuilder {
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return org.tensorflow.framework.VerifierConfigProtos.internal_static_tensorflow_VerifierConfig_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return org.tensorflow.framework.VerifierConfigProtos.internal_static_tensorflow_VerifierConfig_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              org.tensorflow.framework.VerifierConfig.class, org.tensorflow.framework.VerifierConfig.Builder.class);
    }

    // Construct using org.tensorflow.framework.VerifierConfig.newBuilder()
    private Builder() {
      maybeForceBuilderInitialization();
    }

    private Builder(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      super(parent);
      maybeForceBuilderInitialization();
    }
    private void maybeForceBuilderInitialization() {
      if (com.google.protobuf.GeneratedMessageV3
              .alwaysUseFieldBuilders) {
      }
    }
    @java.lang.Override
    public Builder clear() {
      super.clear();
      verificationTimeoutInMs_ = 0L;

      structureVerifier_ = 0;

      return this;
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.Descriptor
        getDescriptorForType() {
      return org.tensorflow.framework.VerifierConfigProtos.internal_static_tensorflow_VerifierConfig_descriptor;
    }

    @java.lang.Override
    public org.tensorflow.framework.VerifierConfig getDefaultInstanceForType() {
      return org.tensorflow.framework.VerifierConfig.getDefaultInstance();
    }

    @java.lang.Override
    public org.tensorflow.framework.VerifierConfig build() {
      org.tensorflow.framework.VerifierConfig result = buildPartial();
      if (!result.isInitialized()) {
        throw newUninitializedMessageException(result);
      }
      return result;
    }

    @java.lang.Override
    public org.tensorflow.framework.VerifierConfig buildPartial() {
      org.tensorflow.framework.VerifierConfig result = new org.tensorflow.framework.VerifierConfig(this);
      result.verificationTimeoutInMs_ = verificationTimeoutInMs_;
      result.structureVerifier_ = structureVerifier_;
      onBuilt();
      return result;
    }

    @java.lang.Override
    public Builder clone() {
      return super.clone();
    }
    @java.lang.Override
    public Builder setField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return super.setField(field, value);
    }
    @java.lang.Override
    public Builder clearField(
        com.google.protobuf.Descriptors.FieldDescriptor field) {
      return super.clearField(field);
    }
    @java.lang.Override
    public Builder clearOneof(
        com.google.protobuf.Descriptors.OneofDescriptor oneof) {
      return super.clearOneof(oneof);
    }
    @java.lang.Override
    public Builder setRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        int index, java.lang.Object value) {
      return super.setRepeatedField(field, index, value);
    }
    @java.lang.Override
    public Builder addRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return super.addRepeatedField(field, value);
    }
    @java.lang.Override
    public Builder mergeFrom(com.google.protobuf.Message other) {
      if (other instanceof org.tensorflow.framework.VerifierConfig) {
        return mergeFrom((org.tensorflow.framework.VerifierConfig)other);
      } else {
        super.mergeFrom(other);
        return this;
      }
    }

    public Builder mergeFrom(org.tensorflow.framework.VerifierConfig other) {
      if (other == org.tensorflow.framework.VerifierConfig.getDefaultInstance()) return this;
      if (other.getVerificationTimeoutInMs() != 0L) {
        setVerificationTimeoutInMs(other.getVerificationTimeoutInMs());
      }
      if (other.structureVerifier_ != 0) {
        setStructureVerifierValue(other.getStructureVerifierValue());
      }
      this.mergeUnknownFields(other.unknownFields);
      onChanged();
      return this;
    }

    @java.lang.Override
    public final boolean isInitialized() {
      return true;
    }

    @java.lang.Override
    public Builder mergeFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      org.tensorflow.framework.VerifierConfig parsedMessage = null;
      try {
        parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        parsedMessage = (org.tensorflow.framework.VerifierConfig) e.getUnfinishedMessage();
        throw e.unwrapIOException();
      } finally {
        if (parsedMessage != null) {
          mergeFrom(parsedMessage);
        }
      }
      return this;
    }

    private long verificationTimeoutInMs_ ;
    /**
     * <pre>
     * Deadline for completion of all verification i.e. all the Toggle ON
     * verifiers must complete execution within this time.
     * </pre>
     *
     * <code>int64 verification_timeout_in_ms = 1;</code>
     * @return The verificationTimeoutInMs.
     */
    @java.lang.Override
    public long getVerificationTimeoutInMs() {
      return verificationTimeoutInMs_;
    }
    /**
     * <pre>
     * Deadline for completion of all verification i.e. all the Toggle ON
     * verifiers must complete execution within this time.
     * </pre>
     *
     * <code>int64 verification_timeout_in_ms = 1;</code>
     * @param value The verificationTimeoutInMs to set.
     * @return This builder for chaining.
     */
    public Builder setVerificationTimeoutInMs(long value) {
      
      verificationTimeoutInMs_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     * Deadline for completion of all verification i.e. all the Toggle ON
     * verifiers must complete execution within this time.
     * </pre>
     *
     * <code>int64 verification_timeout_in_ms = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearVerificationTimeoutInMs() {
      
      verificationTimeoutInMs_ = 0L;
      onChanged();
      return this;
    }

    private int structureVerifier_ = 0;
    /**
     * <pre>
     * Perform structural validation on a tensorflow graph. Default is OFF.
     * </pre>
     *
     * <code>.tensorflow.VerifierConfig.Toggle structure_verifier = 2;</code>
     * @return The enum numeric value on the wire for structureVerifier.
     */
    @java.lang.Override public int getStructureVerifierValue() {
      return structureVerifier_;
    }
    /**
     * <pre>
     * Perform structural validation on a tensorflow graph. Default is OFF.
     * </pre>
     *
     * <code>.tensorflow.VerifierConfig.Toggle structure_verifier = 2;</code>
     * @param value The enum numeric value on the wire for structureVerifier to set.
     * @return This builder for chaining.
     */
    public Builder setStructureVerifierValue(int value) {
      
      structureVerifier_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     * Perform structural validation on a tensorflow graph. Default is OFF.
     * </pre>
     *
     * <code>.tensorflow.VerifierConfig.Toggle structure_verifier = 2;</code>
     * @return The structureVerifier.
     */
    @java.lang.Override
    public org.tensorflow.framework.VerifierConfig.Toggle getStructureVerifier() {
      @SuppressWarnings("deprecation")
      org.tensorflow.framework.VerifierConfig.Toggle result = org.tensorflow.framework.VerifierConfig.Toggle.valueOf(structureVerifier_);
      return result == null ? org.tensorflow.framework.VerifierConfig.Toggle.UNRECOGNIZED : result;
    }
    /**
     * <pre>
     * Perform structural validation on a tensorflow graph. Default is OFF.
     * </pre>
     *
     * <code>.tensorflow.VerifierConfig.Toggle structure_verifier = 2;</code>
     * @param value The structureVerifier to set.
     * @return This builder for chaining.
     */
    public Builder setStructureVerifier(org.tensorflow.framework.VerifierConfig.Toggle value) {
      if (value == null) {
        throw new NullPointerException();
      }
      
      structureVerifier_ = value.getNumber();
      onChanged();
      return this;
    }
    /**
     * <pre>
     * Perform structural validation on a tensorflow graph. Default is OFF.
     * </pre>
     *
     * <code>.tensorflow.VerifierConfig.Toggle structure_verifier = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearStructureVerifier() {
      
      structureVerifier_ = 0;
      onChanged();
      return this;
    }
    @java.lang.Override
    public final Builder setUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.setUnknownFields(unknownFields);
    }

    @java.lang.Override
    public final Builder mergeUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.mergeUnknownFields(unknownFields);
    }


    // @@protoc_insertion_point(builder_scope:tensorflow.VerifierConfig)
  }

  // @@protoc_insertion_point(class_scope:tensorflow.VerifierConfig)
  private static final org.tensorflow.framework.VerifierConfig DEFAULT_INSTANCE;
  static {
    DEFAULT_INSTANCE = new org.tensorflow.framework.VerifierConfig();
  }

  public static org.tensorflow.framework.VerifierConfig getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static final com.google.protobuf.Parser<VerifierConfig>
      PARSER = new com.google.protobuf.AbstractParser<VerifierConfig>() {
    @java.lang.Override
    public VerifierConfig parsePartialFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return new VerifierConfig(input, extensionRegistry);
    }
  };

  public static com.google.protobuf.Parser<VerifierConfig> parser() {
    return PARSER;
  }

  @java.lang.Override
  public com.google.protobuf.Parser<VerifierConfig> getParserForType() {
    return PARSER;
  }

  @java.lang.Override
  public org.tensorflow.framework.VerifierConfig getDefaultInstanceForType() {
    return DEFAULT_INSTANCE;
  }

}

