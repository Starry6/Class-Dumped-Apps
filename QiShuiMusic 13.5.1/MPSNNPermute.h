@interface MPSNNPermute : MPSCNNKernel
@property (nonatomic) {MPSNNDimensionOrder=[4Q]} dimensionOrder;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)resultStateForSourceImage:sourceStates:destinationImage:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (BOOL)appendBatchBarrier;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:;
- (BOOL)isResultStateReusedAcrossBatch;
- (id)temporaryResultStateForCommandBuffer:sourceImage:sourceStates:destinationImage:;
- (id)dimensionOrder;
- (void)encodeBatchToCommandBuffer:sourceImages:inStates:destinationImages:;
- (void)encodeBatchInternalToCommandEncoder:commandBuffer:sourceImages:inStates:destinationImages:srcSize:destSize:testClipRect:testMaxClipRect:;
- (void)encodeBatchToCommandEncoder:commandBuffer:sourceImages:inStates:destinationImages:;
- (void)setDimensionOrder:;
+ (id)libraryInfo:;
@end
