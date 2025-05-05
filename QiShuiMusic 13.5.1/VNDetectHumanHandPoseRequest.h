@interface VNDetectHumanHandPoseRequest : VNImageBasedRequest
@property (nonatomic) Q maximumHandCount;
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (void)setProcessedResults:;
- (unsigned long long)hash;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)applicableDetectorTypeForRevision:error:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)maximumHandCount;
- (void)setMaximumHandCount:;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:;
+ (id)revisionAvailability;
+ (id)supportedJointNamesForRevision:error:;
+ (id)supportedJointsGroupNamesForRevision:error:;
@end
