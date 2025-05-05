@interface NSSubqueryExpression : NSExpression
- (id)minimalFormInContext:;
- (id)_keypathsForDerivedPropertyValidation:;
- (id)collection;
- (void)acceptVisitor:flags:;
- (void)dealloc;
- (id)predicateFormat;
- (void)allowEvaluation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_expressionWithSubstitutionVariables:;
- (id)variable;
- (id)predicate;
- (void)encodeWithCoder:;
- (id)expressionValueWithObject:context:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)_shouldUseParensWithDescription;
- (id)initWithExpression:usingIteratorVariable:predicate:;
- (id)initWithExpression:usingIteratorExpression:predicate:;
- (id)variableExpression;
+ (BOOL)supportsSecureCoding;
@end
