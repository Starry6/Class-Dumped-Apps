@interface VNImageBufferCache : NSObject
- (id)init;
- (void)dealloc;
- (id)cachedBufferWithKey:;
- (void)cacheBuffer:forCacheKey:;
- (void)removeCachedBufferWithKey:;
- (void).cxx_destruct;
- (void)purgeCacheRepresentationsForOriginalBuffer:;
+ (id)cacheKeyWithBufferFormat:width:height:cropRect:;
+ (id)cacheKeyWithBufferFormat:width:height:;
@end
