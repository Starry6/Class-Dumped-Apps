@interface PLCloudPersistentHistoryMigrator : NSObject
- (long long)migrate;
- (void)migrateToPersistentHistoryIfNecessary;
- (id)fetchAllPersistentHistoryTransactions;
- (void)uploadEventResults:;
- (id)fetchChangeHubEventsSinceLastKnownIndex:;
- (void)updateSavedTokenFromPersistentHistoryResult:;
- (BOOL)checkForExistingMigrationMarker;
- (void).cxx_destruct;
- (BOOL)readLastKnownChangeHubIndex:;
- (id)initWithUploader:uploadTracker:managedObjectContext:migratorContext:;
+ (void)migrateToPersistentHistoryIfNecessaryWithUploader:uploadTracker:managedObjectContext:migratorContext:;
@end
