@interface SFCache : NSObject
- (id)init;
- (id)initWithPolicy:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (id)initWithPolicy:timeToLive:size:;
- (id)_entryForKey:;
- (void)_insertCacheEntry:forKey:;
- (void)_removeCacheEntryWithKey:;
- (id)entryForKey:;
- (void)addEntry:forKey:;
@end
