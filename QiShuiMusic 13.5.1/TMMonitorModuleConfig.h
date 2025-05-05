@interface TMMonitorModuleConfig : TMModuleConfig
@property (nonatomic) NSDictionary monitorConfig;
@property (nonatomic) NSDictionary moduleConfigs;
- (Class)moduleClass;
- (id)moduleConfigs;
- (id)monitorConfig;
- (id)initWithDictionary:;
- (void).cxx_destruct;
+ (id)defaultMonitorConfig;
+ (id)configKey;
@end
