@interface PLAssetsdSyncService : PLAbstractLibraryServicesManagerService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithLibraryServicesManager:;
- (void).cxx_destruct;
- (void)updateRestoredAssetWithUUID:paths:fixAddedDate:;
- (void)finalizeOTARestoreRecreatingAlbums:;
- (void)_finalizeOTARestoreEndedAndRecreateAlbums:;
- (void)_updateRestoredAssetWithUUID:paths:fixAddedDate:;
- (void)_updatePendingCountForMissingAsset:inLibrary:;
- (void)_linkPathsAside:;
- (void)_recoverAsideFiles:;
- (void)_cleanupAlbumMetadataAsideFilesAfterRestore;
- (id)_fileRestoreExclusionPaths;
- (id)_readRestoreAlbumMetadataForAlbum:;
- (void)_addAsset:toAlbumsForUUID:inLibrary:;
@end
