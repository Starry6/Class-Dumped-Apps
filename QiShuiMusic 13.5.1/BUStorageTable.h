@interface BUStorageTable : NSObject
@property (nonatomic) NSString tableName;
@property (nonatomic) NSString path;
- (id)_limit:;
- (BOOL)_clostDB;
- (id)_orderBy:;
- (void)_pbu_logWithCurrentQueueWithSel:;
- (void)_pbu_table_errorlogWithSql:errorMsg:;
- (BOOL)deleteWithWhere:;
- (id)initWithDatabasePath:tableName:sqlite:;
- (long long)selectAllCount;
- (id)selectWithWhere:orderBy:limit:class:;
- (BOOL)update:where:;
- (BOOL)updateWithSqlString:where:;
- (BOOL)deleteAll;
- (id)path;
- (id)tableName;
- (BOOL)_openDB;
- (void)setPath:;
- (void)setTableName:;
- (void).cxx_destruct;
- (BOOL)insert:;
@end
