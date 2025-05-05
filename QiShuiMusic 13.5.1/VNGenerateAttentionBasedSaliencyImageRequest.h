@interface VNGenerateAttentionBasedSaliencyImageRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)applicableDetectorTypeForRevision:error:;
- (id)_smartCamCombinedModelImageSaliencyObservationsForRevision:performedInContext:error:;
+ (id)vcp_sceneRequest;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:;
+ (id)supportedPrivateRevisions;
+ (id)revisionAvailability;
@end
