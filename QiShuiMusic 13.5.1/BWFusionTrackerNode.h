@interface BWFusionTrackerNode : BWInferenceNode
@property (nonatomic) BWVideoDepthInferenceConfiguration videoDepthConfiguration;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:;
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (id)nodeType;
- (id)initWithConvEngineSupportWithCaptureDevice:scheduler:priority:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)videoDepthConfiguration;
- (void)renderSampleBuffer:forInput:;
- (void)willEmitSampleBufferAlways:;
- (id)nodeSubType;
@end
