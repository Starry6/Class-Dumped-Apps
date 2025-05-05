@interface VN6Ac6Cyl5O5oK19HboyMBR : VNEspressoModelImageprint
@property (nonatomic) Q imageSignatureprintType;
- (id)initWithState:error:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (unsigned long long)imageSignatureprintType;
- (id)initWithState:byteOffset:error:;
- (unsigned long long)serializeStateIntoData:startingAtByteOffset:error:;
- (unsigned long long)serializedLength;
- (id)initWithData:elementCount:elementType:lengthInBytes:imageSignatureprintType:originatingRequestSpecifier:;
- (id)initWithData:elementCount:elementType:lengthInBytes:imageSignatureprintType:requestRevision:;
+ (BOOL)supportsSecureCoding;
+ (id)currentVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:;
+ (unsigned long long)serializationMagicNumber;
+ (BOOL)_signaturePrintTypeSupported:;
@end
