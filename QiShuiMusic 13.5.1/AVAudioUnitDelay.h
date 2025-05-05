@interface AVAudioUnitDelay : AVAudioUnitEffect
@property (nonatomic) double delayTime;
@property (nonatomic) float feedback;
@property (nonatomic) float lowPassCutoff;
@property (nonatomic) float wetDryMix;
- (id)init;
- (void)setDelayTime:;
- (float)feedback;
- (void)setFeedback:;
- (double)delayTime;
- (void)setWetDryMix:;
- (void)setLowPassCutoff:;
- (float)wetDryMix;
- (float)lowPassCutoff;
@end
