@interface CNUIIDSRequest : NSObject
+ (BOOL)isStatusOfAnyDestinationUnknown:;
+ (id)resultsForIDSControllerResult:handlesByDestination:;
+ (BOOL)isDestinationAvailable:givenStatusesByDestination:;
+ (id)IDSServiceForService:;
+ (id)IDSResponseQueue;
+ (id)validateHandles:forService:scheduler:queryControllerWrapper:;
+ (BOOL)shouldRetryRefreshingIDSStatusOfDesinationsGivenResult:;
+ (id)afterDelayRetryRefreshingStatusOfDestinations:forService:queryControllerWrapper:scheduler:;
+ (id)refreshStatusOfDestinations:forService:queryControllerWrapper:;
+ (id)refreshStatusOfDestinations:forService:queryControllerWrapper:delay:scheduler:;
+ (id)errorRefreshingHandles:forService:;
+ (id)validHandlesFromHandles:;
@end
