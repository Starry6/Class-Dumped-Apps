@interface NSProxyConnectionStreamTask : NSProxyConnection
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (void)URLSession:streamTask:didBecomeInputStream:outputStream:;
- (void).cxx_destruct;
- (void)stream:handleEvent:;
- (id)initWithHost:port:queue:configuration:;
- (void)read:handler:;
- (void)write:handler:;
@end
