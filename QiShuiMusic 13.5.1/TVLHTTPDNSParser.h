@interface TVLHTTPDNSParser : TVLBaseDNSParser
@property (nonatomic) Q provider;
- (id)requestURLWithHost:provider:;
- (void)setProvider:;
- (void)handleResponse:error:;
- (void)cancel;
- (void)start;
- (unsigned long long)provider;
- (void).cxx_destruct;
- (id)initWithHostname:;
+ (id)serverHost;
+ (void)setServerHost:;
@end
