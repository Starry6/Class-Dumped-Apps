@interface BDInstallRequestSerializer : TTDefaultHTTPRequestSerializer
- (void)commonHandleWithRequest:params:;
- (id)URLRequestWithRequestModel:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (id)old_URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
@end
