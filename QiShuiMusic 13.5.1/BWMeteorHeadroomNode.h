@interface BWMeteorHeadroomNode : BWNode
- (void)dealloc;
- (void)setHeadroomProcessingType:;
- (float)gainMapMainImageDownscalingFactor;
- (void)didSelectFormat:forInput:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)initWithNodeConfiguration:sensorConfigurationsByPortType:;
- (int)headroomProcessingType;
- (void)setGainMapMainImageDownscalingFactor:;
@end
