@interface IWKPiperPluginObject : IWKPluginObject
@property (nonatomic) BOOL userScriptInjectSucceeded;
@property (nonatomic) BOOL isCheckingUserScriptInject;
@property (nonatomic) BOOL protocolV1Enabled;
@property (nonatomic) NSURL commitURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_doAddScriptIfNeeded:;
- (void)assertIfOldTTEngineExistForWebView:;
- (BOOL)isCheckingUserScriptInject;
- (BOOL)protocolV1Enabled;
- (void)setIsCheckingUserScriptInject:;
- (void)setProtocolV1Enabled:;
- (void)setUserScriptInjectSucceeded:;
- (BOOL)userScriptInjectSucceeded;
- (id)init;
- (id)webView:didFinishNavigation:;
- (id)webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:completionHandler:;
- (id)webView:didCommitNavigation:;
- (id)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (void)userContentController:didReceiveScriptMessage:;
- (id)commitURL;
- (void)onLoad:;
- (void)setCommitURL:;
@end
