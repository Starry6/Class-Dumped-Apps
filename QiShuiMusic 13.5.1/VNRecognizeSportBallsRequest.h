@interface VNRecognizeSportBallsRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (long long)dependencyProcessingOrdinality;
- (id)applicableDetectorTypeForRevision:error:;
- (id)supportedIdentifiersAndReturnError:;
+ (id)descriptionForPrivateRevision:;
+ (id)supportedPrivateRevisions;
+ (id)revisionAvailability;
@end
