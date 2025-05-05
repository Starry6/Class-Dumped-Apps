@interface IWKPluginNavigationDelegateProxy : NSObject
@property (nonatomic) <WKNavigationDelegate> proxy;
@property (nonatomic) WKWebView webView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWebView:;
- (void)setProxy:;
- (BOOL)respondsToSelector:;
- (id)proxy;
- (void)webView:didFinishNavigation:;
- (id)webView;
- (id)methodSignatureForSelector:;
- (void)webView:didFailProvisionalNavigation:withError:;
- (void)webView:didCommitNavigation:;
- (void)webView:didReceiveServerRedirectForProvisionalNavigation:;
- (BOOL)isProxy;
- (void)webView:didReceiveAuthenticationChallenge:completionHandler:;
- (void)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (void)webView:didStartProvisionalNavigation:;
- (void)webViewWebContentProcessDidTerminate:;
- (void)webView:decidePolicyForNavigationResponse:decisionHandler:;
- (void)forwardInvocation:;
- (void)webView:didFailNavigation:withError:;
@end
