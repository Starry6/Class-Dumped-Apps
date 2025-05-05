@interface MPSNDArrayMatrixMultiplicationGradient : MPSNDArrayMultiaryGradientKernel
@property (nonatomic) double alpha;
@property (nonatomic) double beta;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)setAlpha:;
- (double)beta;
- (void)encodeWithCoder:;
- (double)alpha;
- (id)destinationArrayDescriptorForSourceArrays:sourceState:;
- (void)setBeta:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsNotToBeBroadcast;
- (id)workloadStatisticsForSourceArrays:destArrays:kernel:kernelDAGObject:sourceState:;
- (id)initWithDevice:sourceCount:sourceGradientIndex:;
- (unsigned long long)maxSupportedDimensionsForSourceArrays:destinationArray:;
+ (id)libraryInfo:;
+ (BOOL)supportsPostfixForDevice:;
+ (BOOL)supportsPrefixForDevice:;
+ (unsigned long long)expectedVirtualSourceCount;
@end
