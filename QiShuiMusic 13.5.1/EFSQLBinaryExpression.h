@interface EFSQLBinaryExpression : NSObject
@property (nonatomic) <EFSQLExpressable> left;
@property (nonatomic) <EFSQLExpressable> right;
@property (nonatomic) Q binaryOperator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (id)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:;
- (id)left;
- (void).cxx_destruct;
- (void)setColumnExpression:;
- (id)right;
- (unsigned long long)binaryOperator;
- (id)initWithLeft:operator:right:;
@end
