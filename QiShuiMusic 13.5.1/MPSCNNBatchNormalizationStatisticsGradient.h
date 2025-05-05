@interface MPSCNNBatchNormalizationStatisticsGradient : MPSCNNGradientKernel
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (BOOL)isResultStateReusedAcrossBatch;
- (void)encodeBatchToCommandBuffer:sourceGradients:sourceImages:gradientStates:destinationGradients:;
- (id)encodeBatchToCommandBuffer:sourceGradients:sourceImages:gradientStates:;
- (void)encodeToCommandBuffer:sourceGradient:sourceImage:gradientState:destinationGradient:;
- (id)encodeToCommandBuffer:sourceGradient:sourceImage:gradientState:;
- (void)encodeBatchToCommandBuffer:sourceGradients:sourceImages:batchNormalizationState:;
- (id)initWithDevice:fusedNeuronDescriptor:;
- (BOOL)accumulatesOverBatch;
+ (id)libraryInfo:;
@end
