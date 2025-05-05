@interface MPSCNNBinaryConvolutionNode : MPSCNNConvolutionNode
@property (nonatomic) MPSCNNConvolutionGradientStateNode convolutionGradientState;
- (void)dealloc;
- (id)newFilterNode;
- (id)convolutionGradientState;
- (id)convolutionState;
- (id)initWithSource:weights:scaleValue:type:flags:;
- (id)initWithSource:weights:outputBiasTerms:outputScaleTerms:inputBiasTerms:inputScaleTerms:type:flags:;
+ (id)nodeWithSource:weights:scaleValue:type:flags:;
+ (id)nodeWithSource:weights:outputBiasTerms:outputScaleTerms:inputBiasTerms:inputScaleTerms:type:flags:;
@end
