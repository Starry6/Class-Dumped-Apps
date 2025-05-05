@interface SBSLockScreenService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)launchEmergencyDialerWithCompletion:;
- (void)requestPasscodeUnlockUIWithOptions:withCompletion:;
- (void)requestPasscodeCheckUIWithOptions:withCompletion:;
- (id)preventPasscodeLockWithReason:;
- (id)preventSpuriousScreenUndimWithReason:;
@end
