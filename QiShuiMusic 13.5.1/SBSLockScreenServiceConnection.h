@interface SBSLockScreenServiceConnection : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)launchEmergencyDialerWithCompletion:;
- (void)requestPasscodeUnlockUIWithOptions:withCompletion:;
- (void)requestPasscodeCheckUIWithOptions:withCompletion:;
- (id)preventPasscodeLockWithReason:;
- (id)preventSpuriousScreenUndimWithReason:;
@end
