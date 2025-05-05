@interface VNAlignFaceRectangleRequest : VNRequest
@property (nonatomic) NSArray inputFaceObservations;
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (long long)dependencyProcessingOrdinality;
- (void).cxx_destruct;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (id)applicableDetectorTypeForRevision:error:;
- (id)inputFaceObservations;
- (id)newDefaultRequestInstance;
- (id)initWithFaceObservations:;
- (id)initWithFaceObservations:completionHandler:;
+ (Class)configurationClass;
@end
