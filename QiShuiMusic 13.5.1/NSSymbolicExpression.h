@interface NSSymbolicExpression : NSExpression
- (id)constantValue;
- (void)dealloc;
- (id)predicateFormat;
- (id)initWithString:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)expressionValueWithObject:context:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
