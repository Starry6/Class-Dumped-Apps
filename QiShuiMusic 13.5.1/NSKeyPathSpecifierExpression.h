@interface NSKeyPathSpecifierExpression : NSExpression
- (id)constantValue;
- (void)acceptVisitor:flags:;
- (void)dealloc;
- (id)predicateFormat;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithObject:;
- (void)encodeWithCoder:;
- (id)keyPath;
- (id)expressionValueWithObject:context:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
