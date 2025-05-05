@interface MPSCNNDropoutGradientNode : MPSNNGradientFilterNode
@property (nonatomic) float keepProbability;
@property (nonatomic) Q seed;
@property (nonatomic) {?=QQQ} maskStrideInPixels;
- (unsigned long long)seed;
- (id)newFilterNode;
- (float)keepProbability;
- (id)maskStrideInPixels;
- (id)initWithGradientImages:forwardFilter:;
- (id)initWithSourceGradient:sourceImage:gradientState:keepProbability:seed:maskStrideInPixels:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:keepProbability:seed:maskStrideInPixels:;
@end
