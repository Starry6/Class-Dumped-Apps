@interface BWStillImagePortraitMetadataNode : BWNode
- (void)dealloc;
- (void)didSelectFormat:forInput:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:forInput:;
- (id)initWithNodeConfiguration:sensorIDDictionary:cameraInfoByPortType:sdofRenderingTuningParametersDictionary:captureDevice:;
@end
