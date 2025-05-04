@interface AWEDataLayerBaseDatabase : NSObject
@property (nonatomic) AWEDataLayerBaseDatabaseConfig config;
@property (nonatomic) NSString dbPathWithoutExtension;
- (BOOL)createDatabaseWithRetryTimes:;
- (void)setWalHook;
- (void)checkpointIfNeeded:pages:;
- (void)setDbPathWithoutExtension:;
- (void)deleteDatabaseWithError:;
- (void)handleDatabaseErrorWithCode:message:;
- (void)databaseWillClose;
- (void)handleSqlPrepareErrorWithCode:sql:;
- (void)handleSqlStepErrorWithCode:sql:;
- (void)handleSqlResetErrorWithCode:sql:;
- (void)removeAllObjectsWithoutLock;
- (void)handleSqlErrorWithFunction:code:sql:;
- (void)safeExecuteSql:cachedStatement:bindStatement:customStepStatement:;
- (id)dbPathWithoutExtension;
- (void)setConfig:;
- (void)createDatabaseIfNeeded;
- (void)removeAllObjects;
- (id)config;
- (void).cxx_destruct;
- (void)handleDatabaseError:;
- (void)cleanDatabase;
+ (id)getDatabaseWithDirectory:dbName:createTableSql:configBlock:;
@end
