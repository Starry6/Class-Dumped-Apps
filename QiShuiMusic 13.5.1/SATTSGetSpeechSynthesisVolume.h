@interface SATTSGetSpeechSynthesisVolume : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getSpeechSynthesisVolume;
+ (id)getSpeechSynthesisVolumeWithDictionary:context:;
@end
