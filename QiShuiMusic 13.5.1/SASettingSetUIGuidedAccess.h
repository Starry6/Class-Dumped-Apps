@interface SASettingSetUIGuidedAccess : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setUIGuidedAccess;
+ (id)setUIGuidedAccessWithDictionary:context:;
@end
