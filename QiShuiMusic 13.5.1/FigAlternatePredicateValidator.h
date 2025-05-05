@interface FigAlternatePredicateValidator : NSObject
- (void)dealloc;
- (void)visitPredicate:;
- (BOOL)validateWithError:;
- (void)visitPredicateExpression:;
- (void)visitPredicateOperator:;
- (id)initWithPredicate:;
- (BOOL)_validateKeyPath:;
- (BOOL)_unsafeEvaluateKeyPathWithDummy:;
- (BOOL)_keyPathComponentIsAllowed:;
- (id)_keyPathComponents:;
@end
