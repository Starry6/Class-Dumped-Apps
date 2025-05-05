@interface BWStillImageConditionalRouterNode : BWFanOutNode
- (void)dealloc;
- (void)renderSampleBuffer:forInput:;
- (id)initWithRoutingConfiguration:;
@end
