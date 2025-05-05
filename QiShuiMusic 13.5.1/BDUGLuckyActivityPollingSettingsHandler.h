@interface BDUGLuckyActivityPollingSettingsHandler : BDUGLuckyActivityCommonSettingsHandler
@property (nonatomic) BOOL isPollingSettingsStart;
@property (nonatomic) BDUGLuckyPollingSettingsDowngradeModel downgradeModel;
@property (nonatomic) NSLock pollingSettingsLock;
- (id)__currentSettingsPath;
- (id)__fetchSettingObjectsWithKeyPaths:settingsInfo:;
- (BOOL)__isEqualPollingSettingsWithOldSettings:currentSettings:;
- (void)__requestSettingsWithScene:retryCount:isForced:;
- (BOOL)__shouldUpdateSettings;
- (id)currentSettingsInfo;
- (id)downgradeModel;
- (void)isEqualPollingSettingsWithOldSettingsInfo:currentSettingsInfo:;
- (BOOL)isPollingSettingsStart;
- (id)pollingSettingsLock;
- (void)setDowngradeModel:;
- (void)setIsPollingSettingsStart:;
- (void)setPollingSettingsLock:;
- (void)startIfNeededWithConfig:;
- (void)startWithConfig:;
- (void)updateSettingsFromScene:isForced:;
- (id)init;
- (void)stop;
- (void).cxx_destruct;
@end
