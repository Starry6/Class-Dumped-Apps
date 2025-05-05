@interface IWKFalconPluginObject : IWKPluginObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)webView:didInitWithFrame:configuration:;
- (id)webView:loadRequest:;
- (id)webViewWillDealloc:;
- (id)webView:didCommitNavigation:;
- (id)webView:decidePolicyForNavigationAction:decisionHandler:;
- (id)webView:decidePolicyForNavigationResponse:decisionHandler:;
@end
