@interface MPSCNNNeuronGeluBufferC4 : MPSCNNKernel
- (void)encode:sourceBuffer:destinationBuffer:inputShape:;
- (id)getGridSize:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
- (id)getPipelineState;
@end
