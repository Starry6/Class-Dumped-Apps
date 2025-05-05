@interface EFSQLRow : NSObject
@property (nonatomic) ^{sqlite3_stmt=} statement;
@property (nonatomic) EFSQLPreparedStatement preparedStatement;
@property (nonatomic) NSDictionary columns;
@property (nonatomic) BOOL namedColumnsInitialized;
@property (nonatomic) Q columnCount;
- (unsigned long long)columnCount;
- (id)columns;
- (id)statement;
- (id)initWithColumns:;
- (id)objectAtIndexedSubscript:;
- (void)setNamedColumnsInitialized:;
- (id)debugDescription;
- (id)columnNames;
- (BOOL)columnExistsWithName:;
- (BOOL)namedColumnsInitialized;
- (void)setColumnCount:;
- (id)objectForKeyedSubscript:;
- (id)initWithSQLiteStatement:;
- (BOOL)columnExistsAtIndex:;
- (id)_queryString;
- (void)setPreparedStatement:;
- (void).cxx_destruct;
- (id)preparedStatement;
- (id)initWithPreparedStatement:;
@end
