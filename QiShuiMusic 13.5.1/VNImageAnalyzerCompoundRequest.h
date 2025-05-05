@interface VNImageAnalyzerCompoundRequest : VNCompoundRequest
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (void).cxx_destruct;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)applicableDetectorTypeForRevision:error:;
- (BOOL)allowsCachingOfResults;
- (id)initWithDetectorType:groupingConfiguration:;
+ (Class)configurationClass;
+ (id)compoundRequestsForOriginalRequests:withPerformingContext:error:;
@end
