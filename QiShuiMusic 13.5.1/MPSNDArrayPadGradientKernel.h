@interface MPSNDArrayPadGradientKernel : MPSNDArrayUnaryGradientKernel
@property (nonatomic) Q edgeMode;
@property (nonatomic) {MPSNDArrayPaddingSize=[16[2Q]]} paddingSize;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:edgeMode:paddingSize:;
- (unsigned long long)edgeMode;
- (id)paddingSize;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsToBeRetained;
+ (id)libraryInfo:;
@end
