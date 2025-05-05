@interface AVAudioUnitGenerator : AVAudioUnit
@property (nonatomic) BOOL bypass;
@property (nonatomic) float volume;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBypass:;
- (id)initWithAudioComponentDescription:;
- (BOOL)bypass;
@end
