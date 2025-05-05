@interface MPSCNNSparseDepthwiseConvBufferC4 : MPSCNNKernel
- (id)initWithDevice:library:dw_type:;
- (void)encode:input:output:param:weight:bias:pos:;
- (id)getGridSize:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
