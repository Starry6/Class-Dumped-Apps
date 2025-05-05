@interface PLAssetsdServiceProxyFactory : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_inq_createServiceProxyWithErrorHandler:;
- (void)addBarrierBlock:;
- (void)_logReplyError:withCallStackSymbols:;
- (id)synchronousRemoteObjectProxyWithErrorHandler:;
- (id)_inq_createServiceProxyWithCallStackSymbols:errorHandler:;
- (id)remoteObjectProxyWithErrorHandler:;
- (id)initWithQueue:proxyCreating:proxyGetter:;
- (void).cxx_destruct;
- (id)_unboostingRemoteObjectProxy;
- (void)remoteObjectProxyWithErrorHandler:handler:;
- (id)queue;
- (id)serviceProxyWithErrorHandler:;
@end
