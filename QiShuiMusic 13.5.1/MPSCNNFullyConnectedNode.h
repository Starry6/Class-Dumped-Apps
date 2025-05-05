@interface MPSCNNFullyConnectedNode : MPSCNNConvolutionNode
- (id)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:weights:;
+ (id)nodeWithSource:weights:;
@end
