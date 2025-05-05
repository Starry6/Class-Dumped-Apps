@interface VNSceneprint : VNEspressoModelImageprint
@property (nonatomic) NSDictionary labelsAndConfidence;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithState:byteOffset:error:;
- (unsigned long long)serializeStateIntoData:startingAtByteOffset:error:;
- (unsigned long long)serializedLength;
- (id)initWithData:elementCount:elementType:lengthInBytes:labelsAndConfidence:requestRevision:;
- (id)labelsAndConfidence;
+ (BOOL)supportsSecureCoding;
+ (id)currentVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
+ (unsigned int)currentCodingVersion;
+ (id)codingTypesToCodingKeys;
+ (unsigned long long)currentSerializationVersion;
+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:;
+ (unsigned long long)serializationMagicNumber;
+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:;
@end
