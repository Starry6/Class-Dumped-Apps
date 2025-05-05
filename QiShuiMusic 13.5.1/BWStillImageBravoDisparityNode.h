@interface BWStillImageBravoDisparityNode : BWNode
@property (nonatomic) BWNodeInput wideInput;
@property (nonatomic) BWNodeInput telephotoInput;
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)handleNodeError:forInput:;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)setShouldComputeDisparityWhenCalibrationFails:;
- (void)didReachEndOfDataForInput:;
- (void)setAttachesInputBracketToOutputSampleBuffer:;
- (void)renderSampleBuffer:forInput:;
- (BOOL)shouldComputeDisparityWhenCalibrationFails;
- (id)nodeSubType;
- (id)wideInput;
- (id)telephotoInput;
- (id)initWithNodeConfiguration:sensorConfigurationsByPortType:disparityMapWidth:disparityMapHeight:outputDisparityBufferCount:;
@end
