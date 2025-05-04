@interface AWEUserLoginSMSDataController : AWEUserLoginBaseDataController
@property (nonatomic) DYPhoneNumberModel phoneModel;
- (void)handleVerificationCodeLoginMessage:;
- (id)phoneModel;
- (void)setPhoneModel:;
- (void)requestSendCodePhoneModel:isResend:completion:;
- (void)requestSendVoiceCodePhoneModel:completion:;
- (void)requestSMSLoginPhoneModel:verificationCode:completion:;
- (void)handleSendCodeError:model:isResend:phoneModel:;
- (void)handleSendVoiceCodeError:phoneModel:;
- (void)requestSMSLoginPhoneModel:verificationCode:ticketModel:extraDict:completion:;
- (id)smsLoginAdditionalTrackParams:;
- (void)handleSMSLoginError:phoneModel:ticket:;
- (void)handleLoginSuccessAccount:phoneModel:isValidateLogin:ticket:;
- (void)trackMobileVerifyResult:error:;
- (void)requestMobileAuth:phoneModel:completion:;
- (void)handleValidateSMSLoginError:phoneModel:ticket:completion:;
- (void)requestSendCodeParams:phoneModel:isResend:completion:;
- (void)requestSendVoiceCodePhoneModel:ticketModel:extraDict:completion:;
- (void)requestValidateSMSLoginPhoneModel:completion:;
- (void).cxx_destruct;
@end
