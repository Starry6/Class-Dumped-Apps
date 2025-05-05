@interface MPSCNNConvolutionTransposeGradient : MPSCNNGradientKernel
@property (nonatomic) Q sourceGradientFeatureChannels;
@property (nonatomic) Q sourceImageFeatureChannels;
@property (nonatomic) Q groups;
@property (nonatomic) <MPSCNNConvolutionDataSource> dataSource;
@property (nonatomic) Q gradientOption;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (unsigned long long)groups;
- (id)initWithDevice:weights:;
- (id)biases;
- (void)encodeWithCoder:;
- (id)dataSource;
- (void)reloadWeightsAndBiasesWithCommandBuffer:state:;
- (id)weights;
- (void)reloadWeightsAndBiasesFromDataSource;
- (id)initWithDevice:;
- (BOOL)isResultStateReusedAcrossBatch;
- (void)setGradientOption:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:primaryOffset:secondaryOffset:kernelOffset:;
- (BOOL)filterHandlesPlugin;
- (unsigned long long)sourceGradientFeatureChannels;
- (unsigned long long)sourceImageFeatureChannels;
- (unsigned long long)gradientOption;
- (id)PeakAtWeights:;
+ (id)libraryInfo:;
@end
