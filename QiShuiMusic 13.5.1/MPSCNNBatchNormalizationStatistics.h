@interface MPSCNNBatchNormalizationStatistics : MPSCNNKernel
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:device:;
- (id)initWithDevice:;
- (BOOL)appendBatchBarrier;
- (BOOL)isResultStateReusedAcrossBatch;
- (void)encodeBatchToCommandBuffer:sourceImages:batchNormalizationState:;
+ (id)libraryInfo:;
@end
