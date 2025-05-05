@interface AVSpeechSynthesisProviderAudioUnit : AUAudioUnit
@property (nonatomic) NSArray speechVoices;
@property (nonatomic) @? speechSynthesisOutputMetadataBlock;
- (void)setSpeechSynthesisOutputMetadataBlock:;
- (void)setSpeechVoices:;
- (id)speechVoices;
- (id)speechSynthesisOutputMetadataBlock;
- (void).cxx_destruct;
- (void)synthesizeSpeechRequest:;
- (void)cancelSpeechRequest;
@end
