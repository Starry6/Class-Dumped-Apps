@interface BWInferenceBufferingNode : BWInferenceNode
@property (nonatomic) BWInferenceResultRingBuffers ringBuffers;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:;
- (void)dealloc;
- (void)willEmitSampleBuffer:;
- (id)ringBuffers;
- (id)initWithConvEngineSupportWithCaptureDevice:scheduler:priority:;
- (int)addInferenceOfType:version:configuration:ringBufferCapacity:;
@end
