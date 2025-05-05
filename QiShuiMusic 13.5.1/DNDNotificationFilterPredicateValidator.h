@interface DNDNotificationFilterPredicateValidator : NSObject
- (void)visitPredicate:;
- (BOOL)validatePredicate:compileTimeIssues:runTimeIssues:;
- (void)visitPredicateExpression:;
- (void).cxx_destruct;
- (void)visitPredicateOperator:;
@end
