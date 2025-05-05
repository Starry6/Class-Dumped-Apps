@interface IESMMAudioDSP : VEAudioEffectBase
@property (nonatomic) NSString effectPath;
- (void)changeEffectPath:;
- (id)effectPath;
- (id)initWithSampleRate:config:;
- (int)process:samples:channels:;
- (void)setEffectPath:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id).cxx_construct;
@end
