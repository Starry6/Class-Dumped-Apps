@interface AWEStudioPersistentLogDB : NSObject
@property (nonatomic) WCTDatabase database;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void)insertLogs:;
- (void)p_prepare;
- (void)insertLog:;
- (void)serialAsync:;
- (void)buildDBIfNeeded;
- (void)trackWithError:type:;
- (id)wcdb_selectCondition;
- (id)wcdb_order;
- (void)deleteLogsWithIndexes:;
- (id)databaseFolderName;
- (void)trackWithError:type:info:;
- (void)fetchCurrentUserLogs:;
- (void)deleteLogWithIndex:;
- (id)databasePath;
- (id)tableName;
- (id)database;
- (void).cxx_destruct;
- (BOOL)createTable:error:;
- (id)queue;
+ (id)shared;
@end
