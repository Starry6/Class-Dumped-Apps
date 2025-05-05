@interface MPSNDArrayMatrixMultiplication : MPSNDArrayMultiaryKernel
@property (nonatomic) double alpha;
@property (nonatomic) double beta;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)setAlpha:;
- (double)beta;
- (void)encodeWithCoder:;
- (double)alpha;
- (id)destinationArrayDescriptorForSourceArrays:sourceState:;
- (void)setBeta:;
- (id)initWithDevice:sourceCount:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsNotToBeBroadcast;
- (unsigned long long)kernelDimensionalityForSourceArrays:destinationArrays:kernelDAGObject:;
- (id)workloadStatisticsForSourceArrays:destArrays:kernel:kernelDAGObject:sourceState:;
- (id)encodePreProcessingToCommandEncoder:commandBuffer:sourceArrays:destinationArray:kernelDAGObject:;
+ (id)libraryInfo:;
+ (BOOL)supportsPostfixForDevice:;
+ (BOOL)supportsPrefixForDevice:;
+ (unsigned long long)expectedVirtualSourceCount;
@end
