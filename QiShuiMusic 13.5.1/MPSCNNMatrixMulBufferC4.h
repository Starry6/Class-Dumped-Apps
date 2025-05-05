@interface MPSCNNMatrixMulBufferC4 : MPSCNNKernel
- (void)encode:input0:input1:output:param:;
- (void)encode:input:output:param:;
- (void)encodeToCommandBuffer:input0:input1:output:param:;
- (void)encodeToCommandBuffer:input:output:param:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
