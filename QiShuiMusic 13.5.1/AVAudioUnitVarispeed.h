@interface AVAudioUnitVarispeed : AVAudioUnitTimeEffect
@property (nonatomic) float rate;
- (void)setRate:;
- (id)init;
- (float)rate;
@end
