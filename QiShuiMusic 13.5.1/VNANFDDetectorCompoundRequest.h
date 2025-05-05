@interface VNANFDDetectorCompoundRequest : VNCompoundRequest
- (BOOL)internalPerformRevision:inContext:error:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (BOOL)warmUpSession:error:;
- (long long)dependencyProcessingOrdinality;
- (id)initWithDetectorType:configuration:;
- (void)assignOriginalRequestsResultsFromObservations:obtainedInPerformingContext:;
- (id)applicableDetectorTypeForRevision:error:;
+ (BOOL)warmUpSession:error:;
+ (Class)configurationClass;
+ (id)compoundRequestsForOriginalRequests:withPerformingContext:error:;
+ (long long)compoundRequestRevisionForRequest:;
+ (id)revisionAvailability;
@end
