@interface FPSupport_PowerStateSingleton : NSObject
- (id)init;
- (void)dealloc;
- (void)_didChangePowerState:;
- (void)postNotification;
+ (id)sharedFPSupportPowerStateSingleton;
@end
