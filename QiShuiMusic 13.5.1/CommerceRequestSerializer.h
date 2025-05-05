@interface CommerceRequestSerializer : TTDefaultHTTPRequestSerializer
- (id)URLRequestWithRequestModel:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (id)fixedCommonParams:;
- (id)fixedVersionCodeWithVersionCode:;
@end
