@interface BDWebCookiePlugin : IWKPluginObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_unsyncCookiesWithWKCookies:httpCookies:;
- (id)fetchCookieSyncJS;
- (void)syncCookiesForWKWebView:;
- (id)webView:loadRequest:;
- (id)webView:willInitWithFrame:configuration:;
- (id)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)webView:decidePolicyForNavigationResponse:decisionHandler:;
- (id)queue;
- (void)userContentController:didReceiveScriptMessage:;
+ (id)_cookiesStringFromCookies:;
+ (BOOL)containsCookieWithCookies:cookie:;
+ (void)syncCookiesWithRequest:completion:;
@end
