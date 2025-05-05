@interface WBSTouchIconCacheSettingsSQLiteStore : WBSSiteMetadataImageCacheSettingsSQLiteStore
- (id)_createNewDatabaseSQLiteStatement;
- (id)_selectAllEntriesSQLiteStatement;
- (id)_selectEntrySQLiteStatementWithHost:;
- (id)_insertEntrySQLiteStatementWithEntry:;
- (id)_updateEntrySQLiteStatementWithEntry:;
- (id)_deleteEntrySQLiteStatementWithHost:;
- (id)_deleteAllEntriesSQLiteStatement;
- (id)_statementsForMigrationToSchemaVersion:;
+ (Class)cacheSettingsEntryClass;
+ (long long)databaseSchemaVersion;
@end
