@interface MBBehaviorOptions : NSObject
@property (nonatomic) MBConnection conn;
@property (nonatomic) NSMutableDictionary cachedPrefs;
@property (nonatomic) NSObject<OS_dispatch_queue> cachedPrefsQueue;
@property (nonatomic) NSString cloudKitContainerName;
@property (nonatomic) q maxBatchCount;
@property (nonatomic) q maxBatchSize;
@property (nonatomic) q manifestPageSize;
@property (nonatomic) q recordSaveAttempts;
@property (nonatomic) BOOL sqlTrace;
@property (nonatomic) BOOL warnForLateiTunesBackups;
@property (nonatomic) NSInteger sqlBatchCount;
@property (nonatomic) double sqlBatchTime;
@property (nonatomic) BOOL useBackgroundOperationsForBackup;
@property (nonatomic) NSString minimumBuildVersionForFullBackup;
@property (nonatomic) BOOL backupFromLocalSnapshot;
@property (nonatomic) BOOL useABC;
@property (nonatomic) BOOL shouldKeepFileSystemSnapshotAfterBackupSuccess;
@property (nonatomic) BOOL shouldKeepFileSystemSnapshotAfterBackupFailure;
@property (nonatomic) BOOL snapshotAfterForegroundRestore;
@property (nonatomic) BOOL flushLogMessages;
@property (nonatomic) q maxBatchSaveAssetSize;
@property (nonatomic) q maxBatchFetchAssetSize;
@property (nonatomic) BOOL usePowerLog;
- (long long)maxBatchSize;
- (id)conn;
- (id)init;
- (void)setConn:;
- (void)_setPref:forKey:;
- (void)setMaxBatchSize:;
- (double)sqlBatchTime;
- (void)setSqlBatchCount:;
- (void)setSqlBatchTime:;
- (void).cxx_destruct;
- (int)sqlBatchCount;
- (void)_startListeningForNotifications;
- (long long)maxBatchCount;
- (void)setMaxBatchCount:;
- (id)_behaviorOptionForKey:;
- (id)_behaviorContainerOptionForKey:;
- (BOOL)_getBoolOptionForKey:defaultValue:;
- (int)_getIntOptionForKey:defaultValue:;
- (double)_getDoubleOptionForKey:defaultValue:;
- (id)_getStringOptionLockedForKey:defaultValue:;
- (id)_getStringOptionForKey:defaultValue:;
- (id)_getArrayOptionForKey:defaultValue:;
- (id)cloudKitContainerName;
- (void)setCloudKitContainerName:;
- (long long)maxBatchSaveAssetSize;
- (void)setmaxBatchSaveAssetSize:;
- (int)maxBatchSaveConcurrentModifyRecordsOperationsWithDefaultValue:;
- (int)maxBatchDeleteConcurrentModifyRecordsOperationsWithDefaultValue:;
- (int)maxBatchFetchConcurrentFetchRecordsOperationsWithDefaultValue:;
- (long long)maxBatchFetchAssetSize;
- (void)setmaxBatchFetchAssetSize:;
- (long long)recordSaveAttempts;
- (void)setRecordSaveAttempts:;
- (BOOL)sqlTrace;
- (void)setSQLTrace:;
- (long long)manifestPageSize;
- (void)setManifestPageSize:;
- (BOOL)useBackgroundOperationsForBackup;
- (void)setUseBackgroundOperationsForBackup:;
- (id)minimumBuildVersionForFullBackup;
- (void)setMinimumBuildVersionForFullBackup:;
- (BOOL)backupFromLocalSnapshot;
- (void)setBackupFromLocalSnapshot:;
- (BOOL)shouldKeepFileSystemSnapshotAfterBackupSuccess;
- (void)setShouldKeepFileSystemSnapshotAfterBackupSuccess:;
- (BOOL)shouldKeepFileSystemSnapshotAfterBackupFailure;
- (void)setShouldKeepFileSystemSnapshotAfterBackupFailure:;
- (BOOL)snapshotAfterForegroundRestore;
- (void)setSnapshotAfterForegroundRestore:;
- (BOOL)usePowerLog;
- (void)setUsePowerLog:;
- (BOOL)useABC;
- (void)setUseABC:;
- (double)SQLiteSpaceSavingsThresholdWithDefaultValue:;
- (BOOL)validateSignatureOnRestoreWithDefaultValue:;
- (int)validateFileEncodingWithDefaultValue:;
- (BOOL)enableSQLiteArchivingWithDefaultValue:;
- (BOOL)fixOwnershipOnFileScanWithDefaultValue:;
- (BOOL)warnForLateiTunesBackups;
- (void)setWarnForLateiTunesBackups:;
- (id)cachedPrefs;
- (void)setCachedPrefs:;
- (id)cachedPrefsQueue;
- (void)setCachedPrefsQueue:;
- (BOOL)flushLogMessages;
- (void)setFlushLogMessages:;
+ (id)sharedOptions;
@end
