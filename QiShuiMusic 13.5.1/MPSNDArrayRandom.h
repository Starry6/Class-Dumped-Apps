@interface MPSNDArrayRandom : MPSNDArrayUnaryKernel
- (id)initWithDevice:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
+ (id)libraryInfo:;
@end
