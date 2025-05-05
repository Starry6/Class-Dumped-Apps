@interface MPSCNNCrossChannelNormalizationGradient : MPSCNNGradientKernel
@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;
@property (nonatomic) Q kernelSize;
- (float)delta;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)setAlpha:;
- (float)beta;
- (void)encodeWithCoder:;
- (void)setDelta:;
- (float)alpha;
- (id)initWithDevice:;
- (void)setBeta:;
- (id)initWithDevice:kernelSize:;
- (unsigned long long)kernelSize;
+ (id)libraryInfo:;
@end
