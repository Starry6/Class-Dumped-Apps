@interface IESECHTTPJSONRequestSerializer : TTDefaultHTTPRequestSerializer
- (id)JSONify:JSON:;
- (id)URLRequestWithRequestModel:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
+ (id)serializer;
@end
