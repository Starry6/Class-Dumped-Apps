@interface BWNoiseReducerNode : BWNode
- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (void)setQuadraHighResStillImageCaptureEnabled:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (BOOL)quadraHighResStillImageCaptureEnabled;
- (id)nodeSubType;
- (id)initWithCameraTuningDictionary:sensorIDDictionary:;
@end
