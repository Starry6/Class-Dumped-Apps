@interface MPSNDArrayIdentity : MPSNDArrayUnaryKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)reshapeWithCommandBuffer:sourceArray:shape:destinationArray:;
- (id)reshapeWithCommandEncoder:commandBuffer:sourceArray:dimensionCount:dimensionSizes:destinationArray:;
- (id)reshapeWithCommandEncoder:commandBuffer:sourceArray:shape:destinationArray:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)workloadStatisticsForSourceArrays:destArrays:kernel:kernelDAGObject:sourceState:;
- (id)reshapeWithCommandBuffer:sourceArray:dimensionCount:dimensionSizes:destinationArray:;
+ (id)libraryInfo:;
@end
