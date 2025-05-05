@interface MPSCNNBatchNorm : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage:destinationImage:gamma:beta:reluType:reluMax:reluSlope:reluFlag:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
