@interface FPService : NSObject
@property (nonatomic) @ remoteObjectProxy;
@property (nonatomic) @ synchronousRemoteObjectProxy;
- (void)dealloc;
- (void)stopExtendingLifetime;
- (id)synchronousRemoteObjectProxy;
- (id)remoteObjectProxy;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithProxy:interface:lifetimeExtender:providerDomainID:;
- (id)initWithEndpoint:interface:lifetimeExtender:providerDomainID:;
- (id)remoteObjectProxyCreating;
@end
