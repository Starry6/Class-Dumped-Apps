@interface NSSubstringPredicateOperator : NSStringPredicateOperator
- (SEL)selector;
- (unsigned long long)position;
- (BOOL)performPrimitiveOperationUsingObject:andObject:;
- (id)initWithCoder:;
- (id)initWithOperatorType:modifier:variant:position:;
- (id)symbol;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
