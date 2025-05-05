@interface MPSCNNSplit2Way : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage:destinationImage:destinationImage2:inputc:outputc1:outputc2:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
