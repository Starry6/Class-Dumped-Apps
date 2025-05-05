@interface SSDatabaseCache : NSObject
@property (nonatomic) Q maximumInlineBlobSize;
- (void)dealloc;
- (id)setData:expiring:retiring:lookupKey:userInfo:;
- (id)cacheEntryProperties:forLookupKeys:;
- (BOOL)_setupDatabase;
- (void)setMaximumInlineBlobSize:;
- (void)clear;
- (int)clearRetiredData;
- (id)initWithIdentifier:cacheName:;
- (unsigned long long)maximumInlineBlobSize;
- (id)statistics;
- (id)description;
- (void)clearCacheForLookupKey:;
- (id)initWithIdentifier:cacheName:database:cacheEntryClass:;
- (id)cacheEntryForLookupKey:;
@end
