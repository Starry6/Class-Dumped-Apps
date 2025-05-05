@interface SASettingSetMidnightMode : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)setMidnightMode;
+ (id)setMidnightModeWithDictionary:context:;
@end
