@interface VNCompoundRequest : VNRequest
@property (nonatomic) NSArray originalRequests;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} regionOfInterest;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)sequencedRequestPreviousObservationsKey;
- (long long)dependencyProcessingOrdinality;
- (BOOL)usesCPUOnly;
- (void).cxx_destruct;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (id)description;
- (id)originalRequests;
- (id)initWithOriginalRequests:;
- (BOOL)allowsCachingOfResults;
- (unsigned long long)ioSurfaceMemoryPoolId;
- (id)regionOfInterest;
- (id)compoundResults;
- (void)recordWarningsInOriginalRequests;
+ (id)compoundRequestsForOriginalRequests:withPerformingContext:error:;
+ (id)compoundRequestProcessingDeviceFromOriginalRequestsProcessingDevice:;
@end
