@interface MPSCNNDeConvBufferC4 : MPSCNNKernel
- (void)encode:input:output:weight:bias:param:;
- (id)initWithDevice:library:isDepthwise:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
