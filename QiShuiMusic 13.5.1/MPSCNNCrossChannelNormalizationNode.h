@interface MPSCNNCrossChannelNormalizationNode : MPSCNNNormalizationNode
@property (nonatomic) Q kernelSizeInFeatureChannels;
- (id)initWithSource:;
- (id)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:kernelSize:;
- (unsigned long long)kernelSizeInFeatureChannels;
- (void)setKernelSizeInFeatureChannels:;
+ (id)nodeWithSource:kernelSize:;
@end
