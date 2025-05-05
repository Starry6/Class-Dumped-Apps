@interface BWStereoFusionNode : BWNode
@property (nonatomic) BWNodeInput wideInput;
@property (nonatomic) BWNodeInput telephotoInput;
@property (nonatomic) BWNodeOutput defaultOutput;
@property (nonatomic) BWNodeOutput stereoHDROutput;
- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)setAttachesInputBracketToOutputSampleBuffer:;
- (void)renderSampleBuffer:forInput:;
- (id)defaultOutput;
- (id)nodeSubType;
- (id)initWithTelephotoSensorIDDictionary:cameraInfoByPortType:;
- (id)_initWithTelephotoSensorIDDictionary:cameraInfoByPortType:sbpCreationFunction:treatSoftErrorsAsHardErrors:;
- (BOOL)isCaptureRequestStateReset;
- (id)sampleBufferProcessor;
- (id)wideInput;
- (id)telephotoInput;
- (id)stereoHDROutput;
@end
