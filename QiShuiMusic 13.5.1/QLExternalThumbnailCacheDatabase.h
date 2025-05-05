@interface QLExternalThumbnailCacheDatabase : NSObject
@property (nonatomic) NSURL databaseURL;
@property (nonatomic) PQLConnection db;
- (id)db;
- (id)databaseURL;
- (id)initWithURL:;
- (BOOL)open;
- (void)close;
- (void).cxx_destruct;
- (void)_closeDatabaseOnItsQueue:;
- (void)logError:onDB:statement:;
- (id)_openDatabaseAtURL:;
- (id)_createDatabaseIfNeededAtURL:error:;
- (id)_setupDatabaseTablesIfNeeded:error:;
- (BOOL)insertOrReplaceThumbnailRepresentingFPItem:size:modificationDate:fileExtension:error:;
- (id)deleteOldestThumbnailsToFreeAtLeastSpace:error:;
- (BOOL)deleteOldestThumbnail;
- (unsigned long long)totalThumbnailsSize;
- (unsigned long long)totalThumbnailCount;
- (id)pathExtensionForItem:error:;
- (id)oldestThumbnailsToFreeAtLeastSpace:error:;
- (BOOL)removeAllThumbnails:;
- (id)whereClauseForItem:;
@end
