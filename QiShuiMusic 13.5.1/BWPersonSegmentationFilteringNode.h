@interface BWPersonSegmentationFilteringNode : BWNode
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (id)initWithGPUPriority:frameRateUpsamplingEnabled:;
- (void)setInputOrientationRelativeToSensor:;
- (unsigned int)inputOrientationRelativeToSensor;
- (void)setAlignsMaskWithPrimaryCaptureRect:;
- (BOOL)alignsMaskWithPrimaryCaptureRect;
@end
