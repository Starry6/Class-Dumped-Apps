@interface EFSQLBitExpression : NSObject
@property (nonatomic) <EFSQLExpressable> right;
@property (nonatomic) Q bitwiseOperator;
@property (nonatomic) <EFSQLExpressable> left;
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
- (void)setLeft:;
- (id)initWithLeft:bitwiseOperator:right:;
- (unsigned long long)bitwiseOperator;
+ (id)leftShift:by:;
+ (id)rightShift:by:;
+ (id)and:with:;
+ (id)or:with:;
@end
