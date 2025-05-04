@interface AWEUserCenterPrivacyCertManager : NSObject
+ (void)pasteBoardSetString:withToken:toastString:;
+ (void)openUrl:withToken:;
+ (void)startRunningWithSession:withToken:;
+ (void)stopRunningWithSession:withToken:;
+ (id)privacyCertWithToken:;
@end
