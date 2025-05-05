@interface MPSCNNShuffleNetBufferC4 : MPSCNNKernel
- (void)encode:input0:input1:output0:output1:params:;
- (id)getGridSize:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
- (id)getPipelineState;
@end
