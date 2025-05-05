@interface DMClientAPIController : NSObject
@property (nonatomic) Q connectionMigrationMaximumAttempts;
@property (nonatomic) double connectionMigrationTimeIntervalToLastRetryDate;
- (id)init;
- (void)setConnectionMigrationTimeIntervalToLastRetryDate:;
- (void)setConnectionMigrationMaximumAttempts:;
- (double)connectionMigrationTimeIntervalToLastRetryDate;
- (BOOL)_migrateWithConnection:checkNecessity:lastRelevantPlugin:testMigrationInfrastructureOnly:;
- (unsigned long long)connectionMigrationMaximumAttempts;
@end
