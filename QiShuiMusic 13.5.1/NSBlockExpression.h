@interface NSBlockExpression : NSExpression
- (void)acceptVisitor:flags:;
- (void)dealloc;
- (id)arguments;
- (id)predicateFormat;
- (id)initWithCoder:;
- (id)_expressionWithSubstitutionVariables:;
- (void)encodeWithCoder:;
- (id)expressionValueWithObject:context:;
- (id)copyWithZone:;
- (id)expressionBlock;
- (id)initWithType:block:arguments:;
+ (BOOL)supportsSecureCoding;
@end
