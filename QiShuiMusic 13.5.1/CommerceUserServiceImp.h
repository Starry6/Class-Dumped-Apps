@interface CommerceUserServiceImp : NSObject
+ (id)currentLoginUser;
+ (void)requireLogin:;
+ (BOOL)isLogin;
@end
