@interface VNGenerateImageSaliencyRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)applicableDetectorTypeForRevision:error:;
- (id)_smartCamCombinedModelImageSaliencyObservationsForRevision:performedInContext:error:;
+ (Class)configurationClass;
+ (id)revisionAvailability;
@end
