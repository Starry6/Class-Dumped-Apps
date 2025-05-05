@interface GEONavdCacheDBReader : GEODBReader
- (void)_cacheRowIdsOfEntriesBeforeTimeStamp:withHandler:;
- (void)dealloc;
- (void)_allCacheEntriesWithHandler:;
- (void)_openDB;
- (void)_cacheEntryForNextRefreshWithHandler:;
- (void)_cacheKeysForHash:withHandler:;
- (long long)_numberOfEntries;
- (void)_openDBIfNotAlreadyOpen;
- (void)_cacheEntryWithRowId:handler:;
- (void)_cacheEntriesForHash:withHandler:;
- (void)_closeDB;
- (void)_cacheEntriesBeforeTimeStamp:withHandler:;
@end
