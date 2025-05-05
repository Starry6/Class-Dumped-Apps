@interface EFParenthesizedSQLExpression : NSObject
- (id)ef_SQLIsolatedExpression;
- (id)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:;
- (BOOL)respondsToSelector:;
- (id)initWithExpressable:;
- (void)ef_renderSQLExpressionInto:conjoiner:;
- (void).cxx_destruct;
+ (id)parenthesizedValueExpressable:;
+ (id)parenthesizedValueCollectionExpressable:;
@end
