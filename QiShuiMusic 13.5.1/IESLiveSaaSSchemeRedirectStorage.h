@interface IESLiveSaaSSchemeRedirectStorage : NSObject
@property (nonatomic) NSDictionary configData;
@property (nonatomic) NSDictionary geckoRedirectRules;
@property (nonatomic) q geckoRedirectRulesVersion;
@property (nonatomic) double limitSecond;
@property (nonatomic) BOOL fetched;
- (void)saveData:toKey:;
- (void)setLimitSecond:;
- (id)configData;
- (id)geckoRedirectRules;
- (long long)geckoRedirectRulesVersion;
- (id)getGeckoPkgID;
- (id)getRedirectConfig;
- (void)getUGSettings:;
- (double)limitSecond;
- (void)setConfigData:;
- (void)setFetched:;
- (void)setGeckoRedirectRules:;
- (void)setGeckoRedirectRulesVersion:;
- (void)updateRedirectConfig:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)fetched;
@end
