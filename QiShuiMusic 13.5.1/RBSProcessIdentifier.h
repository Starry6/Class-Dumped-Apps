@interface RBSProcessIdentifier : NSObject
@property (nonatomic) NSInteger pid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithRBSXPCCoder:;
- (id)initWithPid:;
- (void)encodeWithRBSXPCCoder:;
- (int)rbs_pid;
- (id)processPredicate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)matchesProcess:;
- (void)encodeWithCoder:;
- (int)pid;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (BOOL)supportsSecureCoding;
+ (id)identifierWithPid:;
+ (id)identifierForCurrentProcess;
+ (id)identifierForIdentifier:;
@end
