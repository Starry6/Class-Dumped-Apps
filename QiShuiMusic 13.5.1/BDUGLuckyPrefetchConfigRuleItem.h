@interface BDUGLuckyPrefetchConfigRuleItem : MTLModel
@property (nonatomic) NSNumber enableInject;
@property (nonatomic) NSNumber needPrefetchData;
@property (nonatomic) NSArray settingsKey;
@property (nonatomic) NSArray storagesKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSettingsKey:;
- (void)setStoragesKey:;
- (id)enableInject;
- (id)needPrefetchData;
- (void)setEnableInject:;
- (void)setNeedPrefetchData:;
- (id)storagesKey;
- (void).cxx_destruct;
- (id)settingsKey;
+ (id)JSONKeyPathsByPropertyKey;
@end
