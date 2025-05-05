@interface SATTSSpeechSynthesisPartialResponse : SABaseClientBoundCommand
@property (nonatomic) SAUIAudioData aceAudioData;
@property (nonatomic) SATTSSpeechSynthesisAudioInfo aceAudioInfo;
@property (nonatomic) q currentPacketNumber;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)aceAudioData;
- (void)setAceAudioData:;
- (id)aceAudioInfo;
- (void)setAceAudioInfo:;
- (long long)currentPacketNumber;
- (void)setCurrentPacketNumber:;
+ (id)speechSynthesisPartialResponse;
+ (id)speechSynthesisPartialResponseWithDictionary:context:;
@end
