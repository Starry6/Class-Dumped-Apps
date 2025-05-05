@interface IESECKeyLockManager : NSObject
+ (void)autoUnlockWithTimer:;
+ (BOOL)hasLock:;
+ (void)lock:withAutoUnlock:afterSeconds:;
+ (void)unlockWithKey:;
+ (double)timeSetting;
+ (void)unlock:;
@end
