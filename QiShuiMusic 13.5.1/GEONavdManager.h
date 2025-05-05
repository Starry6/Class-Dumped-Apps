@interface GEONavdManager : NSObject
- (void)openForClient:;
- (id)init;
- (void).cxx_destruct;
- (void)closeForClient:;
- (void)statusWithCallback:;
- (void)shouldPostDarwinNotificationForNextUpdate:;
- (void)startMonitoringDestination:forClient:uuid:handler:;
- (void)requestRefreshForPlannedDestination:client:;
- (void)onlyPerformLocalUpdatesForPlannedDestination:client:;
- (void)stopMonitoringDestination:forClient:uuid:;
- (void)didPostUINotification:forDestination:fromClient:;
- (void)forceCacheRefresh;
+ (void)setProxyClass:;
+ (id)navdManager;
+ (id)navdManagerClientIdentifier:;
@end
