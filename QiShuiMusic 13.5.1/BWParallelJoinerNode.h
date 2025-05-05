@interface BWParallelJoinerNode : BWFunnelNode
- (void)dealloc;
- (void)handleNodeError:forInput:;
- (void)renderSampleBuffer:forInput:;
- (id)initWithNumberOfInputs:mediaType:;
@end
