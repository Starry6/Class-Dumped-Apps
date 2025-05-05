@interface SASettingGetVoiceControl : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getVoiceControl;
+ (id)getVoiceControlWithDictionary:context:;
@end
