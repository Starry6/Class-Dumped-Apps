@interface ISRootSettings : ISSettings
@property (nonatomic) ISPlayerSettings playerSettings;
@property (nonatomic) ISVitalitySettings vitalitySettings;
@property (nonatomic) ISPerformanceDiagnosticsSettings performanceDiagnosticsSettings;
- (void)setDefaultValues;
- (void)save;
- (void).cxx_destruct;
- (void)setPerformanceDiagnosticsSettings:;
- (id)performanceDiagnosticsSettings;
- (id)playerSettings;
- (void)setPlayerSettings:;
- (id)vitalitySettings;
- (void)setVitalitySettings:;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_defaultsKey;
@end
