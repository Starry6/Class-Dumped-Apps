@interface MPSCNNEltwise : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage:sourceImage2:destinationImage:;
- (id)initWithDevice:library:relu:;
- (void).cxx_destruct;
@end
