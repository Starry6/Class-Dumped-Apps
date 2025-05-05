@interface SFUnlockManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)enableUnlockWithDevice:fromKey:withPasscode:completionHandler:;
- (void)disableUnlockWithDevice:;
- (void)unlockEnabledWithDevice:completionHandler:;
- (void)establishStashBagWithCompletionHandler:;
- (void)establishStashBagWithManifest:completionHandler:;
- (void)unlockStateForDevice:completionHandler:;
- (id)timerWithBlock:;
- (void)cancelStateRequestTimer;
+ (id)sharedUnlockManager;
@end
