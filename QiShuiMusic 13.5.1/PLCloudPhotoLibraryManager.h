@interface PLCloudPhotoLibraryManager : NSObject
@property (nonatomic) PLPhotoLibraryPathManager pathManager;
@property (nonatomic) PLLibraryServicesManager libraryServicesManager;
@property (nonatomic) @? _idleStateTransitionOneTimeAction;
@property (nonatomic) BOOL cloudPhotoLibraryEnabled;
@property (nonatomic) q deviceLibraryConfiguration;
@property (nonatomic) Q totalNumberOfUnpushedMasters;
@property (nonatomic) Q totalNumberOfUploadedMasters;
@property (nonatomic) Q totalNumberOfDeferredAssets;
@property (nonatomic) Q totalSizeOfUnpushedOriginals;
@property (nonatomic) Q totalUploadedOriginalSize;
@property (nonatomic) q currentResetSyncType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)libraryServicesManager;
- (void)getSystemBudgetsWithCompletionHandler:;
- (void)sharedLibraryRampCheckWithCompletionHandler:;
- (id)cplStatus;
- (void)_unpause;
- (id)pathManager;
- (id)_fetchEventsFromCloudChangeTrackerInLibrary:;
- (void)_initRecoveryManager;
- (void)_stopWorkInProgressTimer;
- (void)sync;
- (void)deactivateScopeWithIdentifier:completionHandler:;
- (id)lastKnownCloudVersionFromDisk;
- (void)activateScopeWithIdentifier:completionHandler:;
- (void)_handleFinalizeSessionError:commitError:uploadBatchContainer:needResetSync:forTransaction:inLibrary:;
- (void)deleteResources:checkServerIfNecessary:completionHandler:;
- (void)libraryManager:downloadDidProgress:forResourceTransferTask:;
- (void)_enableiCPL;
- (BOOL)_isPausedForDownloadRequestHighPriority:;
- (void)libraryManager:inMemoryDownloadDidFinishForResourceTransferTask:data:withError:;
- (void)reportMiscInformation:;
- (void)clearPurgeableResourcesMatchingPredicate:inLibrary:completionHandler:;
- (id)cplConfiguration;
- (void)libraryManager:backgroundDownloadDidFailForResource:;
- (void)dealloc;
- (void)_startWorkInProgressTimer;
- (void)_openCPLLibrary;
- (void)photosPreferencesChanged;
- (BOOL)_isAssetsdNotReadyToAnswer;
- (void)_updateAsset:withImageFileURL:;
- (long long)currentResetSyncType;
- (void)fetchAdjustmentDataForAsset:completionHandler:;
- (void)_handleAccountFlagsChangeIfNecessary;
- (void)_repushVideoAssetsMetadata;
- (BOOL)_hasAvalancheIncomingWork;
- (void)endsSignificantWork;
- (void)saveLastKnownCloudChangeTrackerTokenToDisk;
- (void)downloadResourceInMemory:proposedTaskIdentifier:taskDidBeginHandler:completionHandler:;
- (void)libraryManager:uploadDidFinishForResourceTransferTask:withError:;
- (void)_doPause;
- (void)_resetCacheDeleteSupport;
- (void)disableiCPLWithCompletionHandler:;
- (BOOL)_hasIncomingWorkFileMarker;
- (id)readRulesTrackerTokenObject;
- (void)_migrateFromChangeHubToCoreDataIfNecessary;
- (id)_identifierForResource:;
- (void)setCPLStatus:;
- (void)_constructUnpauseTimerFrom:to:;
- (void)startExitFromLibraryScopeWithIdentifier:retentionPolicy:exitSource:completionHandler:;
- (void)_setIdleStateTransitionOneTimeAction:;
- (void)_updatePendingResetSyncDate;
- (void)_updateWithCPLResource:isHighPriority:inLibrary:completionHandler:;
- (void)_fetchNewEventsFromCloudChangeTrackerInLibrary:;
- (unsigned long long)_inq_numberOfOtherItemsToDownloadInLibrary:;
- (void)_doResetSync:inLibrary:;
- (void)libraryManager:backgroundDownloadDidFinishForResource:;
- (void)_initCPLLibraryMode;
- (BOOL)isConnectedToCloudChangeTracker;
- (void)libraryManagerDidStartSynchronization:;
- (void)_setToDownloadCountsForImages:videos:;
- (void)_markResourceObjectIDsAsPurgeable:urgency:inLibrary:;
- (void)_doUnpause;
- (BOOL)isCloudPhotoLibraryEnabled;
- (id)cplLibrary;
- (void)_getStatusChanges:transaction:notificationGeneration:inLibrary:;
- (void)_stopUnpauseTimer;
- (void)_runSyncOnIsolationQueueWithBlock:;
- (void)setDeviceLibraryConfiguration:;
- (void)libraryManager:pushAllChangesWithCompletionHandler:;
- (id)initWithLibraryServicesManager:;
- (void)_createDeletionRecordsIfNecessary;
- (void)_setupPLCPLPlistInLibrary:;
- (void)_pause;
- (void)libraryManager:uploadDidStartForResourceTransferTask:;
- (void)_processDownloadBatchWithSession:inLibrary:;
- (BOOL)_hasItemToDownload;
- (void)disableiCPLSyncWillBecomeNonSystemPhotoLibrary;
- (id)cacheDeleteSupport;
- (id)_inMemoryTrackerStateForDebug;
- (unsigned long long)_inq_numberOfOtherItemsToUploadInLibrary:;
- (void)startAutomaticPrefetchOrPrune;
- (void)startLibraryScopeRulesChangeTracker;
- (void)resetSyncDueToMigrationMarker;
- (void)_repushMasterWithMissingMediaMetadata;
- (unsigned long long)totalNumberOfUnpushedMasters;
- (void)_checkForWorkInProgress;
- (void)_checkAndMarkPurgeableResourcesIfSafe:checkServerIfNecessary:urgency:completionHandler:;
- (void)_checkForPushedMastersInLibrary:;
- (void)_getStatusForPendingRecordsSharedToScopeWithIdentifier:maximumCount:completionHandler:;
- (void)_handleOptimizeSettingChangeInLibrary:withCompletionHandler:;
- (BOOL)_canExternallyTransitionToNewLibraryStateIgnoringPause:;
- (void)_initDeviceLibraryConfiguration;
- (void)_initializeMasterAndSizeCalculationinLibrary:;
- (void)_promptForCameraCaptureSettingChangeWithReason:;
- (void)publishLibraryScopeWithCPLShare:title:completionHandler:;
- (unsigned long long)_inq_numberOfVideosToUploadInLibrary:;
- (void)removeParticipantsWithParticipantUUIDs:fromLibraryScopeWithIdentifier:retentionPolicy:exitSource:completionHandler:;
- (void)_fixMasterStatusIn:inLibrary:;
- (void)_runOneTimeMigrationStepsWithoutiCPLIfNecessary;
- (void)_linkFileFrom:to:;
- (void)acceptCPLShare:completionHandler:;
- (void)setMigrationMarker:;
- (void)saveRulesTrackerTokenObject:;
- (void)setCPLConfiguration:;
- (void)sendBudgetOverrideAnalytics:pauseReason:;
- (void)_repushAssetsWithImportedByBundleIdentifier;
- (void)fetchResourcesForAsset:completionHandler:;
- (void)foregroundMonitor:changedStateToForeground:forBundleIdentifier:;
- (void)cancelResourceTransferTaskWithIdentifier:completion:;
- (void)getCloudScopedIdentifiersForLocalIdentifiers:completionHandler:;
- (id)_assetResourceForAsset:resourceType:masterResourceOnly:isPhoto:;
- (id)readLocalVersion;
- (id)readMigrationMarker;
- (BOOL)overrideSystemBudgetsForSyncSession:pauseReason:forSystemBudgets:;
- (void)publishCPLScopeChange:completionHandler:;
- (void)libraryManager:downloadDidStartForResourceTransferTask:;
- (void)libraryManagerDidChangeConfiguration:;
- (void)_callPushAllChangesCompletionHandlersIfNecessary;
- (id)readCloudTrackerTokenObject;
- (id)_idleStateTransitionOneTimeAction;
- (void)_callBlocksWaitingForLibraryOpen;
- (void)libraryManagerStatusDidChange:;
- (unsigned long long)totalNumberOfUploadedMasters;
- (void)_finishedUnsharingPendingAssetsSharedToScopeWithTransaction:error:;
- (void)getStreamingURLForAsset:resourceType:intent:hints:timeRange:clientBundleID:completionHandler:;
- (long long)sizeOfResourcesToUploadByCPL:;
- (void)_runAsyncOnIsolationQueueWithTransaction:block:;
- (void)_setReadyForAnalysisWithCPLStatus:;
- (void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:;
- (void)_unshareBatchOfPendingAssetsSharedToScopeWithTransaction:;
- (void)clearPrefetchState;
- (void)dumpStatusIncludingDaemon:completionHandler:;
- (void)_processUploadBatchInLibrary:;
- (void)_handleStateTransistionAfterDisableiCPL;
- (void)saveCloudTrackerTokenObject:;
- (void)_downloadFromCloudInLibrary:;
- (void)configurationDidChange:;
- (unsigned long long)_inq_numberOfPhotosToDownloadInLibrary:;
- (BOOL)_setupTimerForUnpause;
- (void)cplHasBackgroundDownloadOperationsWithCompletionHandler:;
- (void)setCPLLibrary:;
- (void)_updateThumbnailDataForAsset:withImageFileURL:;
- (void)_disableiCPLWillBecomeNonSystemPhotoLibrary:configurationChanged:;
- (void)invalidateRecoveryManager;
- (void).cxx_destruct;
- (unsigned long long)totalSizeOfUnpushedOriginals;
- (void)forceSyncMomentSharesWithScopeIdentifiers:;
- (void)downloadResourceInMemoryForAsset:resourceType:masterResourceOnly:proposedTaskIdentifier:taskDidBeginHandler:completionHandler:;
- (void)cloudChangeTrackerDidReceiveChangesWithTransaction:;
- (void)setPause:reason:;
- (void)_resetResourceManager;
- (void)fetchShareFromShareURL:completionHandler:;
- (id)resourceManager;
- (void)libraryManagerHasStatusChanges:;
- (void)stopLibraryScopeRulesChangeTracker;
- (unsigned long long)_inq_numberOfVideosToDownloadInLibrary:;
- (BOOL)connectToCloudChangeTracker;
- (void)_updateTransferCountsInLibrary:;
- (void)getLibraryScopeStatusCountsForScopeWithIdentifier:completionHandler:;
- (void)endUserSessionWithCompletionHandler:;
- (void)_processRulesEvaluationIfNeeded;
- (void)enableiCPLWithCompletionHandler:;
- (void)downloadResource:highPriority:clientBundleID:proposedTaskIdentifier:taskDidBeginHandler:progressBlock:completionHandler:;
- (void)_transitionToState:;
- (void)_checkEnableState;
- (void)updateLibraryScopeWithCPLScopeChange:completionHandler:;
- (short)_placeHolderKindFromCPLResourceType:;
- (void)setMigratedLocalVersion:;
- (void)_runOneTimeMigrationStepsIfNecessaryInLibrary:;
- (void)_finishUploadWithNoBatchesToUploadInLibrary:;
- (void)updateTransferCountsWithInsertedPhotoCount:insertedVideoCount:inLibrary:;
- (void)queryUserIdentitiesWithParticipants:completionHandler:;
- (void)libraryManager:provideLocalResource:recordClass:completionHandler:;
- (void)invalidateCacheDeleteSupport;
- (void)libraryManager:downloadDidFinishForResourceTransferTask:finalResource:withError:;
- (void)_runOnLibraryOpenWithTransaction:block:;
- (long long)deviceLibraryConfiguration;
- (void)libraryManager:uploadDidProgress:forResourceTransferTask:;
- (id)_convertToIdentifierMapFromCPLScopeIdentifierMap:;
- (void)downloadAsset:resourceType:masterResourceOnly:highPriority:clientBundleID:proposedTaskIdentifier:taskDidBeginHandler:progressBlock:completionHandler:;
- (void)statusDidChange:;
- (void)_handleOptimizeSettingChange;
- (void)_initCacheDeleteSupport;
- (void)libraryManagerHasChangesToPull:;
- (void)beginsSignificantWorkWithResourcesSize:;
- (void)_processNextTransaction;
- (void)startAssetRecoveryWithTransaction:;
- (BOOL)isResourceTransferTaskAliveWithTaskWithIdentifier:;
- (void)performTransactionOnLibraryScopeSynchronizationQueue:;
- (void)getReadyForAnalysisWithCompletionHandler:;
- (void)invalidateResourceManager;
- (unsigned long long)totalUploadedOriginalSize;
- (void)_initResourceManager;
- (void)_updateLocalStaleResourceWithCPLResource:inLibrary:;
- (id)_calculateUnpauseTimeForPauseTime:;
- (void)_reportOptimizeSettingChangeWithCompletionHandler:;
- (void)invalidate;
- (id)_debugNameForState:;
- (void)_uploadToCloudForEventsResult:inLibrary:;
- (void)_runAsyncOnIsolationQueueWithTransaction:afterDelay:block:;
- (void)_processUploadBatchWithStartupFailureCount:inLibrary:;
- (void)_callDeviceLibraryConfigurationChangeRequestCompletionHandlersWithError:;
- (void)getUUIDsForCloudIdentifiers:completionHandler:;
- (void)_uploadFullPhotoLibraryToCloud:;
- (void)markPurgeableResourcesMatchingPredicate:urgency:inLibrary:completionHandler:;
- (void)startUnsharingPendingAssetsSharedToScopeWithIdentifier:;
- (void)sizeOfResourcesToUploadDidChangeForLibraryManager:;
- (unsigned long long)_inq_numberOfPhotosToUploadInLibrary:;
- (void)_resetDidCallBlocksWaitingForLibraryOpen;
- (id)_targetSizeForInputSize:maxPixelSize:;
- (unsigned long long)totalNumberOfDeferredAssets;
- (void)downloadResource:options:clientBundleID:proposedTaskIdentifier:taskDidBeginHandler:progressBlock:completionHandler:;
- (void)setLocalVersion:;
- (void)boostPriorityForMomentShareWithScopeIdentifier:completionHandler:;
- (void)requestDeviceLibraryConfigurationChange:completionHandler:;
- (void)getCPLStateForDebug:completionHandler:;
- (void)_resetCPLLibrary;
- (id)recoveryManager;
+ (id)descriptionForResourceType:;
+ (BOOL)needResetSyncErrorType:;
@end
