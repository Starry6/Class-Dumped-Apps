@interface SSDatabaseCacheEntry : SSSQLiteEntity
- (void)dealloc;
- (id)description;
- (id)initWithLookupKey:inDatabase:;
- (void)setPersistentCache:;
- (id)dataBlob:;
+ (id)databaseTable;
+ (id)allPropertyKeys;
+ (unsigned long long)_fetchPersistentID:inDatabase:;
@end
