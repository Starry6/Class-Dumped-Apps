@interface TTAccountEmailRegistration : NSObject
+ (id)changePasswordByEmailWithNewPassword:ticket:completion:;
+ (id)checkEmailRegistedWithEmail:captcha:completion:;
+ (id)resetPasswordWithEmail:password:code:extraParams:completion:;
+ (id)resetPasswordWithEmailAndLogin:password:code:ticket:extraParams:completion:;
+ (id)startBindWithEmail:emailCode:emailCodeType:captchaString:completion:;
+ (id)startBindWithEmail:password:completion:;
+ (id)startChangeEmailWithNewEmail:verifyCode:ticket:completion:;
+ (id)startGetEmailCodeWithEmail:emailCodeType:emailLogicType:password:jumpUrl:captcha:extraParams:completion:;
+ (id)startRegisterV2WithEmail:emailCode:password:captcha:recaptchaToken:extra:completion:;
+ (id)startRegisterWithEmail:emailCode:emailCodeType:captchaString:completion:;
+ (id)startRegisterWithEmail:emailCode:password:captcha:completion:;
+ (id)startRegisterWithEmail:emailCode:password:emailCodeType:captchaString:extraParams:completion:;
+ (id)startTicketrRegisterWithEmail:ticket:password:emailCodeType:emailLogicType:completion:;
+ (id)startValidateEmailRegister:emailCode:emailCodeType:captchaString:completion:;
+ (id)startValidateEmailRegister:emailCode:emailCodeType:captchaString:extraParams:completion:;
+ (id)startVerifyEmailWithCode:emailCodeType:completion:;
+ (id)validateRegisterWithEmail:emailCode:emailCodeType:password:emailLogicType:extraParams:completion:;
@end
