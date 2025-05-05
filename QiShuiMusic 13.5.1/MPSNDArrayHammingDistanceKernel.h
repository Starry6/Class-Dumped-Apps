@interface MPSNDArrayHammingDistanceKernel : MPSNDArrayBinaryKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (BOOL)supportsGradientForSourceIndex:;
- (id)dimensionsNotToBeBroadcast;
- (id)dimensionsToBeRetained;
- (id)workloadStatisticsForSourceArrays:destArrays:kernel:kernelDAGObject:sourceState:;
+ (id)libraryInfo:;
+ (BOOL)supportsPostfixForDevice:;
+ (BOOL)supportsPrefixForDevice:;
@end
