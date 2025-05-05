@interface AVAssetVariantChannelCountPredicate : NSPredicate
- (void)acceptVisitor:flags:;
- (void)dealloc;
- (id)predicateFormat;
- (id)initWithCoder:;
- (BOOL)evaluateWithObject:substitutionVariables:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithChannelCount:mediaSelectionOption:operatorType:;
+ (BOOL)supportsSecureCoding;
@end
