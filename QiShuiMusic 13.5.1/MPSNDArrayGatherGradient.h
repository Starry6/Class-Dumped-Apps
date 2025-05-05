@interface MPSNDArrayGatherGradient : MPSNDArrayBinaryPrimaryGradientKernel
- (id)initWithDevice:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsNotToBeBroadcast;
- (void)encodeToCommandBuffer:primarySourceArray:secondarySourceArray:sourceGradient:gradientState:destinationArray:;
+ (id)libraryInfo:;
@end
