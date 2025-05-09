@interface CPLEngineLibrary : NSObject
@property (nonatomic) BOOL libraryIsCorrupted;
@property (nonatomic) NSString currentClosingComponentName;
@property (nonatomic) NSURL clientLibraryBaseURL;
@property (nonatomic) NSURL cloudLibraryStateStorageURL;
@property (nonatomic) NSURL cloudLibraryResourceStorageURL;
@property (nonatomic) NSString libraryIdentifier;
@property (nonatomic) BOOL isSystemLibrary;
@property (nonatomic) Q libraryOptions;
@property (nonatomic) <CPLEngineLibraryOwner> owner;
@property (nonatomic) <CPLEngineLibrarySupervisor> supervisor;
@property (nonatomic) CPLEngineStore store;
@property (nonatomic) CPLEngineScheduler scheduler;
@property (nonatomic) CPLEngineSyncManager syncManager;
@property (nonatomic) CPLEngineTransport transport;
@property (nonatomic) CPLEngineSystemMonitor systemMonitor;
@property (nonatomic) CPLEngineFeedbackManager feedback;
@property (nonatomic) CPLConfiguration configuration;
@property (nonatomic) BOOL hasChangesToProcess;
@property (nonatomic) BOOL upgradeSuggestedToAccessAllPhotos;
@property (nonatomic) BOOL containerHasBeenWiped;
@property (nonatomic) BOOL iCloudLibraryClientVersionTooOld;
@property (nonatomic) NSDate initialSyncDate;
@property (nonatomic) BOOL isExceedingQuota;
@property (nonatomic) BOOL isExceedingSharedLibraryQuota;
@property (nonatomic) Q estimatedCountOfRemainingRecordsDuringSharedLibraryExit;
@property (nonatomic) q busyState;
@property (nonatomic) BOOL iCloudLibraryHasBeenWiped;
@property (nonatomic) BOOL iCloudLibraryExists;
@property (nonatomic) NSDate exitDeleteTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) CPLPlatformObject platformObject;
- (void)closeAndDeactivate:completionHandler:;
- (void)getStatusArrayForComponents:completionHandler:;
- (void)getListOfComponentsWithCompletionHandler:;
- (id)componentName;
- (id)transport;
- (void)testKey:value:completionHandler:;
- (void)provideScopeChangeForScopeWithIdentifier:completionHandler:;
- (void)openWithCompletionHandler:;
- (void)startSyncSession;
- (void)requestClientToPushAllChangesWithCompletionHandler:;
- (void)provideRecordWithCloudScopeIdentifier:completionHandler:;
- (void)getStatusForComponents:completionHandler:;
- (BOOL)containerHasBeenWiped;
- (void)setHasChangesToProcess:;
- (void)setOwner:;
- (BOOL)isExceedingQuota;
- (id)redactedDescription;
- (id)scheduler;
- (id)owner;
- (long long)busyState;
- (id)clientLibraryBaseURL;
- (BOOL)iCloudLibraryClientVersionTooOld;
- (id)syncManager;
- (id)feedback;
- (id)initWithClientLibraryBaseURL:cloudLibraryStateStorageURL:cloudLibraryResourceStorageURL:libraryIdentifier:options:;
- (void)setICloudLibraryExists:;
- (id)systemMonitor;
- (void)setIsExceedingSharedLibraryQuota:;
- (void)setContainerHasBeenWiped:;
- (id)cloudLibraryResourceStorageURL;
- (id)configuration;
- (id)initialSyncDate;
- (id)exitDeleteTime;
- (id)libraryIdentifier;
- (void)setIsExceedingQuota:;
- (void).cxx_destruct;
- (void)setICloudLibraryClientVersionTooOld:;
- (unsigned long long)estimatedCountOfRemainingRecordsDuringSharedLibraryExit;
- (void)setExitDeleteTime:;
- (BOOL)iCloudLibraryHasBeenWiped;
- (BOOL)isUpgradeSuggestedToAccessAllPhotos;
- (id)platformObject;
- (id)cloudLibraryStateStorageURL;
- (id)description;
- (void)setConnectedToNetwork:cellularIsRestricted:inAirplaneMode:;
- (void)setEstimatedCountOfRemainingRecordsDuringSharedLibraryExit:;
- (void)setHasCellularBudget:hasBatteryBudget:isConstrainedNetwork:isBlockedByLowPowerMode:isBudgetValid:;
- (BOOL)iCloudLibraryExists;
- (id)store;
- (void)statusDidChange:;
- (void)emergencyClose;
- (void)setLowDiskSpace:veryLowDiskSpace:;
- (id)corruptionInfo;
- (unsigned long long)libraryOptions;
- (void)setBusyState:;
- (BOOL)hasChangesToProcess;
- (void)setICloudLibraryHasBeenWiped:;
- (void)provideCloudResource:completionHandler:;
- (void)setUpgradeSuggestedToAccessAllPhotos:;
- (BOOL)isExceedingSharedLibraryQuota;
- (void)reportLibraryCorrupted;
- (void)_reportQuarantineCountIfNecessaryWithLastReportDate:;
- (void)reportQuarantineCountIfNecessary;
- (void)reportRadar:;
- (void)_openNextComponent:completionHandler:;
- (void)_closeNextComponent:deactivate:lastError:completionHandler:;
- (void)_setCurrentClosingComponentName:;
- (id)currentClosingComponentName;
- (void)updateLastSuccessfullSyncDate:;
- (void)updateInitialSyncDate:;
- (void)reportUnsuccessfulSync;
- (void)updateDisabledFeatures:;
- (void)_updateTotalAssetCountWithAssetCounts:;
- (void)updateAssetCountsFromServer:;
- (unsigned long long)totalAssetCountOnServer;
- (BOOL)hasAssetCountOnServer;
- (void)updateAccountFlagsData:;
- (BOOL)hasAccountFlagsData;
- (void)clientIsPushingChanges;
- (void)forceFetchAccountFlags;
- (id)_libraryObject;
- (void)attachObject:withCompletionHandler:;
- (void)detachObject:withCompletionHandler:;
- (void)markAttachedObjectAsInvalid:;
- (void)_performBlockWithLibrary:enumerateAttachedObjects:;
- (void)_performPendingBlockForWhenLibraryAttaches;
- (id)_performBlockWhenLibraryAttaches:;
- (void)_cancelBlockWhenLibraryAttaches:;
- (void)performBlockOnLibrary:;
- (void)requestAttachedLibrary;
- (void)notifyAttachedObjectsPullQueueIsFull;
- (void)notifyAttachedObjectsHasStatusChanges;
- (void)_notifyAttachedObjectsThatPushRepositoryFlagsCountsHaveChanged;
- (void)notifyAttachedObjectsThatPushRepositoryFlagsCountsHaveChanged;
- (void)notifyAttachedObjectsResourceDidDownloadInBackground:;
- (void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:;
- (void)notifyAttachedObjectsUploadTaskDidStart:;
- (void)notifyAttachedObjectsUploadTask:didProgress:;
- (void)notifyAttachedObjectsUploadTask:didFinishWithError:;
- (void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:sizeOfOriginalResourcesToUpload:numberOfImages:numberOfVideos:numberOfOtherItems:;
- (void)forceBackupWithActivity:forceClientPush:completionHandler:;
- (void)blockEngineWithReason:onlyIfBlocked:block:;
- (void)performMaintenanceCleanupWithCompletionHandler:;
- (void)cleanUpBrokenScope:completionHandler:;
- (BOOL)isSystemLibrary;
- (id)supervisor;
- (void)setSupervisor:;
- (BOOL)libraryIsCorrupted;
- (void)_fillStatus:forComponents:completionHandler:;
- (void)_fillStatusArray:forComponents:completionHandler:;
- (void)_testKey:value:completionHandler:;
- (id)_allComponentsIncludingPlatformObjects:respondingToSelector:;
+ (id)platformImplementationProtocol;
@end
