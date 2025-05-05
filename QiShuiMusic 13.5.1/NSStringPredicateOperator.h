@interface NSStringPredicateOperator : NSPredicateOperator
- (void)_setOptions:;
- (id)_modifierString;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (unsigned long long)flags;
- (id)initWithOperatorType:modifier:variant:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
