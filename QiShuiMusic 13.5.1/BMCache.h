@interface BMCache : NSObject
- (void)removeCachedObjectForKey:;
- (void)removeCachedObjectForKey:performWhileLocked:;
- (id)cachedObjectWithKey:;
- (void).cxx_destruct;
- (void)pruneCacheWithBlock:completion:;
- (id)_initWithMapTable:fallback:;
- (id)cachedObjectWithKey:missHandler:;
+ (id)strongCacheWithFallbackCache:;
+ (id)weakCache;
+ (id)strongCache;
@end
