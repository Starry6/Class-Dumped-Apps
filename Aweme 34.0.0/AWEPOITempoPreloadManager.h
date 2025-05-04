@interface AWEPOITempoPreloadManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMutableDictionary urlToKey;
@property (nonatomic) NSMutableDictionary memCache;
- (id)cacheKeyWithURL:;
- (id)memCache;
- (void)setMemCache:;
- (void)cachePreloadData:templateURL:;
- (void)preloadTempo:level:engine:;
- (id)urlToKey;
- (void)setObject:forCacheKey:;
- (id)objectForCacheKey:;
- (void)setUrlToKey:;
- (id)init;
- (void)setQueue:;
- (void).cxx_destruct;
- (id)queue;
+ (id)sharedManager;
@end
