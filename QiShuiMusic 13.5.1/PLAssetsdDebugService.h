@interface PLAssetsdDebugService : PLAbstractLibraryServicesManagerService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_persistentStoreCoordinator;
- (void)statusWithReply:;
- (void)clearPrefetchState;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:;
- (void).cxx_destruct;
- (void)resetDupesAnalysis;
- (void)asynchronousUnloadImageFilesForAssetWithObjectURI:minimumFormat:reply:;
- (void)identifyAssetsWithInconsistentCloudState;
- (void)recoverAssetsInInconsistentCloudState;
- (void)momentGenerationStatusWithReply:;
- (void)rebuildMomentsDeletingExistingMoments:reply:;
- (void)rebuildHighlightsDeletingExistingHighlights:reply:;
- (void)dumpMetadataForMomentsToPath:reply:;
- (void)dumpMomentsMetadataToPath:reply:;
- (void)deferredLogDumpWithFormat:reply:;
- (void)dropSearchIndexWithReply:;
- (void)setSearchIndexPaused:reason:reply:;
- (void)rebuildSearchIndexWithReply:;
- (void)rebuildCloudFeedWithReply:;
- (void)rebuildAllThumbnails;
- (void)rebuildTableThumbsWithReply:;
- (void)getXPCTransactionStatusWithReply:;
- (void)getTaskConstraintStatusWithReply:;
- (void)getCPLStateForDebug:withReply:;
- (void)enqueuePrefetch;
- (void)revertToOriginalWithObjectURI:reply:;
- (void)debugSidecarURLsWithObjectURI:reply:;
- (void)pruneAssetsWithUUID:resourceTypes:reply:;
- (void)prefetchResourcesForMemories:reply:;
- (void)prefetchResourcesForHighlights:reply:;
- (void)prefetchResourcesWithMode:reply:;
- (void)processRecentHighlightsWithReply:;
- (void)processUnprocessedMomentLocationsWithReply:;
- (void)updateHighlightTitlesWithReply:;
- (void)cleanupEmptyHighlightsWithReply:;
- (void)privateDownloadCloudPhotoLibraryAsset:resourceType:highPriority:reply:;
- (void)snapshotJournalsForPayloadClassIDs:reply:;
- (void)coalesceJournalsForPayloadClassIDs:withChangeJournalOverThreshold:reply:;
- (void)updateSiriVocabulary;
- (void)syndicationIngestMutexStateDescriptionWithReply:;
- (void)waitForMomentGenerationWithReply:;
- (id)initWithLibraryServicesManager:resourceDownloader:bundleController:;
@end
