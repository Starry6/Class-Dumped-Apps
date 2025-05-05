@interface VNRequestPerformer : NSObject
- (void)cancelAllRequests;
- (id)init;
- (BOOL)_performRequests:onBehalfOfRequest:inContext:error:;
- (BOOL)performRequests:inContext:error:;
- (void)_groupOrderedRequests:ordinality:ordinalityAndPriorityGroups:;
- (BOOL)_performOrderedRequests:inContext:error:;
- (id)dependencyAnalyzedRequestsForRequests:withPerformingContext:error:;
- (BOOL)performDependentRequests:onBehalfOfRequest:inContext:error:;
- (void).cxx_destruct;
- (void)recordSequencedObservationsForRequest:;
- (id)orderedRequestsForRequests:;
- (BOOL)_validateAndPrepareRequests:error:;
- (id)previousSequencedObservationsForRequest:;
- (void)_groupsRequestsWithTheSameOrdinality:priorityGroup1:priorityGroup2:;
+ (id)_requestPerformingQueuePriorityGroup1;
+ (id)_requestPerformingQueuePriorityGroup2;
@end
