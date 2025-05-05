@interface SASetDeviceTTSMuteState : SABaseClientBoundCommand
@property (nonatomic) BOOL textToSpeechIsMuted;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)textToSpeechIsMuted;
- (void)setTextToSpeechIsMuted:;
+ (id)setDeviceTTSMuteState;
+ (id)setDeviceTTSMuteStateWithDictionary:context:;
@end
