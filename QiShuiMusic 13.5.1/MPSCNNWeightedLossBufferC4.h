@interface MPSCNNWeightedLossBufferC4 : MPSCNNKernel
- (void)encode:input0:input1:output:coefs:param_loss:;
- (void)encodeToCommandBuffer:input0:input1:output:coefs:param_loss:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
