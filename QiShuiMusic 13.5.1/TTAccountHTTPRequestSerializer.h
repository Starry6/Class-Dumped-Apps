@interface TTAccountHTTPRequestSerializer : TTHTTPRequestSerializerBase
@property (nonatomic) NSString defaultUserAgent;
- (void)buildRequestHeaders:parameters:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (void)applyCookieHeader:;
- (void)applyCookieHeaderFrom:toRequest:;
- (void)buildRequestHeaders:;
- (id)defaultUserAgent;
- (id)defaultUserAgentString;
- (void).cxx_destruct;
- (void)setDefaultUserAgent:;
+ (id)serializer;
@end
