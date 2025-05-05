@interface RPCompanionLinkClientDaemonConnection_XPC : NSObject
@property (nonatomic) NSXPCConnection cnx;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)remoteObjectProxy;
- (void)setCnx:;
- (id)remoteObjectProxyWithErrorHandler:;
- (void).cxx_destruct;
- (id)cnx;
- (id)initWithConnection:;
- (void)invalidate;
@end
