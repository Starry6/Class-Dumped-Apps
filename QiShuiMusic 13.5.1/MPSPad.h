@interface MPSPad : MPSCNNKernel
- (id)initWithDevice:before:after:offset:;
- (id)initWithDevice:library:param:;
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:sourceImage:destinationImage:;
@end
