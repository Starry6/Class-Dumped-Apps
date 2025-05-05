@interface MPSNDArrayBandPart : MPSNDArrayUnaryKernel
@property (nonatomic) q numLower;
@property (nonatomic) q numUpper;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (long long)numLower;
- (void)setNumLower:;
- (long long)numUpper;
- (void)setNumUpper:;
+ (id)libraryInfo:;
@end
