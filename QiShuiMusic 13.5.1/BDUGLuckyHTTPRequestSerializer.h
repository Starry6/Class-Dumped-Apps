@interface BDUGLuckyHTTPRequestSerializer : TTDefaultHTTPRequestSerializer
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (id)__addPolarisParamsInPostRequest:withBodyParams:;
- (id)commonParams;
+ (void)registerRequestSerializerBlock:;
+ (void)removeRequestSerializerBlock:;
@end
