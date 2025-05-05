@interface MPSNDArrayReductionSumGradient : MPSNDArrayReductionGradient
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:axis:;
@end
