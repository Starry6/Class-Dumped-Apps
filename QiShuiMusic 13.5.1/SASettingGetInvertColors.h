@interface SASettingGetInvertColors : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getInvertColors;
+ (id)getInvertColorsWithDictionary:context:;
@end
