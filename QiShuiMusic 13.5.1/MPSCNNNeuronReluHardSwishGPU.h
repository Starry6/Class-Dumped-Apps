@interface MPSCNNNeuronReluHardSwishGPU : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage:destinationImage:maxVal:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
