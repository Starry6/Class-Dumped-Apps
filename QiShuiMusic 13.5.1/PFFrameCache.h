@interface PFFrameCache : NSObject
@property (nonatomic) q cacheStrategy;
- (void)dealloc;
- (void)_invalidateCache;
- (void).cxx_destruct;
- (void)_updateIfNeeded;
- (id)initWithImageSource:;
- (id)initWithImageSource:cachingStrategy:;
- (id)initWithImageSource:cachingStrategy:useGlobalDecodeQueue:;
- (long long)cacheStrategy;
- (void)setCacheStrategy:;
- (id)frameAtIndex:;
- (id)frameAtIndexIfReady:;
- (id)_frameAtIndex:allowLazy:;
- (void)_invalidateCacheSize;
- (void)_updateDesiredCacheSize;
- (void)_updateFrameCache;
- (void)_frameGenerationQueue_cacheFrameAtIndex:;
- (void)_frameGenerationQueue_updateFrameCache;
- (id)_createPredrawnImage:;
+ (id)sharedFrameGenerationQueue;
@end
