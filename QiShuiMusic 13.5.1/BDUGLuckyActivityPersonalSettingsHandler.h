@interface BDUGLuckyActivityPersonalSettingsHandler : BDUGLuckyActivityCommonSettingsHandler
@property (nonatomic) BOOL hasRequestedPersonalSettings;
- (id)__currentSettingsPath;
- (BOOL)__shouldUpdateSettings;
- (void)__trackPersonalSettingObjectsWithKeyPaths:settingsInfo:;
- (void)__trackPersonalSettingsDataWithSettingsInfo:;
- (void)__updateSettingsFromScene:retryCount:isForced:;
- (BOOL)hasRequestedPersonalSettings;
- (void)setHasRequestedPersonalSettings:;
- (void)updateSettingsFromScene:isForced:;
- (id)init;
@end
