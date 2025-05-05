@interface RBSCompoundAllPredicate : RBSProcessPredicateImpl
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (BOOL)matchesProcess:;
- (id)processIdentifier;
- (void).cxx_destruct;
- (id)processIdentifiers;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
