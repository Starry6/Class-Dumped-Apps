@interface VN6kBnCOr2mZlSV6yV1dLwB : VNImageBasedRequest
@property (nonatomic) VN6Ac6Cyl5O5oK19HboyMBR inputSignatureprint;
@property (nonatomic) Q imageSignatureprintType;
@property (nonatomic) Q imageSignatureHashType;
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (long long)dependencyProcessingOrdinality;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)description;
- (id)applicableDetectorTypeForRevision:error:;
- (unsigned long long)imageSignatureprintType;
- (void)setImageSignatureprintType:;
- (id)inputSignatureprint;
- (void)setInputSignatureprint:;
- (unsigned long long)imageSignatureHashType;
- (void)setImageSignatureHashType:;
- (id)initWithImageSignatureprintType:imageSignatureHashType:;
- (id)initWithImageSignatureprintType:imageSignatureHashType:completionHandler:;
- (id)imageSignaturnprintByRunningNeuralHashprintRequest:error:;
+ (id)dependentRequestCompatibility;
+ (BOOL)warmUpSession:error:;
+ (Class)configurationClass;
+ (id)defaultProcessingDeviceForRevision:;
+ (id)revisionAvailability;
@end
