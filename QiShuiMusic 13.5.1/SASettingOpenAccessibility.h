@interface SASettingOpenAccessibility : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openAccessibility;
+ (id)openAccessibilityWithDictionary:context:;
@end
