@interface VmsdkSettingsManager : NSObject
@property (nonatomic) NSDictionary settingDict;
@property (nonatomic) q settingTime;
- (int)getSettingsFlag;
- (id)getExperimentSettings:;
- (BOOL)getSettingsFromCache:;
- (void)initSettings;
- (void)setSettings:withTime:;
- (long long)settingTime;
- (void).cxx_destruct;
- (id)settingDict;
+ (id)shareInstance;
@end
