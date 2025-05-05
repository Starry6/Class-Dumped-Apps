@interface AVAudioSourceNode : AVAudioNode
@property (nonatomic) float volume;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRenderBlock:;
- (id)initWithFormat:renderBlock:;
+ (id)pullInputBlockFromRenderBlock:;
@end
