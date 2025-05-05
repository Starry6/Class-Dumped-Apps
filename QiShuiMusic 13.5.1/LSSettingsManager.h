@interface LSSettingsManager : NSObject
@property (nonatomic) {LSSettings=BiB{basic_string<char mLSSettings;
@property (nonatomic) {StrategySDKSettings=Biiiiiiqiqiiiiqiqiii{basic_string<char mStrategySDKSettings;
@property (nonatomic) {shared_ptr<livestrategy::ISettingsManager>=^{ISettingsManager}^{__shared_weak_count}} settingsManager;
- (void)RegisterStrategyConfigUpdate:callback:;
- (id)SendRequest;
- (void)setMLSSettings:;
- (void)LoadDB;
- (void)StartPeriodicRequest;
- (id)getLSSettings;
- (id)getStrategyConfigByName:;
- (id)getStrategySDKSettings;
- (BOOL)isNeptuneJsonParsed;
- (BOOL)parseLSSettings:;
- (void)parseStrategyConfig:;
- (BOOL)parseStrategySDKSettings:;
- (void)setMStrategySDKSettings:;
- (void).cxx_destruct;
- (id)settingsManager;
- (void)setSettingsManager:;
- (id).cxx_construct;
+ (id)sharedInstance;
@end
