@interface MPSCNNNeuronInstanceNormBufferC4 : MPSCNNKernel
- (void)encode:sourceBuffer:destinationBuffer:gammaBuffer:betaBuffer:paramBuffer:;
- (id)getGridSize:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
- (id)getPipelineState;
@end
