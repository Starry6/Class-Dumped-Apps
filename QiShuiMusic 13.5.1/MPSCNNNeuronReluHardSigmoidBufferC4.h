@interface MPSCNNNeuronReluHardSigmoidBufferC4 : MPSCNNKernel
- (void)encode:sourceBuffer:destinationBuffer:params:;
- (id)getGridSize:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
- (id)getPipelineState;
@end
