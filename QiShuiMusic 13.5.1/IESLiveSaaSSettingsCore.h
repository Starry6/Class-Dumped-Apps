@interface IESLiveSaaSSettingsCore : NSObject
@property (nonatomic) <IESLiveSettings> settings;
@property (nonatomic) NSDictionary settingConfig;
- (id)loadSettingsConfig;
- (void)setSettingConfig:;
- (id)settingConfig;
- (id)valueForKey:defaultValue:freeze:type:title:description:RDauthor:PMs:liveVersion:businessModule:;
- (id)valueForKey:valueType:;
- (id)valueForKey:valueType:defaultValue:;
- (id)settings;
- (void)setSettings:;
- (void).cxx_destruct;
- (id)configPath;
+ (id)sharedManager;
@end
