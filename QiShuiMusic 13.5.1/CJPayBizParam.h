@interface CJPayBizParam : NSObject
@property (nonatomic) @? riskInfoBlock;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString configHost;
- (void)cleanCookies;
- (id)configHost;
- (id)riskInfoBlock;
- (void)setConfigHost:;
- (void)setRiskInfoBlock:;
- (void)setupAppInfoConfig:;
- (void)setupCookieWith:;
- (void)setupLanguage:;
- (void)setupRiskInfoBlock:;
- (void)setupTrackerDelegate:;
- (void)setAppName:;
- (id)appName;
- (void).cxx_destruct;
+ (id)shared;
@end
