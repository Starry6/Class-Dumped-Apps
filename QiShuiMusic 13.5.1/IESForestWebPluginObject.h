@interface IESForestWebPluginObject : IWKPluginObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)convertToWaitFixRequest:;
- (id)urlWithURLString:queryParameters:;
- (id)webView:loadRequest:;
- (id)webView:willInitWithFrame:configuration:;
- (id)webViewWillDealloc:;
- (id)webView:didCommitNavigation:;
- (id)webView:decidePolicyForNavigationAction:decisionHandler:;
@end
