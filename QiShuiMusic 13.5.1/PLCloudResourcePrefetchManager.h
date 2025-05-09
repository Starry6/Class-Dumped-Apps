@interface PLCloudResourcePrefetchManager : NSObject
- (void)_resourcesWithPredicate:photoLibrary:limit:completionHandler:;
- (void)_startAutomaticPrefetch;
- (id)init;
- (unsigned long long)_intentForPrefetchPhase:;
- (void)_addInflightResourceIdentifier:prefetchPhase:cplResource:;
- (unsigned long long)_smallLibrarySizeThresholdForTotalSizeOfLocallyAvailableOriginalResources:;
- (void)_removeInflightResourceIdentifier:prefetchPhase:cplResource:;
- (void)_runSynchronouslyOnWorkQueue:;
- (void)handleCPLConfigurationChange;
- (void)handleCPLStatusChange;
- (BOOL)_canPrefetch;
- (id)_prefetchStatusForDebug:;
- (void)_startPrefetchNextBatch;
- (void)stop;
- (BOOL)_isInflightResourceIdentifier:;
- (void)_setLastCompletePrefetchDate:;
- (unsigned long long)_countOfInflightResourcesForPrefetchPhase:;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (id)_allInflightResourceIdentifiers;
- (id)prefetchStatusForDebug:;
- (void)_resourcesToPrefetchWithPrefetchPhase:photoLibrary:applyPerPrefetchLimit:completionHandler:;
- (void)_handlePrefetchError:forPLCloudResourceWithObjectID:;
- (void)_removeAllInflightResourceIdentifiers;
- (id)_inflightResourceIdentifiersForPrefetchPhase:;
- (void)clearPrefetchState;
- (BOOL)_isPrefetchDisabled;
- (long long)_totalSizeOfLocallyAvailableOriginalResources;
- (void)prefetchResourcesWithPredicates:photoLibrary:prefetchPhase:completionHandler:;
- (void)_cleanupInflightResources;
- (void)_prefetchResources:photoLibrary:prefetchPhase:shouldAutoPefetchNextBatch:;
- (void).cxx_destruct;
- (void)_enqueueCheckCPLBGDownloadFromNow:withReason:;
- (long long)_prefetchOptimizeModeBasedOnLibrarySize;
- (void)handleOptimizeModeChange;
- (long long)_diskSpaceBudgetForPrefetchPhase:;
- (id)_volumeInfo;
- (void)_incrementPrefetchCountForPrefetchPhase:resources:photoLibrary:;
- (long long)_totalSizeOfOriginalResourcesForPrefetchWithPredicate:;
- (void)_checkCPLBackgroundDownloadOperations;
- (long long)_totalSizeOfOriginalResources;
- (BOOL)_prefetchIsEnabledForPhase:;
- (unsigned long long)_countOfAllInflightResources;
- (void)_reloadDownloadOriginalsSetting;
- (void)_runOnWorkQueueWithTransaction:block:;
- (void)invalidate;
- (long long)_diskSpaceBudgetForPrefetchPhase:prefetchOptimizeMode:;
- (void)startAutomaticPrefetch;
- (void)_reloadDefaultDownload;
- (id)initWithCPLManager:pruneManager:libraryServicesManager:;
+ (id)_identifierForResourceDownload:;
+ (id)_descriptionForPrefetchMode:;
+ (id)_overridePrefetchMode;
+ (id)descriptionForPrefetchPhase:;
@end
