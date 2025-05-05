@interface NSFunctionExpression : NSExpression
- (id)minimalFormInContext:;
- (id)_keypathsForDerivedPropertyValidation:;
- (id)_mapKVCOperatorsToFunctionsInContext:;
- (SEL)selector;
- (void)acceptVisitor:flags:;
- (void)dealloc;
- (id)arguments;
- (id)function;
- (id)predicateFormat;
- (BOOL)_allowsEvaluation;
- (void)allowEvaluation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_expressionWithSubstitutionVariables:;
- (void)encodeWithCoder:;
- (id)expressionValueWithObject:context:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)operand;
- (BOOL)_shouldUseParensWithDescription;
- (id)initWithSelector:argumentArray:;
- (id)initWithExpressionType:operand:selector:argumentArray:;
- (id)initWithTarget:selectorName:arguments:;
- (id)binaryOperatorForSelector;
+ (BOOL)supportsSecureCoding;
@end
