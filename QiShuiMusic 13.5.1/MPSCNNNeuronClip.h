@interface MPSCNNNeuronClip : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage:destinationImage:clipParam:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
