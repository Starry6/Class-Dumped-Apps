@interface BDUGLuckyActivityStaticSettingsHandler : BDUGLuckyActivityCommonSettingsHandler
- (id)__currentSettingsPath;
- (void)__onReceiveDomainChangedEvent;
- (BOOL)__shouldUpdateSettings;
- (void)__trackStaticSettingObjectsWithKeyPaths:settingsInfo:;
- (void)__trackStaticSettingsDataWithSettingsInfo:;
- (void)__updateSettingsFromScene:retryCount:isForced:;
- (void)updateSettingsFromScene:isForced:;
- (id)init;
@end
