@interface BYMigrationSourceController : NSObject
@property (nonatomic) BYBuddyDaemonMigrationSourceClient migrationSourceClient;
- (id)init;
- (void).cxx_destruct;
- (void)launchSetupForMigration:;
- (void)setFileTransferSession:;
- (id)migrationSourceClient;
- (void)setMigrationSourceClient:;
@end
