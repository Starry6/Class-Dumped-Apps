@interface MPSNNReductionSpatialMeanGradientNode : MPSNNGradientFilterNode
- (id)newFilterNode;
- (id)initWithSourceGradient:sourceImage:gradientState:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:;
@end
