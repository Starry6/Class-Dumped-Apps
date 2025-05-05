@interface LAACLCoder : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)addConstraint:;
- (void)setAuthenticationType:;
- (id)encode;
- (void)addCredential:credentialType:;
- (void)setFallbackAuthenticationType:;
@end
