@interface BWAttachedMediaSwapNode : BWNode
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (id)initWithPrimaryFormatToAttachedMediaKey:attachedMediaKeyToPrimaryFormat:sampleBufferAttachmentsToTransfer:generatesDroppedSampleMarkerBuffers:;
@end
