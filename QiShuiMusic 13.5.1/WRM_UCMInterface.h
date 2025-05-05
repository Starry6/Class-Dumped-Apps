@interface WRM_UCMInterface : NSObject
- (void)registerClient:queue:;
- (id)init;
- (void)dealloc;
- (void)reConnect;
- (void)unregisterClient;
- (void)handleNotification::;
- (void)subscribeBtConnectedLinksNotification:;
- (void)setCriticalAirPlayEnabled:estimatedDuration:criticalityPercentage:;
- (void)processBTConnectedLinksNotification:;
@end
