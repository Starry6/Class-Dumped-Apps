@interface RBSProcessInstance : NSObject
@property (nonatomic) RBSProcessIdentifier identifier;
@property (nonatomic) RBSProcessIdentity identity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)identity;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)identifier;
- (int)rbs_pid;
- (id)processPredicate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (BOOL)matchesProcess:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithAuid:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (BOOL)supportsSecureCoding;
+ (id)instanceWithIdentifier:identity:;
@end
