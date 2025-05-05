@interface MPSCNNReduceBufferC4 : MPSCNNKernel
- (void)encode:state:input:output:param:;
- (id)getPipelineState:;
- (id)initWithDevice:library:reduce_type:;
- (void).cxx_destruct;
@end
