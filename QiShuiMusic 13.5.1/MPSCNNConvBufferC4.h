@interface MPSCNNConvBufferC4 : MPSCNNKernel
- (void)encode:state:input:output:param:weight:bias:threads:dispatchThreads:ifPrint:;
- (void)encodeImg2Col:input:output:param:bias:trans_input:trans_output:trans_weight:;
- (id)getGridSize:param:;
- (id)getPipelineState:ow:strideX:strideY:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
