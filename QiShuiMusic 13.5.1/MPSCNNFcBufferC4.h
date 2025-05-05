@interface MPSCNNFcBufferC4 : MPSCNNKernel
- (void)encode:input:output:param:weight:bias:;
- (id)getGridSize:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
- (id)getPipelineState;
@end
