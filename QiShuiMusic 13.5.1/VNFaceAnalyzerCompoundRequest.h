@interface VNFaceAnalyzerCompoundRequest : VNHomologousObservationClassCompoundRequest
- (BOOL)internalPerformRevision:inContext:error:;
- (unsigned long long)detectionLevel;
- (long long)dependencyProcessingOrdinality;
- (id)initWithDetectorType:configuration:;
- (void)assignOriginalRequestsResultsFromObservations:obtainedInPerformingContext:;
+ (Class)configurationClass;
+ (id)compoundRequestsForOriginalRequests:withPerformingContext:error:;
+ (id)revisionAvailability;
@end
