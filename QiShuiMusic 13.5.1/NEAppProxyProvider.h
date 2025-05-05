@interface NEAppProxyProvider : NETunnelProvider
@property (nonatomic) Q maxWriteSize;
- (void)startProxyWithOptions:completionHandler:;
- (void)stopProxyWithReason:completionHandler:;
- (void)cancelProxyWithError:;
- (BOOL)handleNewFlow:;
- (BOOL)handleNewUDPFlow:initialRemoteEndpoint:;
- (void)setMaxWriteSize:;
- (unsigned long long)maxWriteSize;
@end
