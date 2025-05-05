@interface RBSProcessIdentityPredicate : RBSProcessPredicateImpl
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)processPredicate;
- (unsigned long long)hash;
- (BOOL)matchesProcess:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
