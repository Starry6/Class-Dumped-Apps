@interface BWStillImageCameraCalibrationDataNode : BWNode
- (void)setBaseZoomFactorsByPortType:;
- (id)baseZoomFactorsByPortType;
- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (id)initWithSensorConfigurationsByPortType:;
- (void)setPropagatesDetectedObjects:;
- (BOOL)propagatesDetectedObjects;
@end
