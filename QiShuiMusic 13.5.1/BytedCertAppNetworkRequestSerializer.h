@interface BytedCertAppNetworkRequestSerializer : TTHTTPRequestSerializerBase
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
+ (id)serializer;
@end
