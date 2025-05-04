@interface AWERTVVoipSettingManager : NSObject
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) <RTVSettingsManager> settingManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rxAwakeFromPropertyInjection;
- (BOOL)isVoipEnable;
- (id)settingDictionary;
- (id)defaultUserAvatar;
- (id)settingDictionaryForKey:;
- (id)settingValueForKey:defaultValue:;
- (id)settingValueForABKey:defaultABValue:;
- (BOOL)isVoipNarrowEnabled;
- (id)injector;
- (void).cxx_destruct;
- (id)settingManager;
@end
