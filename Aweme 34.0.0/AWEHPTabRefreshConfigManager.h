@interface AWEHPTabRefreshConfigManager : NSObject
@property (nonatomic) AWEHPTabRefreshConfig config;
@property (nonatomic) NSMutableDictionary tabCustomConfigMap;
- (long long)getAnimateTypeWithTabID:;
- (double)maxAnimateDuration;
- (double)minAnimateDuration;
- (BOOL)optimizeEnable;
- (id)getDragRefreshTextWithTabName:;
- (id)tabCustomConfigMap;
- (id)p_getCustomConfigWithTabID:;
- (void)setTabCustomConfigMap:;
- (void)setConfig:;
- (id)init;
- (id)config;
- (void).cxx_destruct;
- (void)setupConfig;
+ (id)sharedInstance;
@end
