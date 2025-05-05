@interface RBSTerminateRequest : RBSRequest
@property (nonatomic) BOOL targetsAllManagedProcesses;
@property (nonatomic) RBSProcessPredicate predicate;
@property (nonatomic) RBSTerminateContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithPredicate:context:;
- (id)initWithRBSXPCCoder:;
- (id)context;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (BOOL)execute:;
- (id)predicate;
- (id)initWithProcessIdentity:context:;
- (id)initForAllManagedWithReason:service:;
- (void)setPredicate:;
- (id)initWithProcessIdentifier:context:;
- (void).cxx_destruct;
- (id)description;
- (id)initForAllManagedWithReason:;
- (BOOL)isEqual:;
- (BOOL)execute:error:;
- (id)copyWithZone:;
- (BOOL)targetsAllManagedProcesses;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
