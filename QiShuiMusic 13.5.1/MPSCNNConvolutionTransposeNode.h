@interface MPSCNNConvolutionTransposeNode : MPSCNNConvolutionNode
@property (nonatomic) MPSCNNConvolutionGradientStateNode convolutionGradientState;
- (id)resultState;
- (id)newFilterNode;
- (Class)gradientClass;
- (id)convolutionGradientState;
- (id)convolutionState;
- (id)initWithSource:convolutionGradientState:weights:;
- (id)initWithSource:convolutionState:weights:;
+ (id)nodeWithSource:convolutionGradientState:weights:;
+ (id)nodeWithSource:convolutionState:weights:;
@end
