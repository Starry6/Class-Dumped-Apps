@interface MPSCNNSescaleBufferC4 : MPSCNNKernel
- (void)encode:input0:input1:outputs:params:;
- (id)getGridSize:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
- (id)getPipelineState;
@end
