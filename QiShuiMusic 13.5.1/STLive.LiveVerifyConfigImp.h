@interface STLive.LiveVerifyConfigImp : NSObject
- (BOOL)isPhoneBinded;
- (void)needIdentityAuthenticationWithCompleteBlock:;
- (void)needPhoneAuthenticationWithController:;
- (void)openLiveCertWithParams:completion:;
- (id)init;
@end
