@interface NEDNSProxyProvider : NEProvider
@property (nonatomic) NSArray systemDNSSettings;
- (void).cxx_destruct;
- (void)startProxyWithOptions:completionHandler:;
- (void)stopProxyWithReason:completionHandler:;
- (void)cancelProxyWithError:;
- (BOOL)handleNewFlow:;
- (BOOL)handleNewUDPFlow:initialRemoteEndpoint:;
- (id)systemDNSSettings;
- (void)setSystemDNSSettings:;
@end
