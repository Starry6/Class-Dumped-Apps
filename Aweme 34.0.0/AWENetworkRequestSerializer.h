@interface AWENetworkRequestSerializer : TTHTTPRequestSerializerBase
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithRequestModel:commonParams:;
+ (id)preprocessRequest:;
+ (id)serializer;
@end
