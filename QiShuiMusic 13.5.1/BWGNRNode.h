@interface BWGNRNode : BWNode
- (BOOL)allowedToModifyInputBuffers;
- (void)dealloc;
- (void)setAllowedToModifyInputBuffers:;
- (id)nodeType;
- (void)setUsesHDRPreBracketFrameForErrorRecoveryDownstream:;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (id)_initWithSISEnabled:OISEnabled:LTMHDREnabled:processingLTMHDRFusion:portType:sensorID:sensorIDDictionary:telephotoPortType:telephotoSensorID:telephotoSensorIDDictionary:sbpCreationFunction:treatSoftErrorsAsHardErrors:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:forInput:;
- (void)setAttachesInputBracketToOutputSampleBuffer:;
- (void)renderSampleBuffer:forInput:;
- (BOOL)usesHDRPreBracketFrameForErrorRecoveryDownstream;
- (id)nodeSubType;
- (id)initWithSISEnabled:OISEnabled:LTMHDREnabled:processingLTMHDRFusion:portType:sensorID:sensorIDDictionary:telephotoPortType:telephotoSensorID:telephotoSensorIDDictionary:;
@end
