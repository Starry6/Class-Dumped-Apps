@interface MPSCNNBinaryCrossEntropyBufferC4 : MPSCNNKernel
- (void)encode:label:labelC4:predictions:output:param_convert:param_loss:;
- (void)encodeToCommandBuffer:label:labelC4:predictions:output:param_convert:param_loss:;
- (id)initWithDevice:library:doSigmoid:;
- (void).cxx_destruct;
@end
