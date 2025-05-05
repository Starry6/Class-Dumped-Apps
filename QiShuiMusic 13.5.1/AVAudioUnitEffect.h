@interface AVAudioUnitEffect : AVAudioUnit
@property (nonatomic) BOOL bypass;
- (void)setBypass:;
- (id)initWithAudioComponentDescription:;
- (BOOL)bypass;
@end
