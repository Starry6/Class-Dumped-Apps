@interface MPSCNNPoolingBufferC4 : MPSCNNKernel
- (void)encode:state:input:output:param:;
- (id)getGridSize:;
- (id)getGridSizeGlobal:;
- (id)getPipelineState:global:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
