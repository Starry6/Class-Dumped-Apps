@interface IESMMAudioPitchV2 : VEAudioEffectBase
@property (nonatomic) IESMMAudioPitchConfigV2 config;
@property (nonatomic) IESMMAudioProcessorEx audioProcess;
- (id)audioProcess;
- (void)changeEffectPath:preprocessInfo:;
- (void)initAudioProcess;
- (int)process:inChannel:inSamplesPerChannel:atTime:;
- (void)setAudioProcess:;
- (void)seekToTime:;
- (void)dealloc;
- (void)setConfig:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (void)reset;
- (id)config;
@end
