@interface MEComposeSession : NSObject
@property (nonatomic) NSUUID sessionID;
@property (nonatomic) MEComposeContext composeContext;
@property (nonatomic) MERemoteExtension remoteExtension;
@property (nonatomic) MEMessage mailMessage;
@property (nonatomic) <MEComposeSessionHostProtocol_XPC> remoteHostContext;
- (void)setSessionID:;
- (id)sessionID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)mailMessage;
- (id)initWithSessionID:composeContext:mailMessage:;
- (void)reloadSession;
- (void)setMailMessage:;
- (id)composeContext;
- (void)setComposeContext:;
- (id)remoteExtension;
- (void)setRemoteExtension:;
- (id)remoteHostContext;
- (void)setRemoteHostContext:;
+ (BOOL)supportsSecureCoding;
@end
