@interface MPSNDArrayMultiaryGradientKernel : MPSNDArrayMultiaryBase
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (void)encodeToCommandEncoder:commandBuffer:sourceArrays:sourceGradient:gradientState:destinationArray:kernelDAGObject:;
- (id)initWithDevice:sourceCount:sourceGradientIndex:;
- (void)encodeToCommandBuffer:sourceArrays:sourceGradient:gradientState:destinationArray:;
- (id)encodeToCommandBuffer:sourceArrays:sourceGradient:gradientState:;
- (void)encodeToCommandBuffer:sourceArrays:sourceGradient:gradientState:destinationArray:kernelDAGObject:;
@end
