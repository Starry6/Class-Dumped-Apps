@interface MPSCNNDepth2Space : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage:destinationImage:outChannel:bufferSrcChannel:bufferBlockSize:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
