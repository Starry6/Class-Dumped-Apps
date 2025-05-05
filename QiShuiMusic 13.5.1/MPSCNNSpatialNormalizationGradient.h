@interface MPSCNNSpatialNormalizationGradient : MPSCNNGradientKernel
@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;
- (float)delta;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)setAlpha:;
- (float)beta;
- (id)initWithDevice:kernelWidth:kernelHeight:;
- (void)encodeWithCoder:;
- (void)setDelta:;
- (float)alpha;
- (id)initWithDevice:;
- (void)setBeta:;
+ (id)libraryInfo:;
@end
