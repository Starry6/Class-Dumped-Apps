@interface AWEUserLoginEmailCodeDataController : AWEUserLoginBaseDataController
- (void)handleLoginError:ticket:;
- (void)handleSendCodeError:model:isResend:email:;
- (void)handleLoginSuccessAccount:isValidateLogin:ticket:;
- (void)requestSendCodeEmail:isResend:completion:;
- (void)requireLoginWithEmail:code:;
@end
