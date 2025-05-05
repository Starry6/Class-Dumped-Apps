@interface WKHTTPCookieStore : NSObject
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sf_applySafariCookieStoragePolicy;
- (void)removeObserver:;
- (void)addObserver:;
- (void)dealloc;
- (id)_apiObject;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)getAllCookies:;
- (void)setCookie:completionHandler:;
- (void)deleteCookie:completionHandler:;
- (void)_getCookiesForURL:completionHandler:;
- (void)_setCookieAcceptPolicy:completionHandler:;
- (void)_flushCookiesToDiskWithCompletionHandler:;
@end
