@interface SASettingSetDoNotDisturb : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setDoNotDisturb;
+ (id)setDoNotDisturbWithDictionary:context:;
@end
