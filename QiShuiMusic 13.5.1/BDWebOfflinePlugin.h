@interface BDWebOfflinePlugin : IWKPluginObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startOffline:;
- (void)stopOffline:;
- (id)webView:didInitWithFrame:configuration:;
- (id)webView:loadRequest:;
- (id)webViewWillDealloc:;
- (id)webView:didFinishNavigation:;
- (id)webView:decidePolicyForNavigationAction:decisionHandler:;
- (id)webView:didFailNavigation:withError:;
@end
