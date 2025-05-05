@interface MPSNDArrayTileKernel : MPSNDArrayUnaryKernel
@property (nonatomic) {?=[16Q]} multiples;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)destinationArrayDescriptorForSourceArrays:sourceState:;
- (void)setMultiples:;
- (id)multiples;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsToBeRetained;
+ (id)libraryInfo:;
@end
