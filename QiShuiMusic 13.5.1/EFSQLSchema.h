@interface EFSQLSchema : NSObject
@property (nonatomic) NSArray tables;
- (id)definitionWithDatabaseName:includeIndexes:;
- (id)indexDefinitionsWithDatabaseName:;
- (id)initWithTables:;
- (id)tableForName:;
- (id)definitionWithDatabaseName:;
- (void).cxx_destruct;
- (id)description;
- (id)tables;
@end
