@interface NSConstantValueExpression : NSExpression
- (id)constantValue;
- (void)dealloc;
- (id)expressionValueWithObject:;
- (id)predicateFormat;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithObject:;
- (void)encodeWithCoder:;
- (id)expressionValueWithObject:context:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
