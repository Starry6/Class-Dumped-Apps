@interface MPSCNNEltwiseBufferC4 : MPSCNNKernel
- (void)encode:input0:input1:outputs:params:threads:dispatchThreads:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
- (id)getPipelineState;
@end
