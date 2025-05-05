@interface MPSCNNReshapeBufferC4 : MPSCNNKernel
- (id)initWithDevice:library:is_nchw:;
- (void)encode:input:output:params:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
