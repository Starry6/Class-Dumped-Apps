@interface MPSCNNTransposeBufferC4 : MPSCNNKernel
- (void)encode:input:output:param:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
- (id)getPipelineState;
@end
