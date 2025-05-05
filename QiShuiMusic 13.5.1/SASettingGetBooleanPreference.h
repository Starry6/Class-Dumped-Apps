@interface SASettingGetBooleanPreference : SASettingGetBool
@property (nonatomic) NSString settingKey;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)settingKey;
- (void)setSettingKey:;
+ (id)getBooleanPreference;
+ (id)getBooleanPreferenceWithDictionary:context:;
@end
