@interface ABUDBSecurityTable : ABUDBTable
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (BOOL)deleteWithWhere:;
- (void)deleteWithWhere:callback:;
- (id)initWithDatabasePath:tableName:sqlite:;
- (void)insert:callback:;
- (id)selectWithWhere:orderBy:limit:class:;
- (void)selectWithWhere:orderBy:limit:class:callback:;
- (BOOL)update:where:;
- (void)update:where:callback:;
- (void).cxx_destruct;
- (void)setQueue:;
- (BOOL)insert:;
- (id)queue;
+ (id)_defaultQueue;
@end
