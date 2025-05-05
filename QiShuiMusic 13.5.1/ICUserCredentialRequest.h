@interface ICUserCredentialRequest : NSObject
@property (nonatomic) ICUserIdentity identity;
@property (nonatomic) ICUserIdentityStore identityStore;
@property (nonatomic) ICClientInfo clientInfo;
@property (nonatomic) q qualityOfService;
@property (nonatomic) double timeoutInterval;
- (void)setQualityOfService:;
- (id)identityStore;
- (id)identity;
- (long long)qualityOfService;
- (id)clientInfo;
- (id)initWithIdentity:identityStore:clientInfo:;
- (double)timeoutInterval;
- (void).cxx_destruct;
- (void)setTimeoutInterval:;
- (id)copyWithZone:;
@end
