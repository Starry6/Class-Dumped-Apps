@interface RBSProcessPlatformPredicate : RBSProcessPredicateImpl
@property (nonatomic) NSInteger platform;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)initWithPlatform:;
- (id)processPredicate;
- (unsigned long long)hash;
- (BOOL)matchesProcess:;
- (int)platform;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
