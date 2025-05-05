@interface MPSCNNFullyConnectedGradientNode : MPSCNNConvolutionGradientNode
- (id)newFilterNode;
- (id)initWithSourceGradient:sourceImage:convolutionGradientState:weights:;
+ (id)nodeWithSourceGradient:sourceImage:convolutionGradientState:weights:;
@end
