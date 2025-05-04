@interface AWETeenCheckOutManager : NSObject
+ (void)requestParentPhoneNumberCompletion:;
+ (void)beginVerifyCodeWithCompletion:;
+ (void)requestVerifyCodeWithType:completion:;
+ (void)checkVerifyCode:completion:;
+ (long long)smsCountdown;
@end
