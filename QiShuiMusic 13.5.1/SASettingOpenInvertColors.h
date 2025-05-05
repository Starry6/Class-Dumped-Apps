@interface SASettingOpenInvertColors : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openInvertColors;
+ (id)openInvertColorsWithDictionary:context:;
@end
