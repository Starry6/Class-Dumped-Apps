@interface NSMatchingPredicateOperator : NSStringPredicateOperator
- (SEL)selector;
- (BOOL)performPrimitiveOperationUsingObject:andObject:;
- (void)dealloc;
- (id)symbol;
- (id)initWithOperatorType:modifier:variant:;
- (BOOL)_shouldEscapeForLike;
- (void)_clearContext;
@end
