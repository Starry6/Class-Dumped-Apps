@interface CJPaySDKJSONRequestSerializer : CJPaySDKHTTPRequestSerializer
- (id)URLRequestWithRequestModel:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (void)request:setHTTPBodyWithParams:;
@end
