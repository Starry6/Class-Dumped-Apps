@interface BDACSReportPluginObject : IWKPluginObject
@property (nonatomic) NSString jumpURLString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpURLString;
- (void)setJumpURLString:;
- (id)webView:willInitWithFrame:configuration:;
- (id)webViewWillDealloc:;
- (id)webView:didFinishNavigation:;
- (id)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (id)webView:didStartProvisionalNavigation:;
@end
