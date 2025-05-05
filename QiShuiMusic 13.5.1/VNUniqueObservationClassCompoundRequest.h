@interface VNUniqueObservationClassCompoundRequest : VNCompoundRequest
- (void).cxx_destruct;
- (void)assignOriginalRequestsResultsFromObservations:obtainedInPerformingContext:;
- (id)initWithSubrequests:uniqueObservationClasses:;
- (id)initWithOriginalRequests:requestToObservationClassMap:;
@end
