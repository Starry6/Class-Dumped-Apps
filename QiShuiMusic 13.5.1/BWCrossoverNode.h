@interface BWCrossoverNode : BWNode
- (void)handleDroppedSample:forInput:;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:forInput:;
- (id)initWithMediaType:numberOfInputs:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
@end
