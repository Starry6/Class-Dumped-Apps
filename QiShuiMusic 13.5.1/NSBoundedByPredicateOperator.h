@interface NSBoundedByPredicateOperator : NSPredicateOperator
- (SEL)selector;
- (void)_setOptions:;
- (BOOL)performPrimitiveOperationUsingObject:andObject:;
- (id)symbol;
- (id)copyWithZone:;
@end
