@interface MPSCNNUpsample : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage:destinationImage:params:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
