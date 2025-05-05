@interface NSBlockPredicate : NSPredicate
- (void)acceptVisitor:flags:;
- (void)dealloc;
- (id)_predicateBlock;
- (id)predicateFormat;
- (id)initWithCoder:;
- (id)initWithBlock:;
- (BOOL)evaluateWithObject:substitutionVariables:;
- (id)predicateWithSubstitutionVariables:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
