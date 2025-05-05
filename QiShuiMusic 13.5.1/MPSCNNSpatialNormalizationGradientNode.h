@interface MPSCNNSpatialNormalizationGradientNode : MPSNNGradientFilterNode
@property (nonatomic) Q kernelWidth;
@property (nonatomic) Q kernelHeight;
@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;
- (float)delta;
- (void)setKernelHeight:;
- (void)setAlpha:;
- (float)beta;
- (void)setDelta:;
- (float)alpha;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (void)setKernelWidth:;
- (void)setBeta:;
- (id)newFilterNode;
- (id)initWithGradientImages:forwardFilter:;
- (id)initWithSourceGradient:sourceImage:gradientState:kernelSize:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:kernelSize:;
@end
