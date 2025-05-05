@interface WBSCloudBookmarksMigrationCoordinator : NSObject
@property (nonatomic) <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> localDataProvider;
@property (nonatomic) <WBSSafariBookmarksSyncAgentProtocol> syncAgent;
@property (nonatomic) <WBSLogger> keyActionsLogger;
@property (nonatomic) BOOL migrationEnabled;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSyncAgent:localDataProvider:;
- (id)syncAgent;
- (void)startCoordinatingMigration;
- (void)setMigrationEnabled:;
- (BOOL)isMigrationEnabled;
- (void)_logKeyAction:;
- (void)_logErrorAsKeyAction:;
- (void)_determineCourseOfActionFromSyncAgentMigrationState;
- (void)_determineCourseOfActionFromRemoteMigrationState;
- (void)_considerOverridingOtherMigratingDevice;
- (void)_beginMigrationIfPossible;
- (id)localDataProvider;
- (id)keyActionsLogger;
- (void)setKeyActionsLogger:;
@end
