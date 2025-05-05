@interface VSDeveloperIdentityProviderChangeOperation : VSAsyncOperation
@property (nonatomic) VSOptional result;
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) VSIdentityProvider identityProvider;
@property (nonatomic) q changeKind;
- (id)result;
- (void)executionDidBegin;
- (id)init;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)_serviceWithErrorHandler:;
- (void)setResult:;
- (id)identityProvider;
- (void)setIdentityProvider:;
- (long long)changeKind;
- (void)setChangeKind:;
@end
