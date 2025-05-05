@interface TLContentProtectionStateObserver : NSObject
- (void)_registerFirstUnlockNotifyToken;
- (id)init;
- (void)dealloc;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)_updateUnlockedSinceBootStatus;
- (void)_handleFirstUnlockNotification;
- (void)_loadContentProtectionStatusIfNeeded;
- (id)performBlockAfterProtectedContentUnlocked:;
- (void)_assertNotRunningOnAccessQueue;
- (void)_cancelFirstUnlockNotifyToken;
- (void).cxx_destruct;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:;
- (id)_performBlockAfterProtectedContentUnlocked:;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (void)_assertRunningOnAccessQueue;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:;
+ (id)sharedContentProtectionStateObserver;
@end
