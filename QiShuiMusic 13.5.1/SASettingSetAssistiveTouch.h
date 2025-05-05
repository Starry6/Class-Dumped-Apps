@interface SASettingSetAssistiveTouch : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setAssistiveTouch;
+ (id)setAssistiveTouchWithDictionary:context:;
@end
