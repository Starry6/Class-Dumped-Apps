@interface NSAggregateExpression : NSExpression
- (id)constantValue;
- (id)collection;
- (void)acceptVisitor:flags:;
- (void)dealloc;
- (id)predicateFormat;
- (void)allowEvaluation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_expressionWithSubstitutionVariables:;
- (void)encodeWithCoder:;
- (id)expressionValueWithObject:context:;
- (id)initWithCollection:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
