@interface NSCustomPredicateOperator : NSPredicateOperator
- (SEL)selector;
- (BOOL)performPrimitiveOperationUsingObject:andObject:;
- (id)initWithCustomSelector:modifier:;
- (id)initWithCoder:;
- (id)symbol;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
