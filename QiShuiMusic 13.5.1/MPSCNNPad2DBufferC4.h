@interface MPSCNNPad2DBufferC4 : MPSCNNKernel
- (id)initWithDevice:library:padType:;
- (void)encode:input:output:param:;
- (id)getGridSize:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
