@interface NSVariableAssignmentExpression : NSExpression
- (void)acceptVisitor:flags:;
- (void)dealloc;
- (id)predicateFormat;
- (void)allowEvaluation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_expressionWithSubstitutionVariables:;
- (id)variable;
- (void)encodeWithCoder:;
- (id)expressionValueWithObject:context:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)subexpression;
- (id)initWithAssignmentVariable:expression:;
- (id)initWithAssignmentExpression:expression:;
- (id)assignmentVariable;
+ (BOOL)supportsSecureCoding;
@end
