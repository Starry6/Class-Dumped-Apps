@interface SASettingGetAppearance : SASettingGetValue
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getAppearance;
+ (id)getAppearanceWithDictionary:context:;
@end
