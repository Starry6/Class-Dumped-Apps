@interface GEONavdServerProxy : NSObject
- (id)init;
- (void)open;
- (void)close;
- (void)statusWithCallback:;
- (void)getDirectionsForClient:withRouteHypothesisRequest:andCallback:;
- (void)shouldPostDarwinNotificationForNextUpdate:;
- (void)startMonitoringDestination:forClient:uuid:handler:;
- (void)requestRefreshForPlannedDestination:client:;
- (void)onlyPerformLocalUpdatesForPlannedDestination:client:;
- (void)stopMonitoringDestination:forClient:uuid:;
- (void)didPostUINotification:forDestination:fromClient:;
- (void)forceCacheRefresh;
@end
