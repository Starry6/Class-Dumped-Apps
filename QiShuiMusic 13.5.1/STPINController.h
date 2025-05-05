@interface STPINController : NSObject
@property (nonatomic) STCoreUser user;
@property (nonatomic) NSObject<OS_dispatch_source> backoffTimer;
@property (nonatomic) NSDate timeoutEndDate;
@property (nonatomic) BOOL canRecoveryAuthenticate;
- (id)user;
- (void).cxx_destruct;
- (id)backoffTimer;
- (id)initWithUser:;
- (void)setBackoffTimer:;
- (BOOL)canRecoveryAuthenticate;
- (void)setPIN:withRecoveryAppleIDPrompt:completionHandler:;
- (void)updatePIN:toPIN:withRecoveryAppleIDPrompt:completionHandler:;
- (void)removePIN:completionHandler:;
- (BOOL)_isPINValid:;
- (void)_setNewPIN:currentPIN:recoveryAppleIDPrompt:completionHandler:;
- (BOOL)_setPasscode:recoveryAppleID:forUser:error:;
- (BOOL)_saveChangesForUser:error:;
- (BOOL)authenticateWithPIN:error:;
- (void)authenticateWithPIN:allowPasscodeRecovery:completionHandler:;
- (void)authenticateWithPIN:completionHandler:;
- (BOOL)_authenticateWithPIN:forUser:allowPasscodeRecovery:error:;
- (id)_timeoutEndDateForAttemptNumber:;
- (void)_beginTimeoutUntilDate:;
- (id)timeoutEndDate;
- (void)setTimeoutEndDate:;
+ (unsigned long long)pinLength;
@end
