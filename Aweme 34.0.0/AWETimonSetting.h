@interface AWETimonSetting : NSObject
@property (nonatomic) NSDictionary ruleEngineConfig;
- (id)ruleEngineConfig;
- (void)setRuleEngineConfig:;
- (void)registerConfigUpdatedBlock:;
- (id)init;
- (id)settings;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
