@interface OPTTSMutableTextToSpeechMeta : OPTTSTextToSpeechMeta
@property (nonatomic) OPTTSTextToSpeechVoice voice;
@property (nonatomic) OPTTSTextToSpeechResource resource;
- (id)init;
- (void)setVoice:;
- (void)setResource:;
- (id)voice;
- (id)resource;
- (id)copyWithZone:;
@end
