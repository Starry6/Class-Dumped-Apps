@interface BDPIAPlugin : IWKPluginObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)removeWaitFix:;
- (id)webView:loadRequest:;
- (id)webViewWillDealloc:;
- (id)webView:didFinishNavigation:;
- (id)webView:didFailProvisionalNavigation:withError:;
- (id)webView:didCommitNavigation:;
- (id)webView:decidePolicyForNavigationAction:decisionHandler:;
- (id)webView:didFailNavigation:withError:;
- (long long)priority;
@end
