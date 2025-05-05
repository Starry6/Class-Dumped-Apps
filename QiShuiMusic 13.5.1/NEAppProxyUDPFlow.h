@interface NEAppProxyUDPFlow : NEAppProxyFlow
@property (nonatomic) NWEndpoint localEndpoint;
- (void).cxx_destruct;
- (id)description;
- (id)localEndpoint;
- (void)readDatagramsWithCompletionHandler:;
- (id)initWithNEFlow:queue:;
- (void)openWithLocalEndpoint:completionHandler:;
- (void)writeDatagrams:sentByEndpoints:completionHandler:;
@end
