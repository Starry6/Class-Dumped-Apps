@interface SASettingSetBooleanPreference : SASettingSetBool
@property (nonatomic) NSString settingKey;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)settingKey;
- (void)setSettingKey:;
+ (id)setBooleanPreference;
+ (id)setBooleanPreferenceWithDictionary:context:;
@end
