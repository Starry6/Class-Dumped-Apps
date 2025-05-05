@interface AVAssetVariantPresentationHeightPredicate : NSPredicate
- (void)acceptVisitor:flags:;
- (void)dealloc;
- (id)predicateFormat;
- (id)initWithCoder:;
- (BOOL)evaluateWithObject:substitutionVariables:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithPresentationHeight:operatorType:;
+ (BOOL)supportsSecureCoding;
@end
