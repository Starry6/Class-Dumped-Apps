@interface BWVideoDepthNode : BWNode
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)outputFormatForAttachedMediaKey:;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:;
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (id)nodeType;
- (id)inputInferenceVideoFormatForAttachedMediaKey:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)inputVideoFormatForAttachedMediaKey:;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:format:;
- (id)outputVideoFormatForAttachedMediaKey:;
- (id)inputFormatForAttachedMediaKey:;
- (id)nodeSubType;
- (id)initWithInferenceScheduler:captureDevice:videoDepthConfiguration:;
@end
