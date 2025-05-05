@interface BDUGLuckyHTTPPlainRequestSerializer : TTDefaultHTTPRequestSerializer
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (id)commonParams;
+ (void)registerRequestSerializerBlock:;
+ (void)removeRequestSerializerBlock:;
@end
