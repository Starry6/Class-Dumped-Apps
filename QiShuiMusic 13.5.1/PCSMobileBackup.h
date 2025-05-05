@interface PCSMobileBackup : NSObject
@property (nonatomic) MBManager backupManager;
- (id)init;
- (BOOL)isBackupEnabled;
- (void)setBackupManager:;
- (id)backupManager;
- (void).cxx_destruct;
+ (id)defaultMobileBackup;
@end
