@interface BDWebInterceptorPluginObject : IWKPluginObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)webView:willInitWithFrame:configuration:;
- (id)webView:didFinishNavigation:;
- (id)webView:didCommitNavigation:;
- (id)webView:didReceiveServerRedirectForProvisionalNavigation:;
- (id)webView:decidePolicyForNavigationAction:decisionHandler:;
- (id)webView:didStartProvisionalNavigation:;
- (id)webView:decidePolicyForNavigationResponse:decisionHandler:;
@end
