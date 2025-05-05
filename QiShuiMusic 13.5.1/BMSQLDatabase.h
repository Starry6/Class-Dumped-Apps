@interface BMSQLDatabase : NSObject
@property (nonatomic) NSArray privileges;
@property (nonatomic) BOOL isColumnAccessLoggingEnabled;
@property (nonatomic) NSArray accessedColumns;
@property (nonatomic) ^{sqlite3=} db;
@property (nonatomic) NSArray virtualTables;
- (id)db;
- (id)init;
- (id)executeQuery:;
- (void)dealloc;
- (id)privileges;
- (void).cxx_destruct;
- (id)description;
- (BOOL)executeStatement:error:;
- (id)_executeQuery:;
- (id)initWithPrivileges:isColumnAccessLoggingEnabled:;
- (id)initWithAdditionalVirtualTables:privileges:isColumnAccessLoggingEnabled:;
- (id)initWithStreams:library:privileges:isColumnAccessLoggingEnabled:error:;
- (id)initWithVirtualTables:privileges:isColumnAccessLoggingEnabled:enableAuthorizer:error:;
- (id)virtualTableForName:;
- (BOOL)attachDatabase:name:error:;
- (id)SQLSchemaString;
- (void)logColumnAccess:tableName:;
- (void)resetColumnAccessLog;
- (BOOL)registerFunctionWithName:numArgs:function:error:;
- (BOOL)isColumnAccessLoggingEnabled;
- (id)accessedColumns;
- (id)virtualTables;
@end
