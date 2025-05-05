@interface VNGenerateSkySegmentationRequest : VNImageBasedRequest
@property (nonatomic) q qualityLevel;
@property (nonatomic) I outputPixelFormat;
@property (nonatomic) NSArray results;
- (void)setOutputPixelFormat:;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (long long)dependencyProcessingOrdinality;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (unsigned int)outputPixelFormat;
- (id)applicableDetectorTypeForRevision:error:;
- (long long)qualityLevel;
- (void)setQualityLevel:;
+ (Class)configurationClass;
+ (id)revisionAvailability;
@end
