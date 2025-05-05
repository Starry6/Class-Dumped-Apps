@interface MPTCPConverterProxyClient : NSObject
+ (id)getServerConnection;
+ (void)startProxyToMPTCPConverterProxyWithCompletionHandler:completionHandler:;
+ (void)stopProxyToMPTCPConverterProxyWithCompletionHandler:completionHandler:;
@end
