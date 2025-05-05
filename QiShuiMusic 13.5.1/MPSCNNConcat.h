@interface MPSCNNConcat : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage:sourceImage2:destinationImage:params:;
- (void)encodeToCommandBuffer:sourceImage:sourceImage2:sourceImage3:sourceImage4:destinationImage:params:;
- (id)initWithDevice:library:concatType:;
- (void).cxx_destruct;
@end
