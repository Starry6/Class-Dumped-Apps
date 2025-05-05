@interface JSONHTTPClient : NSObject
+ (void)JSONFromURLWithString:method:params:orBodyData:headers:completion:;
+ (void)JSONFromURLWithString:method:params:orBodyString:headers:completion:;
+ (void)JSONFromURLWithString:method:params:orBodyString:completion:;
+ (id)contentTypeForRequestString:;
+ (void)getJSONFromURLWithString:completion:;
+ (void)getJSONFromURLWithString:params:completion:;
+ (void)postJSONFromURLWithString:bodyData:completion:;
+ (void)postJSONFromURLWithString:bodyString:completion:;
+ (void)postJSONFromURLWithString:params:completion:;
+ (void)requestDataFromURL:method:params:headers:handler:;
+ (void)requestDataFromURL:method:requestBody:headers:handler:;
+ (void)setDefaultTextEncoding:;
+ (void)setRequestContentType:;
+ (id)urlEncode:;
+ (void)setCachingPolicy:;
+ (void)setTimeoutInSeconds:;
+ (id)requestHeaders;
@end
