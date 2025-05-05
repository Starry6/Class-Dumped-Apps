@interface MPSNDArrayTileGradientKernel : MPSNDArrayUnaryGradientKernel
@property (nonatomic) {?=[16Q]} multiples;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setMultiples:;
- (id)multiples;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsToBeRetained;
+ (id)libraryInfo:;
@end
