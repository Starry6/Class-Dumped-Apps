@interface RBSMachPortTaskNameRight : NSObject
@property (nonatomic) NSInteger pid;
@property (nonatomic) RBSAuditToken auditToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isUsable;
- (void)dealloc;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned int)port;
- (id)initWithCoder:;
- (id)auditToken;
- (void)encodeWithCoder:;
- (int)pid;
- (void).cxx_destruct;
- (void)invalidate;
- (id)copyWithZone:;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (BOOL)supportsSecureCoding;
+ (id)taskNameForPID:;
+ (id)portForSelf;
@end
