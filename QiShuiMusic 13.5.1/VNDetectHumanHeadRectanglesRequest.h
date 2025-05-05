@interface VNDetectHumanHeadRectanglesRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (long long)dependencyProcessingOrdinality;
- (id)applicableDetectorTypeForRevision:error:;
+ (id)descriptionForPrivateRevision:;
+ (id)supportedPrivateRevisions;
+ (id)revisionAvailability;
@end
