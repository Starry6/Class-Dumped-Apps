@interface NSSQLPredicateAnalyser : NSObject
- (id)init;
- (void)dealloc;
- (void)visitPredicate:;
- (void)visitPredicateExpression:;
- (void)visitPredicateOperator:;
@end
