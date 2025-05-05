@interface EFSQLUpsertStatement : NSObject
@property (nonatomic) <EFSQLInsertStatementValue> insertValue;
@property (nonatomic) <EFSQLUpdateStatementValue> updateValue;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) NSString queryString;
@property (nonatomic) <EFSQLValueExpressable> whereClause;
- (void)setWhereClause:;
- (BOOL)isEmpty;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (id)whereClause;
- (void).cxx_destruct;
- (void)enumerateBindingNamesAndValuesUsingBlock:;
- (id)queryString;
- (id)initWithTable:conflictTarget:;
- (id)insertValue;
- (id)updateValue;
- (id)excludedColumnExpressionForColumnName:;
@end
