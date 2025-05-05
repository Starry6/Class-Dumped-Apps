@interface AVAudioSinkNode : AVAudioNode
- (id)initWithReceiverBlock:;
+ (id)pullInputBlockFromReceiverBlock:;
@end
