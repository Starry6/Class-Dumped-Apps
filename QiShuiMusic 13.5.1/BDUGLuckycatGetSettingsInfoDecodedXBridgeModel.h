@interface BDUGLuckycatGetSettingsInfoDecodedXBridgeModel : BDXBridgeModel
@property (nonatomic) q settingsType;
@property (nonatomic) NSArray staticSettingsKeys;
@property (nonatomic) NSArray personalSettingsKeys;
@property (nonatomic) NSArray pollingSettingsKeys;
- (id)personalSettingsKeys;
- (id)pollingSettingsKeys;
- (void)setPersonalSettingsKeys:;
- (void)setPollingSettingsKeys:;
- (void)setStaticSettingsKeys:;
- (id)staticSettingsKeys;
- (long long)settingsType;
- (void)setSettingsType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
