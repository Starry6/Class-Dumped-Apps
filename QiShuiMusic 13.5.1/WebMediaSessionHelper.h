@interface WebMediaSessionHelper : NSObject
- (void)applicationWillResignActive:;
- (void)dealloc;
- (void)applicationDidBecomeActive:;
- (void)applicationDidEnterBackground:;
- (void).cxx_destruct;
- (void)carPlayIsConnectedDidChange:;
- (id)initWithCallback:;
- (id).cxx_construct;
- (void)applicationWillEnterForeground:;
- (void)clearCallback;
- (void)activeOutputDeviceDidChange:;
- (void)mediaServerConnectionDied:;
- (BOOL)hasWirelessTargetsAvailable;
- (void)startMonitoringAirPlayRoutes;
- (void)stopMonitoringAirPlayRoutes;
- (void)wirelessRoutesAvailableDidChange:;
@end
