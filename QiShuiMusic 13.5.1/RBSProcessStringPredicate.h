@interface RBSProcessStringPredicate : RBSProcessPredicateImpl
@property (nonatomic) NSString identifier;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)identifier;
- (id)processPredicate;
- (unsigned long long)hash;
- (BOOL)matchesProcess:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (BOOL)isEqual:;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
