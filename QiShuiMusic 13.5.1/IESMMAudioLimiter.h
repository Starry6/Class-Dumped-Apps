@interface IESMMAudioLimiter : VEAudioEffectBase
@property (nonatomic) float volume;
- (id)initWithChannels:sampleRate:;
- (void)processPlanarStereo:samplesPerCh:;
- (void)processStereo:samplesPerCh:;
- (void)updateWithConfig:;
- (id)init;
- (float)volume;
- (void)dealloc;
- (void)setVolume:;
- (void).cxx_destruct;
- (void)reset;
- (id).cxx_construct;
@end
