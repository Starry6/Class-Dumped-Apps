@interface VNImageBlurScoreRequest : VNImageBasedRequest
@property (nonatomic) Q maximumIntermediateSideLength;
@property (nonatomic) Q blurDeterminationMethod;
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)applicableDetectorTypeForRevision:error:;
- (unsigned long long)maximumIntermediateSideLength;
- (void)setMaximumIntermediateSideLength:;
- (unsigned long long)blurDeterminationMethod;
- (void)setBlurDeterminationMethod:;
+ (Class)configurationClass;
@end
