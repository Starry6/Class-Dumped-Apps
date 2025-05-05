@interface MLCEmbeddingGPUDeviceOps : MLCGPUDeviceOps
@property (nonatomic) @ gradientForWeights;
@property (nonatomic) NSNumber paddingIndex;
@property (nonatomic) NSArray embeddingParams;
@property (nonatomic) BOOL scaleGradientByFrequency;
- (void).cxx_destruct;
- (id)gradientForWeights;
- (id)initWithForwardKernel:gradientKernel:;
- (void)setGradientForWeights:;
- (id)paddingIndex;
- (void)setPaddingIndex:;
- (id)embeddingParams;
- (void)setEmbeddingParams:;
- (BOOL)scaleGradientByFrequency;
- (void)setScaleGradientByFrequency:;
+ (id)deviceOps;
@end
