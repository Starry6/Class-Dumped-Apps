@interface MPSCNNNeuronLayerNorm : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage:destinationImage:gammaBuffer:betaBuffer:epsParam:;
- (id)initWithDevice:library:normType:width:num:;
- (void).cxx_destruct;
@end
