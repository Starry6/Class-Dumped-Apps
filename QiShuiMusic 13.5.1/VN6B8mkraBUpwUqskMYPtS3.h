@interface VN6B8mkraBUpwUqskMYPtS3 : VNEspressoModelImageprint
@property (nonatomic) Q imageSignatureHashType;
- (id)initWithState:error:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (unsigned long long)imageSignatureHashType;
- (id)initWithState:byteOffset:error:;
- (unsigned long long)serializeStateIntoData:startingAtByteOffset:error:;
- (unsigned long long)serializedLength;
- (id)initWithData:elementCount:elementType:lengthInBytes:imageSignatureHashType:requestRevision:;
- (id)encodeHashDescriptorWithBase64EncodingAndReturnError:;
+ (BOOL)supportsSecureCoding;
+ (id)currentVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:;
+ (unsigned long long)serializationMagicNumber;
@end
