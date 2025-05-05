@interface NSTernaryExpression : NSExpression
- (id)_keypathsForDerivedPropertyValidation:;
- (void)acceptVisitor:flags:;
- (void)dealloc;
- (id)predicateFormat;
- (void)allowEvaluation;
- (id)initWithCoder:;
- (id)_expressionWithSubstitutionVariables:;
- (id)predicate;
- (void)encodeWithCoder:;
- (id)expressionValueWithObject:context:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)trueExpression;
- (id)falseExpression;
- (id)initWithPredicate:trueExpression:falseExpression:;
+ (BOOL)supportsSecureCoding;
@end
