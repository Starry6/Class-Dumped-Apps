@interface SCCWebManager : NSObject
@property (nonatomic) SCCWebSettings settings;
@property (nonatomic) SCCLRUMutableDictionary domainCacheList;
@property (nonatomic) NSString scc_hips_rule_version;
@property (nonatomic) NSString serviceUrl;
@property (nonatomic) NSString version;
- (id)domainCacheList;
- (id)scc_hips_rule_version;
- (id)serviceUrl;
- (void)setDomainCacheList:;
- (void)setGlobalSettingsFromJson:;
- (void)setScc_hips_rule_version:;
- (id)init;
- (id)settings;
- (id)version;
- (void)setSettings:;
- (void).cxx_destruct;
+ (void)mergeSettings:fromDict:;
+ (id)shareInstance;
@end
