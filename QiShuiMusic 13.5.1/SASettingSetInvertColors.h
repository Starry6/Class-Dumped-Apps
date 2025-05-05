@interface SASettingSetInvertColors : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setInvertColors;
+ (id)setInvertColorsWithDictionary:context:;
@end
