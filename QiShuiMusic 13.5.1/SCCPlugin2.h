@interface SCCPlugin2 : IWKPluginObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)ifSCCEnable:;
- (id)webViewWillDealloc:;
- (id)webView:didFinishNavigation:;
- (id)webView:decidePolicyForNavigationAction:decisionHandler:;
- (id)webView:decidePolicyForNavigationResponse:decisionHandler:;
@end
