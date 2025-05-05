@interface BDUGLuckyRulesItem : BDUGLuckyBDModel
@property (nonatomic) BOOL enableInjected;
@property (nonatomic) NSArray staticSettingsKeys;
@property (nonatomic) NSArray dynamicSettingsKeys;
@property (nonatomic) NSArray pollingSettingsKeys;
- (id)dynamicSettingsKeys;
- (BOOL)enableInjected;
- (id)pollingSettingsKeys;
- (void)setDynamicSettingsKeys:;
- (void)setEnableInjected:;
- (void)setPollingSettingsKeys:;
- (void)setStaticSettingsKeys:;
- (id)staticSettingsKeys;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
