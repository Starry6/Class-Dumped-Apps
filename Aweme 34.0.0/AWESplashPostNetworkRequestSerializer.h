@interface AWESplashPostNetworkRequestSerializer : AWENetworkRequestSerializer
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)setupHTTPBodyWithRequest:params:;
@end
