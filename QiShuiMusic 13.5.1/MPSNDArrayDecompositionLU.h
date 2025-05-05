@interface MPSNDArrayDecompositionLU : MPSNDArrayMultiaryMultiDestinationKernel
- (void)dealloc;
- (id)initWithDevice:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (void)encodeToCommandEncoder:commandBuffer:sourceArrays:destinationArrays:status:;
+ (id)libraryInfo:;
@end
