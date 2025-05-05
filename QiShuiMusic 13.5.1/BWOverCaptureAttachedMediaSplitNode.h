@interface BWOverCaptureAttachedMediaSplitNode : BWAttachedMediaSplitNode
@property (nonatomic) BWNodeOutput primaryFrameOutput;
@property (nonatomic) BWNodeOutput synchronizedSlaveFrameOutput;
- (void)dealloc;
- (id)primaryFrameOutput;
- (void)renderSampleBuffer:forInput:;
- (id)initWithBackPressureExtraRetainBufferCount:;
- (id)synchronizedSlaveFrameOutput;
@end
