@interface IESLiveWKWebCoreTrigger : IWKPluginObject
- (void)updateMonitorOfWebView:statusCode:error:withType:;
- (id)webView:didFinishNavigation:;
- (id)webView:didFailProvisionalNavigation:withError:;
- (id)webView:didCommitNavigation:;
- (id)webView:didReceiveServerRedirectForProvisionalNavigation:;
- (id)webView:didStartProvisionalNavigation:;
- (id)webViewWebContentProcessDidTerminate:;
- (id)webView:decidePolicyForNavigationResponse:decisionHandler:;
- (id)webView:didFailNavigation:withError:;
@end
