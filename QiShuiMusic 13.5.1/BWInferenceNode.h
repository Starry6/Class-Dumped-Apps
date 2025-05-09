@interface BWInferenceNode : BWNode
@property (nonatomic) BWInferenceEngine inferenceEngine;
@property (nonatomic) BOOL awaitAsynchronousOutputs;
@property (nonatomic) BOOL applyRecommendedMasterPortType;
@property (nonatomic) BOOL passthroughInputSampleBuffer;
@property (nonatomic) NSInteger additionalOutputPoolRetainedBufferCount;
@property (nonatomic) @? postprocessFilter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)outputFormatForAttachedMediaKey:;
- (void)setAwaitAsynchronousOutputs:;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:;
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (id)initWithScheduler:priority:;
- (void)willEmitSampleBuffer:;
- (BOOL)passthroughInputSampleBuffer;
- (int)additionalOutputPoolRetainedBufferCount;
- (id)nodeType;
- (id)postprocessFilter;
- (void)setPassthroughInputSampleBuffer:;
- (id)inputInferenceVideoFormatForAttachedMediaKey:;
- (int)addInferenceOfType:version:configuration:;
- (BOOL)applyRecommendedMasterPortType;
- (id)initWithConvEngineSupportWithCaptureDevice:scheduler:priority:;
- (int)addInferenceOfType:version:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)setInferencesToSkip:;
- (id)inferenceEngine;
- (void)setApplyRecommendedMasterPortType:;
- (void)renderSampleBuffer:forInput:;
- (id)description;
- (BOOL)awaitAsynchronousOutputs;
- (id)inputVideoFormatForAttachedMediaKey:;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:format:;
- (id)outputVideoFormatForAttachedMediaKey:;
- (void)setAdditionalOutputPoolRetainedBufferCount:;
- (void)setPostprocessFilter:;
- (id)inputFormatForAttachedMediaKey:;
- (void)willEmitSampleBufferAlways:;
- (id)nodeSubType;
@end
