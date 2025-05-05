@interface MPSNDArrayBinaryPrimaryGradientKernel : MPSNDArrayMultiaryGradientKernel
- (id)initWithCoder:device:;
- (id)initWithDevice:;
- (id)encodeToCommandBuffer:primarySourceArray:secondarySourceArray:sourceGradient:gradientState:;
- (void)encodeToCommandBuffer:primarySourceArray:secondarySourceArray:sourceGradient:gradientState:destinationArray:;
+ (unsigned long long)expectedVirtualSourceCount;
@end
