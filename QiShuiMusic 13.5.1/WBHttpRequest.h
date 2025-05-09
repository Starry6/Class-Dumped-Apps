@interface WBHttpRequest : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString httpMethod;
@property (nonatomic) NSDictionary params;
@property (nonatomic) <WBHttpRequestDelegate> delegate;
@property (nonatomic) NSString tag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)appendUTF8Body:dataString:;
- (void)connectOnQueue:withCompletionHandler:;
- (id)initWithURL:httpMethod:params:delegate:withTag:;
- (id)initWithURL:httpMethod:params:queue:withCompletionHandler:;
- (id)initWithURL:httpMethod:params:withCompletionHandler:;
- (id)postBodyHasRawData:;
- (id)serializeParams:;
- (void)setHttpHeaderForRequest:;
- (void)URLSession:dataTask:didReceiveData:;
- (id)tag;
- (id)url;
- (void)dealloc;
- (void)URLSession:task:didCompleteWithError:;
- (void)disconnect;
- (id)httpMethod;
- (void)setDelegate:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (void)setHttpMethod:;
- (void)URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:;
- (void)URLSession:dataTask:willCacheResponse:completionHandler:;
- (void)setUrl:;
- (void)setTag:;
- (id)delegate;
- (void)failedWithError:;
- (void).cxx_destruct;
- (void)connectWithCompletionHandler:;
- (void)connect;
- (id)params;
- (void)setParams:;
- (void)handleResponseData:;
+ (id)serializeURL:params:httpMethod:;
+ (void)cleanSubCookies;
+ (id)requestWithAccessToken:url:httpMethod:params:delegate:withTag:;
+ (id)requestWithAccessToken:url:httpMethod:params:delegate:withTag:isGuest:;
+ (id)requestWithAccessToken:url:httpMethod:params:queue:withCompletionHandler:;
+ (id)requestWithAccessToken:url:httpMethod:params:queue:withCompletionHandler:isGuest:;
+ (id)requestWithURL:httpMethod:params:delegate:withTag:;
+ (id)requestWithURL:httpMethod:params:queue:withCompletionHandler:;
+ (id)requestWithURL:httpMethod:params:withCompletionHandler:;
@end
