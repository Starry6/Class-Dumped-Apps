@interface AXMTone : NSObject
@property (nonatomic) Q sampleRate;
@property (nonatomic) double frequency;
@property (nonatomic) AXMADSREnvelope envelope;
@property (nonatomic) AXMSynthPatch patch;
@property (nonatomic) double gain;
@property (nonatomic) double aWeighting;
- (double)gain;
- (id)init;
- (double)frequency;
- (unsigned long long)sampleRate;
- (void).cxx_destruct;
- (void)setGain:;
- (void)_setFrequency:;
- (void)setSampleRate:;
- (id)envelope;
- (void)setPatch:;
- (id)patch;
- (id)initWithSampleRate:envelope:;
- (void)renderInBuffer:atFrame:;
- (double)_rawValueForTonePhase:;
- (double)aWeighting;
@end
