@interface BWStillImageMultiCameraDoserNode : BWNode
- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (id)initWithPortTypes:;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (unsigned long long)outputIndexForPortType:;
@end
