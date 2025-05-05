@interface NSProxyConnection : NSObject
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithHost:port:queue:configuration:;
- (void)read:handler:;
- (void)write:handler:;
@end
