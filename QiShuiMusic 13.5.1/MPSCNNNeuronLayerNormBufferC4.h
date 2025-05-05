@interface MPSCNNNeuronLayerNormBufferC4 : MPSCNNKernel
- (void)encode:sourceBuffer:destinationBuffer:gammaBuffer:betaBuffer:paramBuffer:;
- (id)getGridSize:normType:;
- (id)initWithDevice:library:normType:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
