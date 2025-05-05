@interface VKBarcodeFrameProcessor : VKFrameProcessor
@property (nonatomic) VKBarcodeFrameProcessorConfiguration configuration;
@property (nonatomic) @? resultHandler;
- (id)init;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (void)reset;
- (id)resultHandler;
- (void)setResultHandler:;
- (BOOL)wantsThrottling;
- (void)processFrame:;
- (void)applyWarpTransform:;
@end
