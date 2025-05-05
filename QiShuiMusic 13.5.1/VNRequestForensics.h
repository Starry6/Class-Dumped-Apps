@interface VNRequestForensics : NSObject
@property (nonatomic) NSArray orderedRequests;
@property (nonatomic) NSArray originalRequests;
@property (nonatomic) NSArray performedRequests;
- (id)orderedRequests;
- (void).cxx_destruct;
- (id)description;
- (void)setOrderedRequests:;
- (id)originalRequests;
- (id)_humanReadableLabelForRequest:;
- (id)initWithOriginalRequests:;
- (void)performingOrderedDependentRequests:onBehalfOfRequest:;
- (void)performingRequest:;
- (void)performedRequest:withError:;
- (void)request:cachedResultsWithObservationsCacheKey:;
- (void)cachedObservationsWithKey:wereCheckedOnBehalfOfRequest:;
- (void)cachedObservationsWithKey:wereLocatedOnBehalfOfRequest:;
- (id)performedRequests;
- (id)keyUsedToCacheResultsOfRequest:;
- (id)requestsThatLookedUpCachedResultsKey:;
- (id)_childRequestsImplicitlyPerformedOnBehalfOfParentRequest:;
- (id)requestsImplicitlyPerformedOnBehalfOfRequest:;
- (id)requestThatProvidedObservationsForRequest:;
- (BOOL)resultsObtainedFromObservationsCacheForRequest:;
@end
