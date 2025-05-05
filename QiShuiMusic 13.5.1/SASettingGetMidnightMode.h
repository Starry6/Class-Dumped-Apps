@interface SASettingGetMidnightMode : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getMidnightMode;
+ (id)getMidnightModeWithDictionary:context:;
@end
