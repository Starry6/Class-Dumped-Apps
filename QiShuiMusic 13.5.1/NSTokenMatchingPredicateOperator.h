@interface NSTokenMatchingPredicateOperator : NSStringPredicateOperator
- (SEL)selector;
- (BOOL)performPrimitiveOperationUsingObject:andObject:;
- (id)symbol;
@end
