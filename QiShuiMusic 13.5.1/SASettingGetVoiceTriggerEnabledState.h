@interface SASettingGetVoiceTriggerEnabledState : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getVoiceTriggerEnabledState;
+ (id)getVoiceTriggerEnabledStateWithDictionary:context:;
@end
