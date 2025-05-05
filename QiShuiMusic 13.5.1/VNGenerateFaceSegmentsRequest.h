@interface VNGenerateFaceSegmentsRequest : VNImageBasedRequest
@property (nonatomic) float faceBoundingBoxExpansionRatio;
@property (nonatomic) NSArray results;
@property (nonatomic) NSArray inputFaceObservations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (long long)dependencyProcessingOrdinality;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (id)applicableDetectorTypeForRevision:error:;
- (void)setFaceBoundingBoxExpansionRatio:;
- (float)faceBoundingBoxExpansionRatio;
+ (Class)configurationClass;
@end
