@interface BWCinematicFramingNode : BWNode
@property (nonatomic) BWNodeInput videoCaptureInput;
@property (nonatomic) BWNodeOutput videoCaptureOutput;
@property (nonatomic) BWNodeInput stillImageInput;
@property (nonatomic) BWNodeOutput stillImageOutput;
@property (nonatomic) BWNodeInput detectionMetadataInput;
@property (nonatomic) BWNodeOutput detectionMetadataOutput;
@property (nonatomic) NSString clientApplicationID;
@property (nonatomic) I cinematicFramingControlMode;
- (unsigned int)cinematicFramingControlMode;
- (void)setCinematicFramingControlMode:;
- (void)dealloc;
- (id)clientApplicationID;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (id)videoCaptureOutput;
- (void)setClientApplicationID:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)stillImageOutput;
- (id)nodeSubType;
- (id)initWithOutputDimensions:cameraInfoByPortType:horizontalSensorBinningFactor:verticalSensorBinningFactor:deviceOrientationCorrectionEnabled:stillImageCaptureEnabled:objectMetadataIdentifiers:maxLossyCompressionLevel:portType:deviceModelName:;
- (id)videoCaptureInput;
- (id)stillImageInput;
- (id)detectionMetadataInput;
- (id)detectionMetadataOutput;
@end
