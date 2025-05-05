@interface VNGeneratePersonSegmentationRequest : VNStatefulRequest
@property (nonatomic) BOOL useTiling;
@property (nonatomic) Q qualityLevel;
@property (nonatomic) I outputPixelFormat;
@property (nonatomic) NSArray results;
- (id)init;
- (void)setOutputPixelFormat:;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (long long)dependencyProcessingOrdinality;
- (void).cxx_destruct;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (unsigned int)outputPixelFormat;
- (id)applicableDetectorTypeForRevision:error:;
- (id)initWithCompletionHandler:;
- (unsigned long long)qualityLevel;
- (void)setQualityLevel:;
- (BOOL)useTiling;
- (void)setUseTiling:;
+ (id)new;
+ (Class)configurationClass;
+ (id)revisionAvailability;
@end
