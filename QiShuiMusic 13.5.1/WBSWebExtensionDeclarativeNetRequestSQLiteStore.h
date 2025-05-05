@interface WBSWebExtensionDeclarativeNetRequestSQLiteStore : WBSWebExtensionSQLiteStore
- (id)init;
- (int)_createFreshDatabaseSchema;
- (id)_databaseURL;
- (id)initWithComposedIdentifier:usesInMemoryDatabase:;
- (id)_getKeysAndValuesFromRowEnumerator:;
- (int)_currentDatabaseSchemaVersion;
- (int)_resetDatabaseSchema;
- (BOOL)_isDatabaseEmpty;
- (void)updateRulesByRemovingIDs:addRules:completionHandler:;
- (void)addRules:completionHandler:;
- (void)deleteRules:completionHandler:;
- (void)getRulesWithCompletionHandler:;
- (id)_getRulesWithOutErrorMessage:;
- (id)_insertRule:inDatabase:;
@end
