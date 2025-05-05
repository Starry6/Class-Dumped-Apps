@interface ICCache : NSCache
@property (nonatomic) NSObject<OS_dispatch_source> memoryWarningEventSource;
@property (nonatomic) NSMutableSet mutableKeys;
@property (nonatomic) NSObject<OS_dispatch_queue> mutableKeysAccessQueue;
@property (nonatomic) NSSet allKeys;
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (id)allKeys;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
- (void)setObject:forKey:cost:;
- (void)registerForMemoryWarnings;
- (void)unregisterForMemoryWarnings;
- (void)receivedMemoryWarning;
- (id)memoryWarningEventSource;
- (void)setMemoryWarningEventSource:;
- (void)removeObjectsWithKeyContainingString:;
- (id)mutableKeys;
- (void)setMutableKeys:;
- (id)mutableKeysAccessQueue;
- (void)setMutableKeysAccessQueue:;
+ (void)purgeAllCaches;
+ (id)cacheCollection;
@end
