@interface BWDeferredContainerPixelBufferPool : BWPixelBufferPool
@property (nonatomic) BWVideoFormat videoFormat;
@property (nonatomic) ^{__CVPixelBufferPool=} cvPixelBufferPool;
@property (nonatomic) ^{__CFDictionary=} cvPixelBufferPoolAuxAttributes;
- (void)setCapacity:;
- (void)flushWithCompletionHandler:;
- (id)videoFormat;
- (void)dealloc;
- (void)enumerateSurfacesUsingBlock:;
- (void)flush;
- (id)cvPixelBufferPoolAuxAttributes;
- (id)initWithVideoFormat:capacity:name:;
- (id)newPixelBuffer;
- (id)initWithVideoFormat:capacity:name:memoryPool:;
- (id)initWithVideoFormat:capacity:name:memoryPool:additionalPixelBufferAttributes:;
- (id)initWithVideoFormat:capacity:name:clientProvidesPool:memoryPool:providesBackPressure:;
- (void)flushToMinimumCapacity:;
- (void)preallocateWithCompletionHandler:;
- (id)initWithAttributes:capacity:name:;
- (void)setCVPixelBufferPool:attributes:;
- (int)preallocate;
- (id)cvPixelBufferPool;
- (void)prefetchWithCompletionHandler:;
@end
