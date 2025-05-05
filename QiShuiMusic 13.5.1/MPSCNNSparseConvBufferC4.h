@interface MPSCNNSparseConvBufferC4 : MPSCNNKernel
- (void)encode:input:output:param:weight:bias:offset:index:;
- (void)encode:input:output:param:weight:bias:pos:;
- (id)getGridSize:;
- (id)initWithDevice:library:halfconv:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
