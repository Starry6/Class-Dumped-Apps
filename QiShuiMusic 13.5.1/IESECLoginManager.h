@interface IESECLoginManager : NSObject
+ (BOOL)enableToLoginLater;
+ (void)requireLogin:;
+ (void)requireLogin:withContext:;
+ (void)requireLoginIfUnableToLoginLater:;
+ (void)requireLoginIfUnableToLoginLater:withContext:;
+ (BOOL)isLogin;
@end
