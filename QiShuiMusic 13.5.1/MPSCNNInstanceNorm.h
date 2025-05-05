@interface MPSCNNInstanceNorm : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage:meanImage:varImage:destinationImage:affine:eps:gamma:beta:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
