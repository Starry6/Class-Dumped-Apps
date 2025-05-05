@interface SASettingOpenDoNotDisturb : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openDoNotDisturb;
+ (id)openDoNotDisturbWithDictionary:context:;
@end
