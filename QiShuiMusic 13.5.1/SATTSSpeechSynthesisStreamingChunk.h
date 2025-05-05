@interface SATTSSpeechSynthesisStreamingChunk : SATTSSpeechSynthesisStreaming
@property (nonatomic) NSData audioData;
@property (nonatomic) SATTSSpeechSynthesisAudioInfo audioInfo;
@property (nonatomic) q index;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (long long)index;
- (id)encodedClassName;
- (void)setIndex:;
- (id)audioData;
- (void)setAudioData:;
- (id)audioInfo;
- (void)setAudioInfo:;
+ (id)speechSynthesisStreamingChunk;
+ (id)speechSynthesisStreamingChunkWithDictionary:context:;
@end
