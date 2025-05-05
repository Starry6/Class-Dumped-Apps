@interface VCBTNotificationMonitor : NSObject
- (id)init;
- (void)dealloc;
- (int)registerBTNotificationHandler:;
- (void)unregisterBTNotificationHandler:;
- (void)unregisterAllBTNotificationHandlers;
- (void)setupBTEventHandler;
- (void)processBTNotification:;
- (void)registerDarwinNotification:;
- (void)unregisterDarwinNotification:;
- (void)registerForBluetoothImmediateNotifications;
- (void)unregisterBluetoothImmediateNotifications;
+ (id)sharedInstance;
@end
