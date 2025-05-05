@interface MPSNDArrayLogSoftMaxGradient : MPSNDArrayUnaryGradientKernel
@property (nonatomic) Q axis;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)setAxis:;
- (void)encodeWithCoder:;
- (unsigned long long)axis;
- (id)initWithDevice:axis:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsToBeRetained;
+ (id)libraryInfo:;
@end
