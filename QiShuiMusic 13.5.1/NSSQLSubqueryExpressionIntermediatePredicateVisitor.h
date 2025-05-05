@interface NSSQLSubqueryExpressionIntermediatePredicateVisitor : NSObject
- (void)dealloc;
- (void)visitPredicate:;
- (void)visitPredicateExpression:;
- (BOOL)checkPredicate:;
@end
