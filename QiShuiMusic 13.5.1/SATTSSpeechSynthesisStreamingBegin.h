@interface SATTSSpeechSynthesisStreamingBegin : SATTSSpeechSynthesisStreaming
@property (nonatomic) SAUIAudioDescription decoderStreamDescription;
@property (nonatomic) SAUIAudioDescription playerStreamDescription;
@property (nonatomic) SATTSSpeechSynthesisResource speechSynthesisResource;
@property (nonatomic) SATTSSpeechSynthesisVoice speechSynthesisVoice;
@property (nonatomic) float streamingPlaybackBufferSize;
@property (nonatomic) NSString text;
- (id)groupIdentifier;
- (void)setText:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)text;
- (float)streamingPlaybackBufferSize;
- (id)decoderStreamDescription;
- (id)speechSynthesisResource;
- (id)speechSynthesisVoice;
- (void)setDecoderStreamDescription:;
- (id)playerStreamDescription;
- (void)setPlayerStreamDescription:;
- (void)setSpeechSynthesisResource:;
- (void)setSpeechSynthesisVoice:;
- (void)setStreamingPlaybackBufferSize:;
+ (id)speechSynthesisStreamingBegin;
+ (id)speechSynthesisStreamingBeginWithDictionary:context:;
@end
