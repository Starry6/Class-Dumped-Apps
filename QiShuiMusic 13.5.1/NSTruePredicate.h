@interface NSTruePredicate : NSPredicate
- (void)acceptVisitor:flags:;
- (id)predicateFormat;
- (BOOL)_allowsEvaluation;
- (void)allowEvaluation;
- (BOOL)_isDeallocating;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)evaluateWithObject:substitutionVariables:;
- (id)autorelease;
- (id)release;
- (void)encodeWithCoder:;
- (id)retain;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;
@end
