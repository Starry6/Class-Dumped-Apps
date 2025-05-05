@interface MPSCNNDropoutGradient : MPSCNNGradientKernel
@property (nonatomic) float keepProbability;
@property (nonatomic) Q seed;
@property (nonatomic) {?=QQQ} maskStrideInPixels;
- (unsigned long long)maxBatchSize;
- (unsigned long long)seed;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:keepProbability:seed:maskStrideInPixels:;
- (float)keepProbability;
- (id)maskStrideInPixels;
+ (id)libraryInfo:;
@end
