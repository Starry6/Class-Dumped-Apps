@interface MPSNDArrayStridedSliceGradient : MPSNDArrayUnaryGradientKernel
- (void)dealloc;
- (id)initWithDevice:;
- (id)destinationArrayDescriptorForSourceArrays:sourceState:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)stridesAtSourceIndex:;
- (void)encodeToCommandBuffer:sourceArray:sourceGradient:gradientState:destinationArray:;
- (void)encodeToCommandBuffer:sourceArrays:sourceGradient:gradientState:destinationArray:;
+ (id)libraryInfo:;
@end
