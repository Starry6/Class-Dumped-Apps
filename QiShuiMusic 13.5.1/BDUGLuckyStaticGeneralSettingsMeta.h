@interface BDUGLuckyStaticGeneralSettingsMeta : BDUGLuckyBDModel
@property (nonatomic) BDUGLuckyStaticSettingsMeta staticSettingsMeta;
@property (nonatomic) BDUGLuckyPollingSettingsMeta pollingSettingsMeta;
- (id)pollingSettingsMeta;
- (void)setPollingSettingsMeta:;
- (void)setStaticSettingsMeta:;
- (id)staticSettingsMeta;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
