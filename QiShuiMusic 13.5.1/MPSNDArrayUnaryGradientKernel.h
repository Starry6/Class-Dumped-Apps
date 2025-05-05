@interface MPSNDArrayUnaryGradientKernel : MPSNDArrayMultiaryGradientKernel
- (id)initWithCoder:device:;
- (id)initWithDevice:;
- (void)encodeToCommandBuffer:sourceArray:sourceGradient:gradientState:destinationArray:;
- (id)encodeToCommandBuffer:sourceArray:sourceGradient:gradientState:;
+ (unsigned long long)expectedVirtualSourceCount;
@end
