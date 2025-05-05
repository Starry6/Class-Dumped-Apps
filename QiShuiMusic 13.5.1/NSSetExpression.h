@interface NSSetExpression : NSExpression
- (id)minimalFormInContext:;
- (id)_keypathsForDerivedPropertyValidation:;
- (void)acceptVisitor:flags:;
- (void)dealloc;
- (id)predicateFormat;
- (void)allowEvaluation;
- (id)initWithCoder:;
- (id)_expressionWithSubstitutionVariables:;
- (void)encodeWithCoder:;
- (id)expressionValueWithObject:context:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)leftExpression;
- (id)rightExpression;
- (id)initWithType:leftExpression:rightExpression:;
+ (BOOL)supportsSecureCoding;
@end
