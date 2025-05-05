@interface PLDeviceRestoreMigrationPostProcessingSupport : NSObject
- (BOOL)isModelMigrationRestorePostProcessingComplete;
- (BOOL)writeBackgroundRestorePostProcessingCompleteAndArchiveTokens;
- (BOOL)writeBackgroundRestorePostProcessingInProgressToken;
- (BOOL)writeModelMigrationRestorePostProcessingCompleteToken;
- (void).cxx_destruct;
- (BOOL)needsToPrepareForBackgroundRestore;
- (id)initWithModelMigrator:;
- (BOOL)isBackgroundRestorePostProcessingInProgressTokenValid;
- (BOOL)foregroundRestoreFromCloudBackupCompleteTokenExists;
+ (BOOL)createForegroundRestoreFromCloudBackupCompleteTokenWithPathManager:error:;
+ (id)_readTokenAtPath:allowNotExists:error:;
+ (BOOL)_writeTokenToPath:withInfo:allowOverwrite:error:;
@end
