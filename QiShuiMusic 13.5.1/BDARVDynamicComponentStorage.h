@interface BDARVDynamicComponentStorage : NSObject
@property (nonatomic) NSMutableDictionary memoryCache;
@property (nonatomic) NSObject<OS_dispatch_semaphore> cacheLock;
- (id)dataCacheForKey:;
- (void)saveData:uniqueKey:;
- (id)init;
- (id)cacheLock;
- (void)setCacheLock:;
- (id)memoryCache;
- (void).cxx_destruct;
- (void)clearMemoryCache;
- (void)setMemoryCache:;
+ (id)sharedStorage;
@end
