@interface AVAudioUnitReverb : AVAudioUnitEffect
@property (nonatomic) float wetDryMix;
- (id)init;
- (void)setWetDryMix:;
- (float)wetDryMix;
- (void)loadFactoryPreset:;
@end
