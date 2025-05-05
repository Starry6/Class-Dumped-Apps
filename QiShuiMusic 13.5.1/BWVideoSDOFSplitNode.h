@interface BWVideoSDOFSplitNode : BWFanOutNode
@property (nonatomic) BWNodeOutput originalOutput;
@property (nonatomic) BWNodeOutput sdofOutput;
- (id)init;
- (void)dealloc;
- (id)originalOutput;
- (id)sdofOutput;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
@end
