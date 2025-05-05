@interface BDLNetworkJSONRequestSerializer : TTDefaultHTTPRequestSerializer
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (id)setRequestBody:withParameters:;
@end
