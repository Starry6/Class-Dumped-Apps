@interface MPSCNNNeuronReluBufferC4 : MPSCNNKernel
- (void)encode:sourceBuffer:destinationBuffer:inputShape:reluType:reluMax:reluSlope:threads:dispatchThreads:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
- (id)getPipelineState;
@end
