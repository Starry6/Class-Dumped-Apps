@interface BWStillImageTurnstileNode : BWNode
- (void)dealloc;
- (id)initWithStillImageCoordinator:;
- (id)nodeType;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
@end
