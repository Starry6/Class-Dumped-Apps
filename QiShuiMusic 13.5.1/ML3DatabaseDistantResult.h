@interface ML3DatabaseDistantResult : ML3DatabaseResult
@property (nonatomic) ML3DatabaseDistantConnection distantConnection;
@property (nonatomic) NSString sql;
@property (nonatomic) NSArray parameters;
- (id)initWithStatement:;
- (id)init;
- (id)distantConnection;
- (void)_remoteEnumerateRowsWithBlock:;
- (void)_localEnumerateRowsWithBlock:;
- (BOOL)_fetchRowsIfEmpty;
- (id)parameters;
- (id)initWithDistantConnection:sql:parameters:;
- (id)sql;
- (unsigned long long)indexForColumnName:;
- (void).cxx_destruct;
- (id)description;
- (id)columnNameIndexMap;
- (void)enumerateRowsWithBlock:;
@end
