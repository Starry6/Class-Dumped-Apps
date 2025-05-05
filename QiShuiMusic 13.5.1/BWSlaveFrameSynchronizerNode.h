@interface BWSlaveFrameSynchronizerNode : BWNode
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)handleNodeError:forInput:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:forInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (id)initWithDepthEnabled:numberOfInputs:;
- (id)initWithDepthEnabled:numberOfInputs:bufferSize:numberOfSlaveFramesToSkip:startEmittingMasterFramesBeforeSlaveStreamStarts:;
@end
