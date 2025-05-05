@interface RBSProcessHandlePredicateImpl : RBSProcessPredicateImpl
- (id)initWithHandle:;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)processPredicate;
- (unsigned long long)hash;
- (BOOL)matchesProcess:;
- (id)processIdentifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
