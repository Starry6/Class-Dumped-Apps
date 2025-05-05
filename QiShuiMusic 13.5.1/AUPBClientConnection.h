@interface AUPBClientConnection : NSObject
@property (nonatomic) NSXPCConnection xpcconnection;
@property (nonatomic) <AUPBInspecting> proxyInterface;
- (id)xpcconnection;
- (void)setXpcconnection:;
- (id)proxyInterface;
- (void)setProxyInterface:;
@end
