@interface SAUIRevealRecognizedSpeech : SABaseClientBoundCommand
@property (nonatomic) SASRecognition recognition;
@property (nonatomic) NSString speechRecognizedAceId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)recognition;
- (void)setRecognition:;
- (id)speechRecognizedAceId;
- (void)setSpeechRecognizedAceId:;
@end
