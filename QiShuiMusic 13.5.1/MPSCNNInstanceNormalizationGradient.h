@interface MPSCNNInstanceNormalizationGradient : MPSCNNGradientKernel
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
+ (id)libraryInfo:;
@end
