@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator
- (void).cxx_destruct;
- (id)initWithDatabaseConnection:tableName:;
- (void)addIdMapping:forProperty:;
- (long long)nextPersistentIDForImportItem:;
- (void)removePersistentIDFromIdMapping:;
@end
