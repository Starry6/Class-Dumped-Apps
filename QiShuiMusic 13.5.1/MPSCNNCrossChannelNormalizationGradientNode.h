@interface MPSCNNCrossChannelNormalizationGradientNode : MPSNNGradientFilterNode
@property (nonatomic) Q kernelSize;
- (unsigned long long)kernelSize;
- (id)newFilterNode;
- (id)initWithGradientImages:forwardFilter:;
- (id)initWithSourceGradient:sourceImage:gradientState:kernelSize:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:kernelSize:;
@end
