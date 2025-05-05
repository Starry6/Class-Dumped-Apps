@interface ML3PersistentIDGenerator : NSObject
- (void).cxx_destruct;
- (id)initWithDatabaseConnection:tableName:;
- (long long)nextPersistentID;
- (void)_calculateNewRun;
@end
