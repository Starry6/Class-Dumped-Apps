@interface AWEIMIdentityVerifyManager : NSObject
@property (nonatomic) BOOL isShowIdentityVerificationAlert;
- (void)showIndentityVerifyAlertType:;
- (void)showIndentityVerifyAlertType:scene:;
- (void)showTwiceIdentifyVerifyWithCheckMsg:completionBlock:;
- (void)showIndentityVerifyAlertType:title:content:scene:ticket:extra:confirmBlock:closeBlock:;
- (void)showIndentityVerifyAlertType:content:scene:ticket:;
- (BOOL)isShowIdentityVerificationAlert;
- (void)setIsShowIdentityVerificationAlert:;
- (id)__alertTitleForType:;
- (id)__alertContentForType:;
- (id)__alertConfirmTitleForType:;
- (void)confirmActionForType:scene:ticket:extra:;
+ (BOOL)shouldShowIndentityVerifyForCheckMessage:;
+ (void)requestVerificationInfoComplete:;
+ (BOOL)__shouldShowForeignNumberIndentityVerifyCode:scene:;
+ (void)__showForeignNumberIdentityVerify;
+ (void)showIndentityVerifyForCode:scene:;
+ (id)sharedManager;
@end
