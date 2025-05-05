@interface NSSelfExpression : NSExpression
- (id)init;
- (id)predicateFormat;
- (BOOL)_isDeallocating;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)autorelease;
- (id)release;
- (void)encodeWithCoder:;
- (id)retain;
- (BOOL)_tryRetain;
- (id)expressionValueWithObject:context:;
- (id)_initPrivate;
- (unsigned long long)retainCount;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_allowsEvaluation;
+ (id)defaultInstance;
@end
