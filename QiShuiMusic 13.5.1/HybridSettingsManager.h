@interface HybridSettingsManager : NSObject
@property (nonatomic) NSMutableDictionary settingsDictionary;
- (void)addSetings:;
- (void)requestWithSettings:;
- (id)settingsForName:;
- (id)init;
- (id)settingsDictionary;
- (void).cxx_destruct;
- (void)setSettingsDictionary:;
+ (id)sharedManager;
@end
