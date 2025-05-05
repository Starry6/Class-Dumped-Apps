@interface EFSQLIndexSchema : NSObject
@property (nonatomic) NSArray indexedColumns;
@property (nonatomic) <EFSQLValueExpressable> where;
@property (nonatomic) BOOL unique;
@property (nonatomic) NSString name;
@property (nonatomic) NSString tableName;
- (id)tableName;
- (id)definitionWithDatabaseName:;
- (void).cxx_destruct;
- (id)initWithTableName:columnNames:;
- (id)name;
- (id)where;
- (BOOL)unique;
- (id)initWithTableName:columnNames:where:unique:;
- (id)initWithTableName:indexedColumns:;
- (id)initWithName:tableName:indexedColumns:where:unique:;
- (id)initWithTableName:indexedColumns:where:unique:;
- (id)indexedColumns;
@end
