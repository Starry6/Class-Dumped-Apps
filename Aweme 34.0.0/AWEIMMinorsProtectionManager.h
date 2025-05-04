@interface AWEIMMinorsProtectionManager : AWEIMComponentBase
- (void)componentDidMounted:;
- (void)handleMinorsProtectionPrivateSensitiveNty:;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)checkAndShowSafetyWarningVoipWithConversation:;
+ (BOOL)checkAndShowSafetyWarningWithConversation:;
+ (BOOL)isShowingWarning;
+ (id)securityRemindManager;
+ (BOOL)checkAndShowSafetyWarningWithType:conversation:;
+ (BOOL)shouldShowPopupWithConversation:type:;
+ (id)p_popupDictDataWithType:conversation:;
+ (void)__storeDidShowDateWithType:conversationId:;
+ (BOOL)__shouldShowByFrequencyWithType:;
+ (double)youthProtectionRemiderFrequency;
+ (id)getIdentityVerificationContent;
@end
