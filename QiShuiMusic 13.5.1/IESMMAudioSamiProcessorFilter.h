@interface IESMMAudioSamiProcessorFilter : VEAudioFilter
@property (nonatomic) q lastMediaTime;
@property (nonatomic) {vector<double lastParams;
@property (nonatomic) IESMMAudioSamiProcessorConfig config;
- (id)createSAMIHandle:findPath:;
- (void)destroySAMI;
- (long long)getMediaTimeForSampleIndex:sampleRate:;
- (void)initSami:sampleRate:sampleCount:;
- (long long)lastMediaTime;
- (id)lastParams;
- (id)parseKeyframeParam:;
- (int)processAudio:output:samples:channels:mediaTime:sampleRate:;
- (void)processEachBlock:sampleOffset:channelCount:inDataBuff:outDataBuff:;
- (void)processKeyFrame:paramIndex:clipParams:keyFrames:;
- (void)setLastMediaTime:;
- (void)setLastParams:;
- (void)dealloc;
- (void)setConfig:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)config;
- (id).cxx_construct;
@end
