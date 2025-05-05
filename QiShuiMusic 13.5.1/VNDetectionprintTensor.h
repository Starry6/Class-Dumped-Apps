@interface VNDetectionprintTensor : VNEspressoModelImageprint
+ (id)currentVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:;
+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:;
+ (unsigned long long)serializationMagicNumber;
+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:;
@end
