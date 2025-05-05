@interface NEAppProxyTCPFlow : NEAppProxyFlow
@property (nonatomic) NWEndpoint remoteEndpoint;
- (void).cxx_destruct;
- (id)description;
- (id)remoteEndpoint;
- (id)initWithNEFlow:queue:;
- (void)readDataWithCompletionHandler:;
- (void)writeData:withCompletionHandler:;
@end
