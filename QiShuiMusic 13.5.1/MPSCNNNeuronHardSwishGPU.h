@interface MPSCNNNeuronHardSwishGPU : MPSCNNKernel
- (id)initWithDevice:library:type:;
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:sourceImage:destinationImage:;
@end
