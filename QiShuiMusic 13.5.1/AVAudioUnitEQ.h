@interface AVAudioUnitEQ : AVAudioUnitEffect
@property (nonatomic) NSArray bands;
@property (nonatomic) float globalGain;
- (id)init;
- (id)initWithNumberOfBands:;
- (id)bands;
- (float)globalGain;
- (void)setGlobalGain:;
@end
