@interface TTDefaultHTTPRequestSerializer : TTHTTPRequestSerializerBase
- (id)_transferedURL:;
- (id)URLRequestWithRequestModel:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (void)applyCookieHeader:;
- (void)buildRequestHeaders:;
- (id)lucky_buildCommonParamsWithCommonParams:;
- (id)lucky_buildParamsWithParams:requestCommonParams:;
- (void)lucky_trackWithURL:commonParams:;
+ (id)serializer;
@end
