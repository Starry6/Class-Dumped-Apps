@interface MPSNDArrayNeuronGradient : MPSNDArrayUnaryGradientKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
+ (id)libraryInfo:;
@end
