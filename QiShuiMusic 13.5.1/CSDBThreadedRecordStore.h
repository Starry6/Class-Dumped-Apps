@interface CSDBThreadedRecordStore : NSObject
- (void)dealloc;
- (void)_teardownDatabaseOnQueue;
- (void)teardownDatabase;
- (void)performBlock:afterDelay:;
- (BOOL)ownsCurrentThreadOtherwiseAssert:;
- (void)performBlock:waitUntilDone:;
- (void)registerClass:;
- (void)setupDatabaseWithAllowLocalMigration:pathBlock:setupStoreHandler:connectionInitializer:versionChecker:migrationHandler:schemaVersion:dataProtectionClass:registerBlock:exclusiveOwnership:;
- (void)setupDatabaseWithAllowLocalMigration:pathBlock:setupStoreHandler:connectionInitializer:versionChecker:migrationHandler:schemaVersion:dataProtectionClass:registerBlock:;
- (id)initWithIdentifier:qosClass:lookAsideConfig:;
@end
