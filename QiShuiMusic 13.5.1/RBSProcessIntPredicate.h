@interface RBSProcessIntPredicate : RBSProcessPredicateImpl
@property (nonatomic) Q identifier;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)identifier;
- (id)processPredicate;
- (unsigned long long)hash;
- (BOOL)matchesProcess:;
- (id)description;
- (id)initWithIdentifier:;
- (BOOL)isEqual:;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
