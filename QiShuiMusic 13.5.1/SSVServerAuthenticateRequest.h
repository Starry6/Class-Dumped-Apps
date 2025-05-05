@interface SSVServerAuthenticateRequest : SSRequest
@property (nonatomic) NSObject<OS_xpc_object> encodedDialog;
@property (nonatomic) SSAuthenticationContext authenticationContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)authenticationContext;
- (void)setAuthenticationContext:;
- (void).cxx_destruct;
- (id)initWithEncodedDialog:;
- (void)startWithAuthenticateResponse:;
- (id)encodedDialog;
@end
