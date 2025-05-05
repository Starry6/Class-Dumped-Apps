@interface VKTextFrameProcessor : VKFrameProcessor
@property (nonatomic) VKTextFrameProcessorConfiguration configuration;
@property (nonatomic) @? resultHandler;
- (id)init;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (void)reset;
- (id)resultHandler;
- (void)setResultHandler:;
- (void)applyHomographyWarpTransform:;
- (BOOL)wantsThrottling;
- (void)setWantsThrottling:;
- (void)processFrame:;
+ (id)supportedRecognitionLanguages;
@end
