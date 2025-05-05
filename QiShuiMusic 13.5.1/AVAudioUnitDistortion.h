@interface AVAudioUnitDistortion : AVAudioUnitEffect
@property (nonatomic) float preGain;
@property (nonatomic) float wetDryMix;
- (id)init;
- (void)setWetDryMix:;
- (float)wetDryMix;
- (void)loadFactoryPreset:;
- (id)FillOutAUPreset:;
- (void)setPreGain:;
- (float)preGain;
@end
