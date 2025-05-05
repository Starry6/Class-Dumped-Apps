@interface MPSCommandBufferImageCache : NSObject
@property (nonatomic) <MTLCommandBuffer> commandBuffer;
@property (nonatomic) Q batchSizeHint;
@property (nonatomic) <MPSHeapProvider> heapProvider;
- (id)commandBuffer;
- (void)dealloc;
- (void)setBatchSizeHint:;
- (unsigned long long)batchSizeHint;
- (id)newHeapBlock:protections:;
- (id)debugDescription;
- (id)initWithCommandBuffer:;
- (void)addHandlerToCommandBuffer:;
- (id)heapProvider;
- (void)setHeapProvider:;
- (void)releaseHeapBlock:heapProvider:;
@end
