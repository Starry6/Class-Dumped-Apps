@interface BWStillImageFilterNode : BWNode
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (void)setSdofRenderingTuningParameters:;
- (id)sdofRenderingTuningParameters;
- (void)handleStillImagePrewarmWithSettings:forInput:;
- (id)nodeType;
- (void)handleNodeError:forInput:;
- (id)provideStillImageMetalBlurMapRenderer;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)provideMetalFilterRenderer;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)provideCoreImageFilterRenderer;
- (id)provideStreamingSDOFFilterRenderer;
- (id)provideColorLookupCache;
- (id)provideStillImageMetalSDOFRenderer;
- (id)nodeSubType;
- (id)initWithNodeConfiguration:depthDataDeliveryEnabled:personSegmentationEnabled:refinedDepthEnabled:portraitRenderQuality:;
- (id)_initWithNodeConfiguration:depthDataDeliveryEnabled:personSegmentationEnabled:refinedDepthEnabled:portraitRenderQuality:renderResourceProvider:;
@end
