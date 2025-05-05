@interface HMDRecordStore : NSObject
@property (nonatomic) <HMDStoreIMP> database;
@property (nonatomic) HMDStoreMemoryDB memoryDB;
- (BOOL)logicalCleanupRecordsWithRange:andConditions:storeClass:object:;
- (BOOL)migrateHistoryDataSyncAtFolder:;
- (id)andConditionsWithLocalIDRange:andConditions:;
- (void)checkDatabaseCorruptionWithPath:;
- (BOOL)cleanupRecordsWithRange:andConditions:storeClass:;
- (unsigned long long)dbFileSize;
- (BOOL)devastateDatabase;
- (BOOL)devastateDatabaseWithPath:;
- (id)memoryDB;
- (BOOL)needMigrateHistoryData;
- (void)removeDeprecatedDatabaseAsyncAtFolder:;
- (BOOL)removeFileImmediately:;
- (void)saveStoreErrorCode:;
- (void)setMemoryDB:;
- (id)init;
- (void)setDatabase:;
- (void).cxx_destruct;
- (id)database;
- (id)copyWithZone:;
+ (id)localIDRange:;
+ (id)removableFilePaths;
+ (id)allocWithZone:;
+ (id)shared;
@end
