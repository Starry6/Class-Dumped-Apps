@interface GEONavdRemoteProxy : GEONavdServerProxy
@property (nonatomic) <GEONavdXPCInterface> remoteObjectProxyThreadUnsafe;
- (id)init;
- (void)dealloc;
- (void)open;
- (void)close;
- (void).cxx_destruct;
- (void)unregisterObserver:;
- (void)registerObserver:;
- (void)statusWithCallback:;
- (void)shouldPostDarwinNotificationForNextUpdate:;
- (void)startMonitoringDestination:forClient:uuid:handler:;
- (void)requestRefreshForPlannedDestination:client:;
- (void)onlyPerformLocalUpdatesForPlannedDestination:client:;
- (void)stopMonitoringDestination:forClient:uuid:;
- (void)didPostUINotification:forDestination:fromClient:;
- (void)forceCacheRefresh;
- (void)navdProxyReceivedData:ofType:;
- (void)navdProxyReceivedHypothesis:forClient:;
- (void)_connectToDaemonIfNeededThreadUnsafe;
- (id)remoteObjectProxyThreadUnsafe;
@end
