@interface TLSilentModeController : NSObject
@property (nonatomic) q silentModeStatus;
- (id)init;
- (void)dealloc;
- (void)_assertNotRunningOnAccessQueue;
- (void).cxx_destruct;
- (void)_performBlockOnAccessQueue:;
- (void)_assertRunningOnAccessQueue;
- (long long)silentModeStatus;
- (void)_setSilentModeStatus:;
- (void)_cancelRingerSwitchChangedNotifyToken;
- (BOOL)_registerRingerSwitchChangedNotifyToken;
- (long long)_silentModeStatusForRingerSwitchChangedNotifyToken:;
- (void)_updateSilentModeStatusUsingRingerSwitchChangedNotifyToken:;
+ (id)sharedSilentModeController;
@end
