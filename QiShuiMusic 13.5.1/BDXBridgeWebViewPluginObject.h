@interface BDXBridgeWebViewPluginObject : IWKPluginObject
@property (nonatomic) NSURL commitURL;
@property (nonatomic) <BDXBridgeWebViewPluginObjectJSHandler> jsHandler;
@property (nonatomic) <BDXBridgeWebViewPluginObjectIFrameHandler> iframeHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iframeHandler;
- (id)jsHandler;
- (void)setIframeHandler:;
- (void)setJsHandler:;
- (void)setupJSBEnv:;
- (id)init;
- (id)webView:didCommitNavigation:;
- (id)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (void)userContentController:didReceiveScriptMessage:;
- (id)commitURL;
- (void)onLoad:;
- (void)setCommitURL:;
@end
