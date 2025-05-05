@interface SASettingSetGuidedAccess : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setGuidedAccess;
+ (id)setGuidedAccessWithDictionary:context:;
@end
