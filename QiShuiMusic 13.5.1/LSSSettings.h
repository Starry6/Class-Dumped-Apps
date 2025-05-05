@interface LSSSettings : NSObject
@property (nonatomic) NSDictionary requestResults;
- (BOOL)checkIdNumber:;
- (id)getBatchSettingsParams;
- (id)getGLobalStaticSettingsBundleByProjectKey:;
- (id)getGlobalStaticSetttingsByKey:key:;
- (id)getProjectKey:;
- (id)getSettings;
- (id)getStrategyCommonTraceInfo;
- (BOOL)isIdNumberValid:;
- (id)parseJsonString:;
- (id)requestResults;
- (void)setRequestResults:;
- (void)updateLiveCoreVapssSettings:;
- (void)updateLivePlayerVapssSettings:;
- (id)init;
- (void)updateSettings:;
- (void).cxx_destruct;
@end
