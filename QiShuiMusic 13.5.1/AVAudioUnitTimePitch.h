@interface AVAudioUnitTimePitch : AVAudioUnitTimeEffect
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float overlap;
- (void)setRate:;
- (void)setPitch:;
- (id)init;
- (float)rate;
- (float)pitch;
- (float)overlap;
- (void)setOverlap:;
@end
