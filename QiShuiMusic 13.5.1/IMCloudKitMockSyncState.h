@interface IMCloudKitMockSyncState : NSObject
@property (nonatomic) BOOL IMCloudKitSyncingEnabled;
@property (nonatomic) BOOL IMCloudKitIsSyncing;
@property (nonatomic) BOOL IMCloudKitSyncPaused;
@property (nonatomic) BOOL IMCloudKitIsEligibleForTruthZone;
@property (nonatomic) BOOL IMCloudKitIsInExitState;
@property (nonatomic) BOOL IMCloudKitIsRemovedFromBackup;
@property (nonatomic) NSDate IMCloudKitSyncDate;
@property (nonatomic) BOOL IMCloudKitStartingPeriodicSync;
@property (nonatomic) BOOL IMCloudKitStartingInitialSync;
@property (nonatomic) q IMCloudKitStartingEnabledSettingChange;
@property (nonatomic) BOOL IMCloudKitStartingDisableDevices;
@property (nonatomic) Q IMCloudKitSyncControllerSyncState;
@property (nonatomic) q IMCloudKitSyncControllerSyncType;
@property (nonatomic) q IMCloudKitSyncControllerSyncRecordType;
@property (nonatomic) NSArray IMCloudKitSyncErrors;
- (void).cxx_destruct;
- (id)convertToDictionary;
- (BOOL)IMCloudKitSyncingEnabled;
- (void)setIMCloudKitSyncingEnabled:;
- (BOOL)IMCloudKitIsSyncing;
- (void)setIMCloudKitIsSyncing:;
- (BOOL)IMCloudKitSyncPaused;
- (void)setIMCloudKitSyncPaused:;
- (BOOL)IMCloudKitIsEligibleForTruthZone;
- (void)setIMCloudKitIsEligibleForTruthZone:;
- (BOOL)IMCloudKitIsInExitState;
- (void)setIMCloudKitIsInExitState:;
- (BOOL)IMCloudKitIsRemovedFromBackup;
- (void)setIMCloudKitIsRemovedFromBackup:;
- (id)IMCloudKitSyncDate;
- (void)setIMCloudKitSyncDate:;
- (BOOL)IMCloudKitStartingPeriodicSync;
- (void)setIMCloudKitStartingPeriodicSync:;
- (BOOL)IMCloudKitStartingInitialSync;
- (void)setIMCloudKitStartingInitialSync:;
- (long long)IMCloudKitStartingEnabledSettingChange;
- (void)setIMCloudKitStartingEnabledSettingChange:;
- (BOOL)IMCloudKitStartingDisableDevices;
- (void)setIMCloudKitStartingDisableDevices:;
- (unsigned long long)IMCloudKitSyncControllerSyncState;
- (void)setIMCloudKitSyncControllerSyncState:;
- (long long)IMCloudKitSyncControllerSyncType;
- (void)setIMCloudKitSyncControllerSyncType:;
- (long long)IMCloudKitSyncControllerSyncRecordType;
- (void)setIMCloudKitSyncControllerSyncRecordType:;
- (id)IMCloudKitSyncErrors;
- (void)setIMCloudKitSyncErrors:;
@end
