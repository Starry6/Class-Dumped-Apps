@interface BWRedEyeReducerNode : BWNode
- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (int)inferenceType;
- (id)nodeSubType;
- (id)initWithVersion:sensorConfigurationsByPortType:;
- (void)setInferenceType:;
- (void)setInferenceAttachmentKey:;
- (id)inferenceAttachmentKey;
@end
