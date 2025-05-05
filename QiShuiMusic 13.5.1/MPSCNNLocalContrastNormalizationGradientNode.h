@interface MPSCNNLocalContrastNormalizationGradientNode : MPSNNGradientFilterNode
@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;
@property (nonatomic) float p0;
@property (nonatomic) float pm;
@property (nonatomic) float ps;
@property (nonatomic) Q kernelWidth;
@property (nonatomic) Q kernelHeight;
- (float)delta;
- (void)setAlpha:;
- (float)beta;
- (void)setDelta:;
- (float)alpha;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (void)setBeta:;
- (float)p0;
- (void)setP0:;
- (void)setPm:;
- (float)pm;
- (id)newFilterNode;
- (id)initWithGradientImages:forwardFilter:;
- (float)ps;
- (void)setPs:;
- (id)initWithSourceGradient:sourceImage:gradientState:kernelWidth:kernelHeight:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:kernelWidth:kernelHeight:;
@end
