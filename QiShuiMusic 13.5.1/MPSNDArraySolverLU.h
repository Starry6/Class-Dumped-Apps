@interface MPSNDArraySolverLU : MPSNDArrayMultiaryKernel
- (void)dealloc;
- (id)initWithDevice:sourceCount:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
+ (id)libraryInfo:;
@end
