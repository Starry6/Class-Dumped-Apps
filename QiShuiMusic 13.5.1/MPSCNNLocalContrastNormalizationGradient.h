@interface MPSCNNLocalContrastNormalizationGradient : MPSCNNGradientKernel
@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;
@property (nonatomic) float p0;
@property (nonatomic) float pm;
@property (nonatomic) float ps;
- (float)delta;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)setAlpha:;
- (float)beta;
- (id)debugDescription;
- (id)initWithDevice:kernelWidth:kernelHeight:;
- (void)encodeWithCoder:;
- (void)setDelta:;
- (float)alpha;
- (id)initWithDevice:;
- (void)setBeta:;
- (float)p0;
- (void)setP0:;
- (void)setPm:;
- (float)pm;
- (float)ps;
- (void)setPs:;
+ (id)libraryInfo:;
@end
