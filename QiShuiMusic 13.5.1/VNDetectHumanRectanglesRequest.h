@interface VNDetectHumanRectanglesRequest : VNImageBasedRequest
@property (nonatomic) BOOL upperBodyOnly;
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (long long)dependencyProcessingOrdinality;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)description;
- (id)applicableDetectorTypeForRevision:error:;
- (BOOL)upperBodyOnly;
- (void)setUpperBodyOnly:;
+ (BOOL)revisionSupportsFullBodyDetection:;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:;
+ (id)supportedPrivateRevisions;
+ (id)revisionAvailability;
@end
