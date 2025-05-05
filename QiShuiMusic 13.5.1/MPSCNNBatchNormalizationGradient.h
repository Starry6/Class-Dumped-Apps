@interface MPSCNNBatchNormalizationGradient : MPSCNNGradientKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)encodeBatchToCommandBuffer:sourceGradients:sourceImages:batchNormalizationState:;
- (void)encodeBatchToCommandBuffer:sourceGradients:sourceImages:batchNormalizationState:destinationGradients:;
- (id)initWithDevice:fusedNeuronDescriptor:;
- (void)encodeToCommandBuffer:sourceGradient:sourceImage:batchNormalizationState:destinationGradient:;
- (id)encodeToCommandBuffer:sourceGradient:sourceImage:batchNormalizationState:;
+ (id)libraryInfo:;
@end
