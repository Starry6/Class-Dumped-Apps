@interface IMRecentItemsList : NSObject
- (void)loadRecentHandwritingsAndStickersWithThumbnailSize:completion:;
- (void)loadRecentStickers:;
- (void)loadRecentHandwritingsWithThumbnailSize:completion:;
- (id)init;
- (void)dealloc;
- (long long)cacheSizeForDomain:;
- (void)dispatchCacheUpdateWithBlock:;
- (void)deleteRecentItemWithFileURL:GUID:forDomain:;
- (void)deleteRecentItemWithData:GUID:forDomain:;
- (void)deleteAllRecentItemsForDomain:;
- (void)deleteRecentsInFirstLaunch;
- (void)addRecentItemWithData:GUID:infoDictionary:forDomain:;
- (void)fetchRecentStickersWithCompletion:;
- (void)fetchRecentItemsForDomain:completion:;
- (void)_addRecentDataPayloadEntry:toDomain:;
- (void)addRecentItemAtFileURL:GUID:infoDictionary:forDomain:;
- (void)_removeRecentDataPayloadEntry:forDomain:;
- (void)_saveRecentDataPayloadEntryToDisk:forDomain:;
- (void)_removeRecentDataPayloadEntryFromDisk:forDomain:;
- (id)_buildLRUCacheUsingArray:forDomain:;
- (id)_recentsCacheForDomain:;
- (void)_updateRecentsCache:forDomain:;
- (id)_guidForFileURL:;
+ (id)sharedInstance;
@end
