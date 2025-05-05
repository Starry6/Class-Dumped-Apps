@interface MPSCNNNeuronPReLUNode : MPSCNNNeuronNode
- (id)descriptor;
- (void)dealloc;
- (id)initWithSource:aData:;
+ (id)nodeWithSource:aData:;
@end
