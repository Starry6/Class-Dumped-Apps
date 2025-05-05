@interface MPSCNNExpBufferC4 : MPSCNNKernel
- (void)encode:input0:output:params:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
- (id)getPipelineState;
@end
