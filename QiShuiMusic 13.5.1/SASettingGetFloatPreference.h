@interface SASettingGetFloatPreference : SASettingGetFloat
@property (nonatomic) NSString settingKey;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)settingKey;
- (void)setSettingKey:;
+ (id)getFloatPreference;
+ (id)getFloatPreferenceWithDictionary:context:;
@end
