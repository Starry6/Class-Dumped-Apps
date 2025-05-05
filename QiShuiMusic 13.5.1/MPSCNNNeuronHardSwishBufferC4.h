@interface MPSCNNNeuronHardSwishBufferC4 : MPSCNNKernel
- (void)encode:sourceBuffer:destinationBuffer:params:;
- (id)getGridSize:;
- (id)initWithDevice:library:type:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
