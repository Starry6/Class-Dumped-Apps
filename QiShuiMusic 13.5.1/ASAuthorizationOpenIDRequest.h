@interface ASAuthorizationOpenIDRequest : ASAuthorizationRequest
@property (nonatomic) NSArray requestedScopes;
@property (nonatomic) NSString state;
@property (nonatomic) NSString nonce;
@property (nonatomic) NSString requestedOperation;
- (void)setState:;
- (id)nonce;
- (id)requestedOperation;
- (id)state;
- (void).cxx_destruct;
- (void)setRequestedOperation:;
- (void)setNonce:;
- (void)setRequestedScopes:;
- (id)requestedScopes;
- (BOOL)supportsStyle:;
@end
