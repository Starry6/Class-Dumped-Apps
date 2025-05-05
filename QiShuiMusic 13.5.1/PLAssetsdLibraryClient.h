@interface PLAssetsdLibraryClient : PLAssetsdBaseClient
@property (nonatomic) BOOL isOpened;
- (id)importFileSystemAssetsForce:withCompletionHandler:;
- (id)initWithQueue:proxyCreating:proxyGetter:sandboxExtensions:;
- (BOOL)synchronouslyUpdateThumbnailsForPhotos:assignNewIndex:forceRefresh:error:;
- (void)launchAssetsd;
- (BOOL)createPhotoLibraryDatabaseWithOptions:error:;
- (BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:options:error:;
- (long long)getCurrentModelVersion;
- (BOOL)openPhotoLibraryDatabaseWithoutProgressIfNeededWithOptions:error:;
- (id)transferAssetsWithUuids:fromLibraryURL:transferOptions:completionHandler:;
- (id)transferPersonsWithUuids:fromLibraryURL:transferOptions:completionHandler:;
- (BOOL)synchronouslyImportFileSystemAssetsForce:withError:;
- (void)recoverFromCrashIfNeeded;
- (void)automaticallyDeleteEmptyAlbumWithObjectID:completionHandler:;
- (BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:error:;
- (BOOL)_consumeSandboxExtensions:;
- (BOOL)synchronouslyRepairSingletonObjectsWithError:;
- (void).cxx_destruct;
- (id)_assetURIStringsForPhotos:;
- (BOOL)isLibraryReadyForImportWithError:;
- (void)publishRemoteChangeEvent:delayedSaveActionsDetail:completionHandler:;
- (id)upgradePhotoLibraryDatabaseWithOptions:completion:;
- (void)resetFaceAnalysisWithResetLevel:completionHandler:;
- (void)pendingEventsForRequest:completionHandler:;
- (BOOL)isOpened;
- (void)updateThumbnailsForPhotos:assignNewIndex:forceRefresh:completionHandler:;
- (id)getPhotoLibraryStoreXPCListenerEndpoint;
@end
