@interface STXPCRemoteObjectProxy : NSObject
+ (void)proxyFromConnection:proxyHandler:;
+ (void)_proxyFromConnection:withRetryCount:proxyHandler:;
+ (void)synchronousProxyFromConnection:proxyHandler:;
+ (void)_synchronousProxyFromConnection:withRetryCount:proxyHandler:;
@end
