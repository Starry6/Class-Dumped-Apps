@interface MPSNDArrayReductionGradient : MPSNDArrayUnaryGradientKernel
@property (nonatomic) Q axis;
@property (nonatomic) NSInteger operation;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (int)operation;
- (void)setAxis:;
- (void)encodeWithCoder:;
- (unsigned long long)axis;
- (id)initWithDevice:axis:operation:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsToBeRetained;
+ (id)libraryInfo:;
@end
