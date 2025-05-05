@interface TTVideoEngineHTTPDNS : TTVideoEngineDNSBase
@property (nonatomic) TTVideoEngineNetwork networkSession;
@property (nonatomic) Q hostDnsType;
- (void)setHostDnsType:;
- (unsigned long long)hostDnsType;
- (id)initWithHostname:andType:;
- (id)networkSession;
- (void)notifyError:;
- (void)setNetworkSession:;
- (void)handleResponse:error:;
- (void)cancel;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
+ (void)setHttpDNSServerIP:;
@end
