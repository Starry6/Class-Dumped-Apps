@interface IESSaaSTIMClientTTNetworkImpRequestSerializer : TTHTTPRequestSerializerBase
- (id)URLRequestWithRequestModel:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (void)fillRequest:withParams:;
+ (id)serializer;
@end
