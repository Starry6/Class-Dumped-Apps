@interface BWMattingInferenceConfiguration : BWInferenceConfiguration
@property (nonatomic) float mainImageDownscalingFactor;
@property (nonatomic) BOOL refinedDepthDeliveryEnabled;
@property (nonatomic) <MTLCommandQueue> metalCommandQueue;
@property (nonatomic) NSDictionary sdofRenderingTuningParameters;
- (void)dealloc;
- (void)setMainImageDownscalingFactor:;
- (void)setSdofRenderingTuningParameters:;
- (id)sdofRenderingTuningParameters;
- (void)setMetalCommandQueue:;
- (BOOL)refinedDepthDeliveryEnabled;
- (float)mainImageDownscalingFactor;
- (id)metalCommandQueue;
- (void)setRefinedDepthDeliveryEnabled:;
@end
