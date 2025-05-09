@interface PLThumbnailManager : PLThumbnailManagerCore
@property (nonatomic) @ observerToken;
- (BOOL)resetThumbnailsForced:isMissingTables:inContext:;
- (void)setThumbnailsForAsset:withImage:;
- (BOOL)hasMissingThumbnailsInLibrary:;
- (id)thumbnailJPEGPathForPhoto:;
- (BOOL)_thumbnailLoadingAssetIsHiddenOrTrashed:;
- (id)_rebuildThumbnailsQueue;
- (void)removeRebuildThumbnailsRequest:;
- (void)dealloc;
- (id)imageTableForFormat:readOnly:;
- (void)reStampConfigAsNeedingTableThumbMigration;
- (void)_recordRebuildThumbnailsAttempt;
- (BOOL)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:thumbnailIndex:image:assetUUID:;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:withToken:;
- (id)dataForPhoto:format:allowPlaceholder:width:height:bytesPerRow:dataWidth:dataHeight:imageDataOffset:;
- (void)continueRebuildingTableThumbsInLibrary:;
- (id)imageTableForFormat:;
- (void)rebuildAllMissingThumbnailsInLibrary:;
- (void)_removeMasterThumbDirectories;
- (void)removeObsoleteMetadata;
- (BOOL)wantsTableOnlyRebuild;
- (id)_contextForConfigurationChanges;
- (void)preheatThumbnailDataWithFormat:thumbnailIndexes:;
- (long long)_rebuildAssetThumbnailsWithLimit:library:error:;
- (id)placeholderDataForFormat:photoImageSize:width:height:bytesPerRow:dataWidth:dataHeight:imageDataOffset:;
- (void)deleteThumbnailsWithIdentifier:orIndex:uuid:;
- (void)discardCachedThumbnailDownscalerContexts;
- (void)setObserverToken:;
- (BOOL)hasExceededRebuildThumbnailRequestLimit;
- (id)thumbManagerForFormatID:readOnly:;
- (id)_tableDescriptions;
- (void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:;
- (BOOL)_performUncompressedTableDownscaleIntoDatas:image:assetUUID:;
- (void).cxx_destruct;
- (id)indexStatisticsForLibrary:;
- (BOOL)resetThumbnailsWithResetType:deferHintChanges:inContext:;
- (BOOL)isRebuildingThumbnails;
- (id)thumbnailRebuildIndicatorPath;
- (BOOL)hasRebuildThumbnailsRequest;
- (id)thumbManagerForFormatID:;
- (BOOL)setThumbnailsForThumbIdentifier:thumbnailIndex:assetUUID:kind:extension:withImage:;
- (id)newSlowPersistenceManagers;
- (long long)_diskFootprintOfTableThumbnailTables;
- (id)newImageForAsset:format:;
- (id)initWithPhotoLibraryPathManager:storeFromMigration:;
- (id)_dataForAsset:format:width:height:bytesPerRow:dataWidth:dataHeight:imageDataOffset:imageDataFormat:;
- (void)addRebuildThumbnailsRequest;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:;
- (id)observerToken;
- (unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:;
- (id)_missingThumbnailPredicate;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
+ (id)thumbnailIdentifierWithAssetUUID:directory:filename:bundleScope:pathManager:;
+ (id)masterThumbFilename;
@end
