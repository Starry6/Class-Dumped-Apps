@interface MPSNDArrayMultiaryKernel : MPSNDArrayMultiaryBase
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)initWithDevice:sourceCount:;
- (void)encodeGradientsToCommandEncoder:commandBuffer:sourceArrays:sourceGradient:gradientState:destinationGradients:kernelDAGObject:;
- (void)encodeToCommandEncoder:commandBuffer:sourceArrays:destinationArray:;
- (void)encodeToCommandEncoder:commandBuffer:sourceArrays:resultState:destinationArray:kernelDAGObject:;
- (void)encodeToCommandBuffer:sourceArrays:destinationArray:;
- (id)encodeToCommandBuffer:sourceArrays:;
- (BOOL)supportsGradientForSourceIndex:;
- (id)encodePreProcessingToCommandEncoder:commandBuffer:sourceArrays:destinationArray:kernelDAGObject:;
- (id)encodeToCommandBuffer:sourceArrays:resultState:outputStateIsTemporary:;
- (void)encodeToCommandBuffer:sourceArrays:resultState:destinationArray:;
- (void)encodeToCommandBuffer:sourceArrays:resultState:destinationArray:kernelDAGObject:;
- (id)encodeGradientsToCommandBuffer:sourceArrays:sourceGradient:gradientState:;
- (id)firstGradientDestinationFromDestinationGradients:outMaxNumDimensions:;
- (void)encodeGradientsToCommandBuffer:sourceArrays:sourceGradient:gradientState:destinationGradients:kernelDAGObject:;
- (void)encodeGradientsToCommandBuffer:sourceArrays:sourceGradient:gradientState:destinationGradients:;
- (id)destinationGradientsSupported;
- (id)destinationGradientArrayDescriptorsForSourceArrays:sourceGradient:sourceState:;
+ (BOOL)supportsPostfixForDevice:;
+ (BOOL)supportsPrefixForDevice:;
@end
