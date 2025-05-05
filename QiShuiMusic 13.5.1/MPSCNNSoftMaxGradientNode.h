@interface MPSCNNSoftMaxGradientNode : MPSNNGradientFilterNode
- (id)newFilterNode;
- (id)initWithSourceGradient:sourceImage:gradientState:;
- (id)initWithGradientImages:forwardFilter:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:;
@end
