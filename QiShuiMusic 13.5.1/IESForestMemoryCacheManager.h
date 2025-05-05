@interface IESForestMemoryCacheManager : NSObject
@property (nonatomic) IESForestMemoryCache generalMemoryCache;
@property (nonatomic) IESForestMemoryCache preloadMemoryCache;
- (BOOL)cacheResponse:withRequest:;
- (void)clearCacheForRequest:;
- (id)generalMemoryCache;
- (id)preloadMemoryCache;
- (void)setGeneralMemoryCache:;
- (void)setPreloadMemoryCache:;
- (void)clearCaches;
- (id)init;
- (void).cxx_destruct;
- (id)responseForRequest:;
+ (void)updateCacheLimit:;
+ (void)updatePreloadCacheLimit:;
+ (id)sharedInstance;
@end
