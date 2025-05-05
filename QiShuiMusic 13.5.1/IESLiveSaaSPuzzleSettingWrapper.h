@interface IESLiveSaaSPuzzleSettingWrapper : NSObject
@property (nonatomic) <IESLiveSettings> settings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getUGDynamicSettingsWithKeys:completion:waitInit:;
- (BOOL)getUGSettingsBoolForKey:;
- (id)getUGSettingsWithKeys:;
- (void)getUGSettingsWithKeys:completion:waitInit:;
- (id)valueForKey:defaultValue:;
- (id)dictionaryForKey:defaultValue:;
- (id)settings;
- (void)setSettings:;
- (id)numberForKey:defaultValue:;
- (id)stringForKey:defaultValue:;
- (void).cxx_destruct;
- (id)arrayForKey:defaultValue:;
@end
