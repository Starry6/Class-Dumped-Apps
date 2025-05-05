@interface ABUDBTable : NSObject
@property (nonatomic) NSString tableName;
@property (nonatomic) NSString path;
- (id)_limit:;
- (id)_orderBy:;
- (BOOL)deleteWithWhere:;
- (id)initWithDatabasePath:tableName:sqlite:;
- (id)selectWithWhere:orderBy:limit:class:;
- (BOOL)update:where:;
- (BOOL)deleteAll;
- (id)path;
- (id)tableName;
- (BOOL)_openDB;
- (void)setPath:;
- (void)setTableName:;
- (void).cxx_destruct;
- (BOOL)_closeDB;
- (BOOL)insert:;
@end
