@interface MPSCNNConvolutionTransposeGradientNode : MPSCNNConvolutionGradientNode
- (id)newFilterNode;
- (id)initWithGradientImages:forwardFilter:;
- (id)initWithSourceGradient:sourceImage:convolutionTransposeGradientState:weights:;
+ (id)nodeWithSourceGradient:sourceImage:convolutionTransposeGradientState:weights:;
@end
