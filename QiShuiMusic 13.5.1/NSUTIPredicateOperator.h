@interface NSUTIPredicateOperator : NSPredicateOperator
- (BOOL)performPrimitiveOperationUsingObject:andObject:;
- (id)predicateFormat;
- (unsigned long long)variant;
- (id)initForVariant:;
- (id)copyWithZone:;
@end
