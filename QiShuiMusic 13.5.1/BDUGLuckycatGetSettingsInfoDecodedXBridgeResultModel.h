@interface BDUGLuckycatGetSettingsInfoDecodedXBridgeResultModel : BDXBridgeModel
@property (nonatomic) NSDictionary staticSettings;
@property (nonatomic) NSDictionary personalSettings;
@property (nonatomic) NSDictionary pollingSettings;
- (id)pollingSettings;
- (id)personalSettings;
- (void)setPersonalSettings:;
- (void)setPollingSettings:;
- (void)setStaticSettings:;
- (id)staticSettings;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
