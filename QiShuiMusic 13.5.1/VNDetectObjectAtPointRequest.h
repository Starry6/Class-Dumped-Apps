@interface VNDetectObjectAtPointRequest : VNImageBasedRequest
@property (nonatomic) {CGPoint=dd} inputPoint;
@property (nonatomic) NSArray results;
- (void)setInputPoint:;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (long long)dependencyProcessingOrdinality;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)applicableDetectorTypeForRevision:error:;
- (id)inputPoint;
- (id)initWithPoint:;
- (id)initWithPoint:completionHandler:;
+ (Class)configurationClass;
+ (id)revisionAvailability;
@end
