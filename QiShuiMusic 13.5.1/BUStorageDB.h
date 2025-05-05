@interface BUStorageDB : NSObject
@property (nonatomic) NSString dbName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)selectAllCount:;
- (id)dbName;
- (BOOL)deleteWithWhere:table:;
- (id)getTableFromClass:;
- (id)selectWithWhere:orderBy:limit:tableClass:;
- (void)setDbName:;
- (BOOL)update:where:;
- (BOOL)deleteAll:;
- (void)remove:;
- (void).cxx_destruct;
- (BOOL)insert:;
- (id)initWith:;
+ (id)initWithName:option:;
@end
