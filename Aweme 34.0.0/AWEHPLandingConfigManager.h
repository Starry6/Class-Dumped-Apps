@interface AWEHPLandingConfigManager : NSObject
@property (nonatomic) NSDictionary settingsLandingConfig;
@property (nonatomic) NSArray settingsStrategyBlackList;
@property (nonatomic) NSDictionary landingConfig;
@property (nonatomic) AWEHPLandingResultModel currentResultModel;
@property (nonatomic) AWEHPLandingStrategyModel currentStrategyModel;
@property (nonatomic) AWEHPLandingResultModel nextResultModel;
@property (nonatomic) MMKV landingMMMKV;
@property (nonatomic) MMKV strategyMMMKV;
@property (nonatomic) NSLock lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awemeSettingDidChange;
- (void)p_addNotifications;
- (void)p_removeNotifications;
- (id)safeGetLandingConfig;
- (id)safeGetCurrentLandingStrategyModel;
- (BOOL)safeSetNextLandingPitayaResult:;
- (BOOL)p_tryUpdateSettings;
- (id)p_getSettingsLandingConfig;
- (id)p_getSettingsStrategyBlackList;
- (id)p_generateLandingConfigWithConfig:blackList:;
- (id)forceInsertOldStrategyList;
- (id)p_getCurrentUserId;
- (id)p_readResult;
- (id)p_generateLandingResultWithLandingConfig:userId:landingResult:;
- (id)p_generateResultModelWithPitaya:isDefault:userId:;
- (BOOL)p_setNextLandingResultModel:;
- (BOOL)p_removeResult;
- (BOOL)p_writeResult:;
- (id)landingMMMKV;
- (id)safeGetCurrentLandingResultModel;
- (void)safeSetCurrentLandingStrategyModel:;
- (id)safeGetNextLandingResultModel;
- (BOOL)tryIncrementLandingCountWithLandingResult:;
- (void)safeRemoveNextLandingResult;
- (id)getStrategyMMKV;
- (id)settingsLandingConfig;
- (void)setSettingsLandingConfig:;
- (id)settingsStrategyBlackList;
- (void)setSettingsStrategyBlackList:;
- (id)landingConfig;
- (void)setLandingConfig:;
- (id)currentResultModel;
- (void)setCurrentResultModel:;
- (id)currentStrategyModel;
- (void)setCurrentStrategyModel:;
- (id)nextResultModel;
- (void)setNextResultModel:;
- (void)setLandingMMMKV:;
- (id)strategyMMMKV;
- (void)setStrategyMMMKV:;
- (id)init;
- (void)dealloc;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
