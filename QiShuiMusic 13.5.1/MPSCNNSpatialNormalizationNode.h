@interface MPSCNNSpatialNormalizationNode : MPSCNNNormalizationNode
@property (nonatomic) Q kernelWidth;
@property (nonatomic) Q kernelHeight;
- (id)initWithSource:;
- (void)setKernelHeight:;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (void)setKernelWidth:;
- (id)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:kernelSize:;
+ (id)nodeWithSource:kernelSize:;
@end
