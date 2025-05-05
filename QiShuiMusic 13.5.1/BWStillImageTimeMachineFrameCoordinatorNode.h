@interface BWStillImageTimeMachineFrameCoordinatorNode : BWNode
- (id)inputForPortType:;
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (id)initWithPortTypes:;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)outputForPortType:;
- (id)nodeSubType;
@end
