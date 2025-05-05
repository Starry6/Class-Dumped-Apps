@interface MPSCNNNeuronBNBufferC4 : MPSCNNKernel
- (void)encode:sourceBuffer:destinationBuffer:gamma:beta:reluPara:;
- (id)getGridSize:outh:outw:outc:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
- (id)getPipelineState;
@end
