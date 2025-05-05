@interface BSMachPortTaskNameRight : BSMachPortSendRight
@property (nonatomic) NSInteger pid;
@property (nonatomic) BSAuditToken auditToken;
- (id)initWithPID:;
- (id)init;
- (void)encodeWithXPCDictionary:;
- (id)initWithCoder:;
- (id)auditToken;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (int)pid;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)taskNameForPID:;
@end
