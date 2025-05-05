@interface EFSQLNotExpression : NSObject
@property (nonatomic) <EFSQLValueExpressable> expression;
@property (nonatomic) NSString ef_SQLExpression;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_SQLIsolatedExpression;
- (id)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:;
- (id)expression;
- (void).cxx_destruct;
- (id)initWithExpression:;
@end
