@interface NSPredicateOperator : NSObject
- (SEL)selector;
- (void)_setOptions:;
- (void)acceptVisitor:flags:;
- (BOOL)performPrimitiveOperationUsingObject:andObject:;
- (unsigned long long)modifier;
- (id)predicateFormat;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)symbol;
- (id)initWithOperatorType:;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (unsigned long long)operatorType;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithOperatorType:modifier:;
- (id)initWithOperatorType:modifier:options:;
- (BOOL)performOperationUsingObject:andObject:;
- (void)_setModifier:;
+ (BOOL)supportsSecureCoding;
+ (id)_getSymbolForType:;
+ (SEL)_getSelectorForType:;
+ (id)operatorWithType:modifier:options:;
+ (id)_newOperatorWithType:modifier:options:;
+ (id)operatorWithCustomSelector:modifier:;
@end
