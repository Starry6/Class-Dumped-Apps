@interface AVAudioUnitTimeEffect : AVAudioUnit
@property (nonatomic) BOOL bypass;
- (void)setBypass:;
- (id)initWithAudioComponentDescription:;
- (BOOL)bypass;
@end
