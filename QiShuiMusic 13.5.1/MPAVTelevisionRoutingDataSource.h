@interface MPAVTelevisionRoutingDataSource : MPAVRoutingDataSource
- (void)setDiscoveryMode:;
- (id)getRoutesForCategory:;
- (id)init;
- (void)dealloc;
- (void)getPickedRouteHasVolumeControlWithCompletion:;
- (BOOL)devicePresenceDetected;
- (void)_onQueue_controllerDidRemoveTelevision:;
- (id)_discoveredTelevisions;
- (void).cxx_destruct;
- (void)_onQueue_controllerDidDiscoverTelevision:;
@end
