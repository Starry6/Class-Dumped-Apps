@interface AWENetworkOfflineCache : NSObject
+ (void)removeAllCaches;
+ (id)liteCache;
+ (void)saveJSONResponse:forCacheKey:;
+ (void)fetchCachedJSONResponseForKey:maxAge:completion:;
+ (void)setMemoryLimit:diskLimit:;
+ (id)cacheQueue;
+ (id)mainCache;
@end
