@interface MPSNDArrayLocalConvolution : MPSNDArrayBinaryKernel
@property (nonatomic) I dataFormat;
@property (nonatomic) {MPSNDArrayConvolutionSizes=[2Q]} kernelSizes;
@property (nonatomic) {MPSNDArrayConvolutionSizes=[2Q]} dilationRates;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)destinationArrayDescriptorForSourceArrays:sourceState:;
- (void)setDataFormat:;
- (id)dilationRates;
- (void)setDilationRates:;
- (id)kernelSizes;
- (void)setKernelSizes:;
- (unsigned int)dataFormat;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (BOOL)supportsGradientForSourceIndex:;
- (id)dimensionsNotToBeBroadcast;
- (id)dimensionsToBeRetained;
+ (id)libraryInfo:;
@end
