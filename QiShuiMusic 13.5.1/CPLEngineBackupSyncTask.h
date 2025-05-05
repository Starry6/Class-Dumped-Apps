@interface CPLEngineBackupSyncTask : CPLEngineForceSyncTask
- (id)description;
- (BOOL)forBackup;
- (id)initWithEngineLibrary:delegate:;
@end
