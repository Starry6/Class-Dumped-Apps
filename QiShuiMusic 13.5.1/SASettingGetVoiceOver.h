@interface SASettingGetVoiceOver : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getVoiceOver;
+ (id)getVoiceOverWithDictionary:context:;
@end
