@interface SASettingSetFloatPreference : SASettingSetFloat
@property (nonatomic) NSString settingKey;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)settingKey;
- (void)setSettingKey:;
+ (id)setFloatPreference;
+ (id)setFloatPreferenceWithDictionary:context:;
@end
