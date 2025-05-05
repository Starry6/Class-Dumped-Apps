@interface MPSCNNReduce : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage:destinationImage:channel_type:param:;
- (id)initWithDevice:library:reduce_type:channel_type:array_size:;
- (void).cxx_destruct;
@end
