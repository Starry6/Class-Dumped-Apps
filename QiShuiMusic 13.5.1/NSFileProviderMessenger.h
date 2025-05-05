@interface NSFileProviderMessenger : NSObject
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:;
- (void)invalidate;
- (id)initWithInterface:protocol:;
@end
