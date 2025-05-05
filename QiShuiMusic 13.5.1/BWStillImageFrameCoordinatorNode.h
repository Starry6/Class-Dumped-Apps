@interface BWStillImageFrameCoordinatorNode : BWNode
- (id)inputForPortType:;
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (id)nodeType;
- (void)_handleMessage:fromInput:;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (id)sensorRawInputForPortType:;
- (id)sensorRawOutputForPortType:;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)outputForPortType:;
- (id)nodeSubType;
- (id)initWithPortTypes:sensorRawInputPortTypes:;
@end
