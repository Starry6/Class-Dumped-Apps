@interface AWEIMMinorsProtectionManager : NSObject
+ (BOOL)__checkAndShowConfusedElderlyPeopleVCWithConversationID:trackParams:;
+ (id)__getSafetyWarningModelWithType:;
+ (long long)__getafetyWarningFlagWithType:;
+ (BOOL)checkAndShowSafetyWarningVoipWithConversationID:;
+ (BOOL)checkAndShowSafetyWarningWithConversationID:;
+ (BOOL)checkAndShowSafetyWarningWithType:conversationID:trackParams:;
+ (id)getIdentityVerificationContent;
+ (id)safetyWarningtrackParamsWithTypes:conversationID:;
+ (id)topViewController;
@end
