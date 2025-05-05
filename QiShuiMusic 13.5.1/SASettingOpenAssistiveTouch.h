@interface SASettingOpenAssistiveTouch : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openAssistiveTouch;
+ (id)openAssistiveTouchWithDictionary:context:;
@end
