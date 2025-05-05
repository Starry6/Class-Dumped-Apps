@interface RemoteAUPBServer : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) <AUPBServing> proxyInterface;
@property (nonatomic) ^{OpaqueAUPBServer=} ref;
- (void)dealloc;
- (void)setXpcConnection:;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (id)proxyInterface;
- (void)setProxyInterface:;
- (void)addSema:;
- (void)removeSema:;
- (void)signalAllSemaphores;
- (id)ref;
- (void)setRef:;
@end
