@interface BWDepthSynchronizerNode : BWNode
@property (nonatomic) BWNodeInput imageInput;
@property (nonatomic) BWNodeInput depthInput;
@property (nonatomic) BOOL discardsDegradedDepthBuffers;
@property (nonatomic) BOOL flushOnDepthEOD;
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)handleNodeError:forInput:;
- (void)didReachEndOfDataForInput:;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:forInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (id)imageInput;
- (id)initForStreaming:separateDepthComponentsEnabled:;
- (void)setDiscardsDegradedDepthBuffers:;
- (BOOL)discardsDegradedDepthBuffers;
- (id)depthInput;
- (BOOL)flushOnDepthEOD;
- (void)setFlushOnDepthEOD:;
@end
