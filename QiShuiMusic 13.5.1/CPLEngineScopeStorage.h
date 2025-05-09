@interface CPLEngineScopeStorage : CPLEngineStorage
@property (nonatomic) BOOL hasStagedSyncAnchors;
@property (nonatomic) CPLPlatformObject platformObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)openWithError:;
- (BOOL)setTransportScope:forScope:error:;
- (id)_scopeWithIdentifier:;
- (id)filterForIncludedScopeIdentifiers:;
- (BOOL)storeRewindSyncAnchors:forScope:error:;
- (id)scopedIdentifierForCloudScopedIdentifier:;
- (id)enumeratorForScopesNeedingUpdateFromTransport;
- (BOOL)addRewindSyncAnchor:forScope:error:;
- (void)beginCreatingScopeWithIdentifier:;
- (BOOL)setScope:hasCompletedPullFromTransportTask:error:;
- (BOOL)storeEstimatedSize:estimatedAssetCount:forScope:error:;
- (id)transportScopeForScope:;
- (BOOL)setupResetSyncTransportGroupForScope:error:;
- (BOOL)_doesScopeContributeToAssetCounts:;
- (void)writeTransactionDidSucceed;
- (BOOL)clearAllQuotaFlagsForMainScopeWithReason:error:;
- (BOOL)storeTransientSyncAnchor:forScope:error:;
- (id)scopeChangesNeedingToBePulledByClientWithMaximumCount:;
- (BOOL)updateFlags:forScope:error:;
- (void)_removeBrokenScope:;
- (BOOL)setCloudScopeIndexOnChange:;
- (BOOL)storeScopeChange:forScope:error:;
- (id)scopeIdentifierForLocalScopeIndex:;
- (id)_scopeWithStableIndex:;
- (id)enumeratorForScopesNeedingToPullChangesFromTransport;
- (BOOL)resetInitialSyncAnchorForScope:error:;
- (BOOL)hasFinishedAFullSyncForScope:;
- (id)scopeForSharingScope:;
- (BOOL)storeScopeListSyncAnchor:error:;
- (BOOL)upgradeScopesWithNewLibraryOptions:error:;
- (void)_checkSyncManagerPriorityBoost;
- (id)enumeratorForScopesNeedingToPushChangesToTransport;
- (BOOL)resetCompleteSyncStateIncludingIDMappingForScope:error:;
- (BOOL)resetCloudRecordsForScopeWithIdentifier:error:;
- (id)rewindSyncAnchorsForScope:;
- (id)supervisorInfoForScope:;
- (BOOL)supportedFeatureVersionIsMostRecentForScope:;
- (BOOL)setupInitialSyncTransportGroupsForScope:error:;
- (BOOL)doesScopeAllowCourtesyMingling:;
- (Class)classOfRecordsForInitialQueryForScope:;
- (BOOL)setInitialSyncAnchor:forScope:error:;
- (BOOL)doesScopeNeedToPullChangesFromTransport:;
- (BOOL)resetLocalSyncStateForScope:error:;
- (BOOL)setPullFromTransportExpirationInterval:scope:error:;
- (BOOL)storeBusyState:forScope:error:;
- (BOOL)deactivateScope:error:;
- (BOOL)storeSupervisorInfo:forScope:error:;
- (BOOL)setValue:forFlag:forScope:error:;
- (BOOL)doesScopeNeedToBePulledByClient:;
- (unsigned long long)supportedFeatureVersionInLastSyncForScope:;
- (id)enumeratorForScopesNeedingToUpdateTransport;
- (BOOL)setAllScopesHasChangesToPullFromTransportWithError:;
- (id)mostCurrentChangesSyncAnchorForScope:;
- (BOOL)storeSupportedFeatureVersionInLastSync:forScope:error:;
- (void)_resetGlobalsForMainScope;
- (BOOL)enablePrimaryScopeWithError:;
- (BOOL)_handledDisabledFeaturesForScopeIfNecessary:type:error:;
- (BOOL)setScopeHasChangesToPushToTransport:error:;
- (id)stagingScopeForScope:;
- (long long)indexForLocalScopeIdentifier:;
- (BOOL)setScopeHasChangesToPullFromTransport:error:;
- (BOOL)_setScopeType:forScope:error:;
- (id)validLocalScopeIndexes;
- (BOOL)setLocalScopeIndexOnChange:;
- (BOOL)updateScopeWithChange:error:;
- (BOOL)addCleanupTasksForScope:error:;
- (BOOL)doesScopeNeedToUpdateTransport:;
- (id)validCloudScopeIndexes;
- (void)_updateAssetCountsWithScopeChange:forScope:;
- (unsigned long long)estimatedAssetCountForScope:;
- (id)lastDateOfCompletedPullFromTransportForScope:;
- (BOOL)setScopeNeedsToUpdateTransport:error:;
- (BOOL)resetStableRecordsForScopeWithIdentifier:error:;
- (BOOL)discardStagedSyncAnchorWithScopeFilter:error:;
- (unsigned long long)_indexOfCurrentClassForInitialQueriesForScope:;
- (BOOL)setSyncAnchor:forScope:error:;
- (void)endCreatingScopeWithIdentifier:;
- (BOOL)resetSyncAnchorForScope:error:;
- (id)disabledDateForScope:;
- (BOOL)didDropSomeRecordsForScope:;
- (id)remainingClassesForInitialQueryForScope:;
- (BOOL)setDeleteDate:forScope:error:;
- (id)initialSyncAnchorForScope:;
- (BOOL)_forceClientToPullScopeIfNecessary:error:;
- (id)downloadTransportGroupForScope:;
- (id)createScopeWithIdentifier:scopeType:flags:transportScope:error:;
- (BOOL)commitSyncAnchorForScope:error:;
- (BOOL)setupAnchorResetTransportGroupForScope:error:;
- (id)scopeWithCloudScopeIndex:;
- (id)_createScopeFromScopeChange:error:;
- (long long)pullFromTransportTaskForScope:;
- (BOOL)setScopeNeedsUpdateFromTransport:error:;
- (void)_clearScopeCache;
- (BOOL)doScopesNeedMetadataSync:;
- (BOOL)disablePrimaryScopeWithError:;
- (long long)indexForCloudScopeIdentifier:;
- (id)primaryScope;
- (BOOL)resetSyncStateForScope:error:;
- (long long)stableScopeIndexForScopeIdentifier:;
- (id)statusDictionaryForScope:;
- (unsigned long long)scopeType;
- (BOOL)clientAcknowledgedScopeChanges:error:;
- (BOOL)hasScopesNeedingToPushChangesToTransport;
- (BOOL)setHasFetchedInitialSyncAnchor:forScope:error:;
- (BOOL)setScope:hasCompletedPushToTransportTask:error:;
- (id)allScopeIdentifiersIncludeInactive:;
- (BOOL)activateScope:error:;
- (BOOL)hasScopesNeedingToPullChangesFromTransport;
- (BOOL)doesScopeNeedToPushChangesToTransport:;
- (id)scopedIdentifierForLocalScopedIdentifier:;
- (id)scopeChangeForScope:;
- (BOOL)_setSharingScopeIdentifier:error:;
- (void).cxx_destruct;
- (void)writeTransactionDidFail;
- (BOOL)_resetCompleteSyncStateForScope:error:;
- (BOOL)setDidDropSomeRecordsForScope:error:;
- (BOOL)setScopeNeedsToBePulledByClient:error:;
- (BOOL)_dropSharingScopeIdentifier:error:;
- (id)enumeratorForScopesIncludeInactive:;
- (BOOL)hasScopesNeedingToPushHighPriorityChangesToTransport;
- (id)syncAnchorForScope:;
- (BOOL)hasScopesNeedingToUpdateTransport;
- (BOOL)doesScopeSupportToBePulledByClient:;
- (id)initWithEngineStore:name:;
- (BOOL)clearTransportGroupsForScope:error:;
- (id)transientSyncAnchorForScope:;
- (long long)busyStateForScope:;
- (id)_realScopeIdentifiersFromScopeIdentifiers:;
- (BOOL)storeLastDateOfClearedPushRepository:forScope:error:;
- (id)_scopeChangeToBePulledByClientForScope:;
- (BOOL)setDisabledDate:forScope:error:;
- (id)status;
- (id)flagsForScope:;
- (id)scopeIdentifierForCloudScopeIndex:;
- (id)lastDateOfClearedPushRepositoryForScope:;
- (BOOL)deleteScopeWithIdentifier:error:;
- (BOOL)hasFinishedInitialSyncForScope:;
- (id)sharingScopeForScope:;
- (BOOL)hasScopeFetchedInitialSyncAnchor:;
- (long long)transportUpdateTaskForScope:;
- (BOOL)valueForFlag:forScope:;
- (BOOL)markInitialQueryIsDoneForRecordsOfClass:forScope:error:;
- (BOOL)hasStagedSyncAnchorForScope:;
- (id)filterForExcludedScopeIdentifiers:;
- (unsigned long long)estimatedSizeForScope:;
- (id)deleteDateForScope:;
- (id)scopeWithLocalScopeIndex:;
- (id)scopeWithIdentifier:;
- (id)enumeratorForScopesNeedingToPushHighPriorityChangesToTransport;
- (id)enumeratorForScopesWithMingling;
- (id)scopeListSyncAnchor;
- (id)enumeratorForDeletedStagedScopes;
- (void)_forceSyncManagerPriorityBoost;
- (BOOL)_activateSharedScopeIfPresentWithError:;
- (id)uploadTransportGroupForScope:;
- (BOOL)discardStagedSyncAnchorForScope:error:;
- (long long)pushToTransportTaskForScope:;
- (BOOL)disableInitialQueriesForScope:error:;
- (BOOL)updateInitialSyncTransportGroupEstimatedSize:assetCount:forScope:error:;
- (BOOL)setScope:hasCompletedTransportUpdate:error:;
- (BOOL)shouldAutoactivateScopeWithIdentifier:scopeType:;
- (BOOL)resetLocalRecordsForScopeWithIdentifier:error:;
- (BOOL)resetCompleteSyncStateForScope:error:;
- (BOOL)hasStagedSyncAnchors;
- (BOOL)_resetLocalSyncStateForScope:error:;
- (void)_cacheScope:;
@end
