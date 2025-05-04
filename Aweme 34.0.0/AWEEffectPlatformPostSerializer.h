@interface AWEEffectPlatformPostSerializer : TTHTTPRequestSerializerBase
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithRequestModel:commonParams:;
+ (id)serializer;
@end
