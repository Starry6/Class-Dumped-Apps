@interface IESMMAudioPitch : VEAudioEffectBase
@property (nonatomic) IESMMAudioPitchConfig config;
- (int)processInput:output:samplesPerCh:;
- (void)dealloc;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (void)reset;
- (id)config;
- (id).cxx_construct;
@end
