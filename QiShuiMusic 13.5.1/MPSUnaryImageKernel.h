@interface MPSUnaryImageKernel : MPSKernel
@property (nonatomic) {?=qqq} offset;
@property (nonatomic) {?={?=QQQ}{?=QQQ}} clipRect;
@property (nonatomic) Q edgeMode;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)setOffset:;
- (id)init;
- (id)sourceRegionForDestinationSize:;
- (id)clipRect;
- (id)debugDescription;
- (id)offset;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setClipRect:;
- (void)encodeToCommandBuffer:sourceTexture:destinationTexture:;
- (unsigned long long)edgeMode;
- (void)setEdgeMode:;
- (void)encodeToCommandBuffer:sourceImage:destinationImage:;
- (BOOL)encodeToCommandBuffer:inPlaceTexture:fallbackCopyAllocator:;
- (void)encodeToCommandEncoder:commandBuffer:sources:destination:kernelDAGObject:;
- (void)encodeToCommandBuffer:sources:destination:kernelDAGObject:;
- (void)encodeToCommandEncoder:commandBuffer:sourceTexture:destinationTexture:;
- (void)encodeToCommandEncoder:commandBuffer:sourceImage:destinationImage:;
@end
