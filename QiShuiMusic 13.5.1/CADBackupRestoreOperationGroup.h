@interface CADBackupRestoreOperationGroup : CADOperationGroup
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)CADBackupDatabaseToFileNamed:inDirectory:includeAttachments:reply:;
- (void)CADBackupToICBU:reply:;
- (void)CADRestoreFromDatabaseBackupFileNamed:inDirectory:includeAttachments:reply:;
- (void)CADRestoreFromICBU:reply:;
- (id)_accountStoreForBackupRestore;
- (BOOL)_performRestoreOperation:;
@end
