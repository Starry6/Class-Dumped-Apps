@interface TMBPEAModuleConfig : TMModuleConfig
@property (nonatomic) NSDictionary moduleConfigs;
- (Class)moduleClass;
- (id)moduleConfigs;
- (void)setModuleConfigs:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
+ (id)configKey;
@end
