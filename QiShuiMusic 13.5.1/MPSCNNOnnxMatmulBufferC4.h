@interface MPSCNNOnnxMatmulBufferC4 : MPSCNNKernel
- (void)encode:state:input0:input1:output:param:;
- (id)getGridSize:;
- (id)initWithDevice:library:matmulType:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
