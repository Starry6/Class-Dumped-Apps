@interface BDUGLuckyActivitySettingsConfig : NSObject
@property (nonatomic) NSString staticSettingsPath;
@property (nonatomic) NSString personalSettingsPath;
@property (nonatomic) NSString pollingSettingsPath;
- (id)personalSettingsPath;
- (id)pollingSettingsPath;
- (void)setPersonalSettingsPath:;
- (void)setPollingSettingsPath:;
- (void)setStaticSettingsPath:;
- (id)staticSettingsPath;
- (void).cxx_destruct;
@end
