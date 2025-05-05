@interface MPSCNNGridSampleBufferC4 : MPSCNNKernel
- (void)encode:input:grid:output:param:;
- (id)getGridSize:;
- (id)initWithDevice:library:mode:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
