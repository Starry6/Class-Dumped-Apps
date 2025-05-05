@interface MPSCNNLocalContrastNormalizationNode : MPSCNNNormalizationNode
@property (nonatomic) float pm;
@property (nonatomic) float ps;
@property (nonatomic) float p0;
@property (nonatomic) Q kernelWidth;
@property (nonatomic) Q kernelHeight;
- (id)initWithSource:;
- (void)setKernelHeight:;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (void)setKernelWidth:;
- (float)p0;
- (void)setP0:;
- (void)setPm:;
- (float)pm;
- (id)newFilterNode;
- (Class)gradientClass;
- (float)ps;
- (void)setPs:;
- (id)initWithSource:kernelSize:;
+ (id)nodeWithSource:kernelSize:;
@end
