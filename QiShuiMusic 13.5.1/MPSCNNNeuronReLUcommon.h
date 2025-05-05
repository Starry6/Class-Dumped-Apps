@interface MPSCNNNeuronReLUcommon : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage:destinationImage:reluType:reluMax:reluSlope:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
