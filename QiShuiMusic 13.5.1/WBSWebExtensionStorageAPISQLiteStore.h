@interface WBSWebExtensionStorageAPISQLiteStore : WBSWebExtensionSQLiteStore
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)_createFreshDatabaseSchema;
- (id)_databaseURL;
- (void)getValuesForKeys:completionHandler:;
- (void)getValuesForAllKeysWithCompletionHandler:;
- (void)getStorageSizeForKeys:completionHandler:;
- (void)getStorageSizeForAllKeysWithCompletionHandler:queue:;
- (void)getStorageSizeForAllKeysIncludingKeyedData:withCompletionHandler:;
- (void)setKeyedData:completionHandler:;
- (void)deleteValuesForKeys:completionHandler:;
- (void)deleteDatabaseWithCompletionHandler:;
- (id)initWithType:composedIdentifier:;
- (id)initForTestingWithType:composedIdentifier:;
- (id)_getKeysAndValuesFromRowEnumerator:;
- (id)_getValuesForKeys:outErrorMessage:;
- (id)_getAllKeysReturningErrorMessage:;
- (id)_getValuesForAllKeysReturningErrorMessage:;
- (id)_insertOrUpdateValue:forKey:inDatabase:;
- (int)_currentDatabaseSchemaVersion;
- (int)_resetDatabaseSchema;
- (BOOL)_isDatabaseEmpty;
@end
