@interface UASDKLogin : NSObject
@property (nonatomic) NSDictionary networkInfo;
- (BOOL)validateRegisterMethodImplement;
- (BOOL)delectScrip;
- (void)getAuthorizationCompletion:;
- (void)getPhoneNumberCompletion:;
- (void)mobileAuthCompletion:;
- (void)printConsoleEnable:;
- (void)registerAppId:appKey:encrypType:;
- (id)networkInfo;
- (void)setTimeoutInterval:;
+ (id)shareLogin;
+ (id)allocWithZone:;
@end
