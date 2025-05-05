@interface EFSQLDisqualifiedColumnExpression : EFSQLColumnExpression
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) EFSQLColumnExpression columnExpression;
- (void)ef_renderSQLExpressionInto:;
- (id)columnExpression;
- (id)cachedSelf;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
