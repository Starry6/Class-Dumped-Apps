@interface SSMetricsEventTable : SSEventsTableBase
- (BOOL)_migrateToVersion2;
- (BOOL)_setupDatabase;
- (BOOL)_migrateToVersion1;
- (BOOL)_migrateToVersion3;
- (id)_pragmaValueForName:;
- (void)performTransactionWithBlock:;
+ (id)databasePath;
+ (id)_eventsTableName;
@end
