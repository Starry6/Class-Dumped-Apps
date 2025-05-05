@interface MPSCNNPoolingMax : MPSCNNPooling
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)resultStateForSourceImage:sourceStates:destinationImage:;
- (id)initWithDevice:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:;
- (BOOL)isResultStateReusedAcrossBatch;
- (id)temporaryResultStateForCommandBuffer:sourceImage:sourceStates:destinationImage:;
- (id)newPlugin;
@end
