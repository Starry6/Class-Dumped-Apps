@interface VeLSSettingsManagerWrapper : NSObject
@property (nonatomic) {shared_ptr<livestrategy::ISettingsManager>=^{ISettingsManager}^{__shared_weak_count}} settingsManager;
- (id)GetAbrAutoSettings;
- (void)GetLSSettings;
- (id)GetLivePlayerSettings;
- (void)GetStrategySDKSettings;
- (id)GetQuicSettings;
- (id)GetRTMPlayer;
- (id)GetStrategyConfigByName:;
- (void)StartPeriodicRequest;
- (void).cxx_destruct;
- (id)settingsManager;
- (void)setSettingsManager:;
- (id).cxx_construct;
+ (id)sharedInstance;
@end
