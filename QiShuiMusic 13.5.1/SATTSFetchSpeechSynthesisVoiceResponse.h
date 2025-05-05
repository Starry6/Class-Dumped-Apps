@interface SATTSFetchSpeechSynthesisVoiceResponse : SABaseClientBoundCommand
@property (nonatomic) NSArray voiceKeyList;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)voiceKeyList;
- (void)setVoiceKeyList:;
+ (id)fetchSpeechSynthesisVoiceResponse;
+ (id)fetchSpeechSynthesisVoiceResponseWithDictionary:context:;
@end
