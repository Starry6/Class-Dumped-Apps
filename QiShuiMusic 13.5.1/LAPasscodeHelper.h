@interface LAPasscodeHelper : NSObject
- (id)init;
- (unsigned int)_keybagHandleForUserId:;
- (long long)verifyPasswordUsingAKS:acmContext:userId:policy:options:;
- (long long)maxUnlockAttemptsForUserID:;
- (long long)failedAttemptsForUserID:;
- (id)_passwordPolicyStatusForUserID:;
- (void)_resetFailedAttemptCountForUserID:;
- (void).cxx_destruct;
- (long long)createStash:mode:manifest:;
- (double)backoffTimeIntervalForUserID:;
- (BOOL)isPasscodeSetForUser:error:;
- (long long)passcodeScreenStyleWithPolicy:options:darkInterface:;
- (BOOL)accountBlockedForUserID:;
- (BOOL)isPasscodeSetWithError:;
- (long long)verifyPasswordUsingPAM:userID:pamService:pamUser:pamToken:;
- (id)_currentUserID;
- (void)_increaseFailedAttemptCountForUserID:;
+ (id)sharedInstance;
@end
