@interface MPSCNNBinaryFullyConnectedNode : MPSCNNBinaryConvolutionNode
- (id)newFilterNode;
- (id)initWithSource:weights:scaleValue:type:flags:;
- (id)initWithSource:weights:outputBiasTerms:outputScaleTerms:inputBiasTerms:inputScaleTerms:type:flags:;
+ (id)nodeWithSource:weights:scaleValue:type:flags:;
+ (id)nodeWithSource:weights:outputBiasTerms:outputScaleTerms:inputBiasTerms:inputScaleTerms:type:flags:;
@end
