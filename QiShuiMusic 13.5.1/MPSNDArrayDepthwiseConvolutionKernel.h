@interface MPSNDArrayDepthwiseConvolutionKernel : MPSNDArrayBinaryKernel
@property (nonatomic) {MPSNDArrayConv3dOffsets_s=[3q]} windowOffsets;
@property (nonatomic) {MPSNDArrayConv3dSizes_s=[3Q]} convStrides;
@property (nonatomic) {MPSNDArrayConv3dSizes_s=[3Q]} convDilationRates;
@property (nonatomic) Q channelAxis;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setWindowOffsets:;
- (void)setChannelAxis:;
- (void)setConvDilationRates:;
- (void)setConvStrides:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (BOOL)supportsGradientForSourceIndex:;
- (id)dimensionsNotToBeBroadcast;
- (id)dimensionsToBeRetained;
- (id)windowOffsets;
- (id)convStrides;
- (id)convDilationRates;
- (unsigned long long)channelAxis;
+ (id)libraryInfo:;
+ (BOOL)supportsPostfixForDevice:;
+ (BOOL)supportsPrefixForDevice:;
@end
