@interface NEProcessIdentity : NSObject
@property (nonatomic) NSInteger pid;
@property (nonatomic) NSInteger pidVersion;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSData auditTokenData;
- (id)uuid;
- (id)auditTokenData;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (int)pid;
- (void).cxx_destruct;
- (id)initFromXPCConnection:;
- (id)initFromXPCMessage:;
- (int)pidVersion;
+ (BOOL)supportsSecureCoding;
@end
