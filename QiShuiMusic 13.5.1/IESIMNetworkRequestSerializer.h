@interface IESIMNetworkRequestSerializer : TTHTTPRequestSerializerBase
- (id)URLRequestWithRequestModel:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
+ (long long)preprocessOptions;
+ (id)preprocessRequest:parameters:;
+ (void)setPreprocessOptions:;
+ (id)serializer;
+ (void)setTimeout:;
+ (double)timeout;
@end
