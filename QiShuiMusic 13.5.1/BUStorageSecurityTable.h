@interface BUStorageSecurityTable : BUStorageTable
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (BOOL)deleteWithWhere:;
- (void)deleteWithWhere:callback:;
- (id)initWithDatabasePath:tableName:sqlite:;
- (void)insert:callback:;
- (long long)selectAllCount;
- (id)selectWithWhere:orderBy:limit:class:;
- (void)selectWithWhere:orderBy:limit:class:callback:;
- (BOOL)update:where:;
- (void)update:where:callback:;
- (BOOL)updateWithSqlString:where:;
- (BOOL)deleteAll;
- (void).cxx_destruct;
- (void)setQueue:;
- (BOOL)insert:;
- (id)queue;
+ (id)_defaultQueue;
@end
