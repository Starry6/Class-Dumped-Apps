@interface BWAttachedMediaSplitNode : BWFanOutNode
- (void)setEmitsNodeErrorsForMissingAttachedMedia:;
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (void)didSelectFormat:forInput:;
- (id)initWithAttachedMediaKeys:;
- (id)initWithAttachedMediaKeys:attachedMediaToPropagateToPrimaryOutput:;
- (BOOL)emitsNodeErrorsForMissingAttachedMedia;
- (void)renderSampleBuffer:forInput:;
- (BOOL)isOutputRenderingEnabledForAttachedMediaKey:;
- (void)setOutputRenderingEnabled:forAttachedMediaKey:;
- (id)nodeSubType;
@end
