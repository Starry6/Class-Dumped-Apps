@interface AWEUserLoginEmailDataController : AWEUserLoginBaseDataController
- (id)dictionaryFromJsonString:;
- (void)isSpecialErrorHandled:ticketModel:password:completion:;
- (void)showTooManyTriesAlert:;
- (unsigned long long)errorType:;
- (void)bindSafeMobile:commercialAccountType:password:;
- (id)stringWithError:keyString:;
- (void)verifySafeMobile:phoneNumber:countryCode:password:;
- (void)handleSecondaryVerificationError:completion:;
- (id)stringFromExtraDic:keyString:;
- (void)showForget;
- (void)showErrorDialog:;
- (void)realNameAuthentication:verifyType:completion:;
- (void)requireLoginWithEmail:password:;
@end
