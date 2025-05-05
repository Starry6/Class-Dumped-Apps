@interface MPSCNNBatchNormalizationState : MPSNNGradientState
@property (nonatomic) MPSCNNBatchNormalization batchNormalization;
- (void)dealloc;
- (id)beta;
- (id)gamma;
- (void)reset;
- (id)mean;
- (id)variance;
- (id)gradientForBeta;
- (id)gradientForGamma;
- (id)initDeferredWithDevice:numberOfFeatureChannels:epsilon:batchNormalization:;
- (id)batchNormalization;
+ (id)temporaryStateWithCommandBuffer:numberOfFeatureChannels:epsilon:batchNormalization:;
@end
