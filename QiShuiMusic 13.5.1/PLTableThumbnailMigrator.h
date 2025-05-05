@interface PLTableThumbnailMigrator : NSObject
- (id)init;
- (void)rebuildTableThumbForAsset:inLibrary:toTableFormats:;
- (void)migrateAllAssetsPendingTableThumbRebuildInLibrary:toTableFormats:limit:;
- (id)_bulkMigratorQueue;
- (void).cxx_destruct;
- (void)_rebuildTablesForBatch:inLibrary:toFormats:;
+ (id)_fetchRequstForAssetsPendingTableRebuildWithLimit:excludingAssetIDs:;
+ (id)_nextBatchOfItemsPendingTableRebuildInLibrary:excludingAssetIDs:sourceObjects:;
+ (unsigned long long)countOfAssetsPendingTableThumbRebuildInLibrary:;
+ (id)_workItemForAsset:library:thumbnailManager:;
+ (BOOL)_writeCompressedTableThumbsFromMasterThumb:uuid:formats:toIndex:thumbnailManager:;
+ (id)_predicateForAssetsPendingTableRebuild;
@end
