@interface BWFunnelNode : BWNode
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (id)initWithNumberOfInputs:mediaType:holdMessages:;
- (void)handleDroppedSample:forInput:;
- (void)_handleMessage:fromInput:;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)handleNodeError:forInput:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:forInput:;
- (void)renderSampleBuffer:forInput:;
- (id)initWithNumberOfInputs:mediaType:;
@end
