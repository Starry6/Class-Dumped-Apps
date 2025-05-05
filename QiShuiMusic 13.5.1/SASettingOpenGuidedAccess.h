@interface SASettingOpenGuidedAccess : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openGuidedAccess;
+ (id)openGuidedAccessWithDictionary:context:;
@end
