@interface MPSNDArrayGridSample : MPSNDArrayBinaryKernel
@property (nonatomic) I samplingMode;
@property (nonatomic) NSInteger paddingMode;
@property (nonatomic) BOOL normalizeCoordinates;
@property (nonatomic) BOOL relativeCoordinates;
@property (nonatomic) double constantValue;
- (id)initWithCoder:device:;
- (double)constantValue;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)destinationArrayDescriptorForSourceArrays:sourceState:;
- (void)setRelativeCoordinates:;
- (void)setConstantValue:;
- (void)setPaddingMode:;
- (BOOL)normalizeCoordinates;
- (void)setNormalizeCoordinates:;
- (unsigned int)samplingMode;
- (void)setSamplingMode:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (BOOL)supportsGradientForSourceIndex:;
- (id)dimensionsToBeRetained;
- (int)paddingMode;
- (BOOL)relativeCoordinates;
+ (id)libraryInfo:;
@end
