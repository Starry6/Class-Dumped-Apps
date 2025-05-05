@interface IESIMNetworkOfflineCache : NSObject
+ (void)removeAllCaches;
+ (void)fetchCachedJSONResponseForKey:maxAge:completion:;
+ (id)liteCache;
+ (void)saveJSONResponse:forCacheKey:;
+ (void)setMemoryLimit:diskLimit:;
+ (id)cacheQueue;
+ (id)mainCache;
@end
