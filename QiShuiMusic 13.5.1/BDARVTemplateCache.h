@interface BDARVTemplateCache : NSObject
@property (nonatomic) NSMutableDictionary memCache;
@property (nonatomic) NSObject<OS_dispatch_semaphore> cacheLock;
- (void)clearMemory;
- (id)memCache;
- (void)setMemCache:;
- (void)storeTemplateData:forURL:enterFrom:completion:;
- (id)templateDataFromCacheForURL:;
- (id)init;
- (void)dealloc;
- (id)cacheLock;
- (void)setCacheLock:;
- (void).cxx_destruct;
+ (id)sharedCache;
@end
