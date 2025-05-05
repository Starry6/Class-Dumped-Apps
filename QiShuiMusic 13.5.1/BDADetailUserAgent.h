@interface BDADetailUserAgent : NSObject
@property (nonatomic) NSString currentUA;
@property (nonatomic) NSString restoreUA;
- (id)systemUserAgent;
- (BOOL)containSDKInformation:;
- (id)currentUA;
- (id)originalUserAgent;
- (void)registerUserAgentWithCustomUserAgent:disableCustomUA:;
- (id)restoreUA;
- (id)sdkInformation;
- (void)setCurrentUA:;
- (void)setRestoreUA:;
- (void)unregisterUserAgent;
- (void)registerDefaults:;
- (void).cxx_destruct;
+ (id)currentUserAgent;
+ (void)registerCustomUserAgent:;
+ (void)registerUserAgentWithDisableCustomUserAgent:;
+ (void)unregisterUserAgent;
+ (id)shareInstance;
@end
