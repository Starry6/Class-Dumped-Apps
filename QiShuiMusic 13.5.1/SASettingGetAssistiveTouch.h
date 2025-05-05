@interface SASettingGetAssistiveTouch : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getAssistiveTouch;
+ (id)getAssistiveTouchWithDictionary:context:;
@end
