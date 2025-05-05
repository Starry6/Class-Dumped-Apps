@interface TTAccountLogoutTask : NSObject
+ (id)requestLogoutPlatform:completion:;
+ (id)requestLogoutWithScene:completion:;
+ (id)requestLogoutWithScene:extraInfo:completion:;
@end
