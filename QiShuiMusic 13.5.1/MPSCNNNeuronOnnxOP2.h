@interface MPSCNNNeuronOnnxOP2 : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage0:sourceImage1:destinationImage:params:;
- (id)initWithDevice:library:broadcast:isCommon:;
- (void).cxx_destruct;
@end
