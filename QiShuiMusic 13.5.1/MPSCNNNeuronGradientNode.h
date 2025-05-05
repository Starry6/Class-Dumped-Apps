@interface MPSCNNNeuronGradientNode : MPSNNGradientFilterNode
@property (nonatomic) MPSNNNeuronDescriptor descriptor;
- (id)descriptor;
- (void)dealloc;
- (id)newFilterNode;
- (id)initWithGradientImages:forwardFilter:;
- (id)initWithSourceGradient:sourceImage:gradientState:descriptor:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:descriptor:;
@end
