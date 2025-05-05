@interface MPSCNNGradientKernel : MPSCNNBinaryKernel
@property (nonatomic) q kernelOffsetX;
@property (nonatomic) q kernelOffsetY;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (void)setKernelOffsetX:;
- (id)initWithDevice:;
- (long long)kernelOffsetY;
- (void)setKernelOffsetY:;
- (long long)kernelOffsetX;
- (void)encodeBatchToCommandBuffer:sourceGradients:sourceImages:gradientStates:destinationGradients:;
- (id)encodeBatchToCommandBuffer:sourceGradients:sourceImages:gradientStates:;
- (void)encodeToCommandBuffer:sourceGradient:sourceImage:gradientState:destinationGradient:;
- (id)encodeToCommandBuffer:sourceGradient:sourceImage:gradientState:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:;
- (id)resultStateForPrimaryImage:secondaryImage:sourceStates:;
- (id)temporaryResultStateForCommandBuffer:primaryImage:secondaryImage:sourceStates:;
- (id)encodeToCommandEncoder:commandBuffer:sourceGradient:sourceImage:gradientState:;
- (void)encodeToCommandEncoder:commandBuffer:sourceGradient:sourceImage:gradientState:destinationGradient:;
- (id)encodeBatchToCommandEncoder:commandBuffer:sourceGradients:sourceImages:gradientStates:;
- (void)encodeBatchToCommandEncoder:commandBuffer:sourceGradients:sourceImages:gradientStates:destinationGradients:;
- (void)readGradientState:;
- (void)readBinaryGradientState:isSecondarySourceFilter:;
- (BOOL)isStateModified;
@end
