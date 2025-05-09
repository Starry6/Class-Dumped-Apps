@interface MPSCNNKernel : MPSKernel
@property (nonatomic) {?=qqq} offset;
@property (nonatomic) {?={?=QQQ}{?=QQQ}} clipRect;
@property (nonatomic) Q destinationFeatureChannelOffset;
@property (nonatomic) Q sourceFeatureChannelOffset;
@property (nonatomic) Q sourceFeatureChannelMaxCount;
@property (nonatomic) Q edgeMode;
@property (nonatomic) Q kernelWidth;
@property (nonatomic) Q kernelHeight;
@property (nonatomic) Q strideInPixelsX;
@property (nonatomic) Q strideInPixelsY;
@property (nonatomic) Q dilationRateX;
@property (nonatomic) Q dilationRateY;
@property (nonatomic) BOOL isBackwards;
@property (nonatomic) BOOL isStateModified;
@property (nonatomic) <MPSNNPadding> padding;
@property (nonatomic) <MPSImageAllocator> destinationImageAllocator;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)setOffset:;
- (id)init;
- (id)sourceRegionForDestinationSize:;
- (unsigned long long)dilationRateX;
- (void)dealloc;
- (id)resultStateForSourceImage:sourceStates:destinationImage:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:kernelOffset:;
- (id)clipRect;
- (id)resultStateBatchForSourceImage:sourceStates:destinationImage:;
- (id)temporaryResultStateBatchForCommandBuffer:sourceImage:sourceStates:destinationImage:;
- (id)encodeToCommandBuffer:sourceImage:destinationState:destinationStateIsTemporary:;
- (id)debugDescription;
- (id)offset;
- (unsigned long long)strideInPixelsY;
- (void)copyToGradientState:sourceImage:sourceStates:destinationImage:;
- (void)setPadding:;
- (void)encodeWithCoder:;
- (unsigned long long)strideInPixelsX;
- (void)encodeToCommandBuffer:sourceImage:destinationState:destinationImage:;
- (BOOL)pluginSupportsBatchEncode;
- (unsigned long long)kernelHeight;
- (id)initWithDevice:;
- (void)setClipRect:;
- (id)padding;
- (void)encodeBatchToCommandBuffer:sourceImages:destinationStates:destinationImages:;
- (BOOL)appendBatchBarrier;
- (id)encodeBatchToCommandBuffer:sourceImages:destinationStates:destinationStateIsTemporary:;
- (unsigned long long)batchEncodingStorageSizeForSourceImage:sourceStates:destinationImage:;
- (unsigned long long)encodingStorageSizeForSourceImage:sourceStates:destinationImage:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:;
- (BOOL)isResultStateReusedAcrossBatch;
- (unsigned long long)dilationRateY;
- (unsigned long long)kernelWidth;
- (id)temporaryResultStateForCommandBuffer:sourceImage:sourceStates:destinationImage:;
- (unsigned long long)edgeMode;
- (BOOL)setPlugin:;
- (id)plugin;
- (void)encodeBatchToCommandBuffer:sourceImages:destinationImages:;
- (void)setEdgeMode:;
- (void)setDestinationFeatureChannelOffset:;
- (void)encodeToCommandBuffer:sourceImage:destinationImage:;
- (id)encodeBatchToCommandBuffer:sourceImages:;
- (void)setDestinationImageAllocator:;
- (id)destinationImageAllocator;
- (void)encodeToCommandEncoder:commandBuffer:sourceImage:destinationImage:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:;
- (BOOL)filterHandlesPlugin;
- (BOOL)isStateModified;
- (id)encodeToCommandBuffer:sourceImage:inState:;
- (id)encodeBatchToCommandBuffer:sourceImages:inStates:;
- (void)encodeToCommandBuffer:sourceImage:inState:destinationImage:;
- (void)encodeBatchToCommandBuffer:sourceImages:inStates:destinationImages:;
- (id)encodeToCommandBuffer:sourceImage:sourceState:destinationState:destinationStateIsTemporary:;
- (id)encodeBatchToCommandBuffer:sourceImages:sourceStates:destinationStates:destinationStateIsTemporary:;
- (void)encodeBatchToCommandEncoder:commandBuffer:sourceImages:inStates:destinationImages:;
- (id)encodeToCommandBuffer:sourceImage:;
- (unsigned long long)destinationFeatureChannelOffset;
- (BOOL)isBackwards;
- (void)setSourceFeatureChannelOffset:;
- (void)setSourceFeatureChannelMaxCount:;
- (id)encodeToCommandEncoder:commandBuffer:sourceImage:;
- (void)encodeToCommandEncoder:commandBuffer:sourceImage:destinationState:destinationImage:;
- (id)destinationImageWithCommandBuffer:sourceImage:inState:;
- (id)encodeToCommandEncoder:commandBuffer:sourceImage:inState:;
- (id)encodeToCommandEncoder:commandBuffer:sourceImage:sourceState:destinationState:destinationStateIsTemporary:;
- (id)encodeToCommandEncoder:commandBuffer:sourceImage:destinationState:destinationStateIsTemporary:;
- (void)encodeToCommandEncoder:commandBuffer:sourceImage:inState:destinationImage:;
- (void)encodeInternalToCommputeEncoder:commandBuffer:sourceImage:inState:destinationImage:subBatchIndex:batchSize:clipRect:shouldHandleCompoundImageNatively:;
- (void)encodeToCommandEncoder:commandBuffer:sourceImage:inState:destinationImage:subBatchIndex:batchSize:;
- (void)encodeToCommandBuffer:sourceImage:inState:destinationImage:subBatchIndex:batchSize:;
- (id)encodeBatchToCommandEncoder:commandBuffer:sourceImages:;
- (void)encodeBatchToCommandEncoder:commandBuffer:sourceImages:destinationImages:;
- (void)encodeBatchToCommandEncoder:commandBuffer:sourceImages:destinationStates:destinationImages:;
- (id)encodeBatchToCommandEncoder:commandBuffer:sourceImages:inStates:;
- (id)encodeBatchToCommandEncoder:commandBuffer:sourceImages:sourceStates:destinationStates:destinationStateIsTemporary:;
- (id)encodeBatchToCommandEncoder:commandBuffer:sourceImages:destinationStates:destinationStateIsTemporary:;
- (void)encodeInternalBatchToCommandEncoder:commandBuffer:sourceImages:inStates:destinationImages:clipRect:;
- (id)sourcePositionOfTopLeftCornerOfFilterWindow;
- (unsigned long long)sourceFeatureChannelOffset;
- (unsigned long long)sourceFeatureChannelMaxCount;
@end
