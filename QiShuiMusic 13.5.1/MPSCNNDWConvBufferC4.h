@interface MPSCNNDWConvBufferC4 : MPSCNNKernel
- (id)getGridSize:outh:outw:outcdiv4:;
- (id)initWithDevice:library:dw_type:;
- (void)encode:input:output:param:weight:bias:threads:dispatchThreads:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
