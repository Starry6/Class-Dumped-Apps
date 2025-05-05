@interface NSEqualityPredicateOperator : NSPredicateOperator
- (void)_setOptions:;
- (BOOL)performPrimitiveOperationUsingObject:andObject:;
- (BOOL)isNegation;
- (id)initWithOperatorType:modifier:negate:options:;
- (id)predicateFormat;
- (void)setNegation:;
- (id)initWithOperatorType:modifier:negate:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
