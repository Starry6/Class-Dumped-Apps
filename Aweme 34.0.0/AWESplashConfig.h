@interface AWESplashConfig : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) @? timeMonitorBlock;
@property (nonatomic) NSString defaultUserAgentOfWebView;
@property (nonatomic) q userMode;
@property (nonatomic) q userPeriod;
@property (nonatomic) # fakeLaunchScreenClass;
@property (nonatomic) q downgradeMode;
- (long long)userPeriod;
- (void)setTimeMonitorBlock:;
- (void)setUserMode:;
- (void)setUserPeriod:;
- (void)setFakeLaunchScreenClass:;
- (id)timeMonitorBlock;
- (id)defaultUserAgentOfWebView;
- (void)setDefaultUserAgentOfWebView:;
- (Class)fakeLaunchScreenClass;
- (long long)downgradeMode;
- (void)setDowngradeMode:;
- (id)userID;
- (long long)userMode;
- (void).cxx_destruct;
- (void)setUserID:;
+ (id)dependencyInjection;
@end
