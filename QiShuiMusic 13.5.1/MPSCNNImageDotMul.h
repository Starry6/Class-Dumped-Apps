@interface MPSCNNImageDotMul : MPSCNNKernel
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:sourceImage:destinationImage:;
- (id)initWithDevice:library:;
@end
