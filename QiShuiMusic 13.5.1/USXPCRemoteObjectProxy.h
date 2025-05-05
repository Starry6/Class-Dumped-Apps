@interface USXPCRemoteObjectProxy : NSObject
+ (void)proxyFromConnection:withRetryCount:proxyHandler:;
+ (void)synchronousProxyFromConnection:withRetryCount:proxyHandler:;
@end
