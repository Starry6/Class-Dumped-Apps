@interface SASettingSetVoiceTriggerEnabledState : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setVoiceTriggerEnabledState;
+ (id)setVoiceTriggerEnabledStateWithDictionary:context:;
@end
