@interface CJPaySDKHTTPRequestSerializer : TTHTTPRequestSerializerBase
- (void)buildRequestHeaders:parameters:;
- (id)_transferedURL:;
- (id)URLRequestWithRequestModel:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (void)applyCookieHeader:;
- (id)commonDeviceInfoString;
- (id)getEnvParams;
+ (id)serializer;
@end
