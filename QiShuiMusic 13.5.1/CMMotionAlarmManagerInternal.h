@interface CMMotionAlarmManagerInternal : NSObject
- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_startListeners;
- (void)_stopListeners;
- (BOOL)_registerAlarm:error:;
- (BOOL)_unregisterAlarm:error:;
- (BOOL)_acknowledgeAlarm:error:;
- (BOOL)_launchRemoteAppWithError:delegate:;
- (void)_handleAlarmFire:;
+ (id)instance;
@end
