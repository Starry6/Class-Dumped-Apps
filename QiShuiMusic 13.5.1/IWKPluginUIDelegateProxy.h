@interface IWKPluginUIDelegateProxy : NSObject
@property (nonatomic) <WKUIDelegate> proxy;
@property (nonatomic) WKWebView webView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWebView:;
- (void)setProxy:;
- (BOOL)respondsToSelector:;
- (id)proxy;
- (void)webViewDidClose:;
- (void)webView:runJavaScriptAlertPanelWithMessage:initiatedByFrame:completionHandler:;
- (id)webView;
- (void)webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:completionHandler:;
- (id)methodSignatureForSelector:;
- (void)webView:runJavaScriptConfirmPanelWithMessage:initiatedByFrame:completionHandler:;
- (id)webView:createWebViewWithConfiguration:forNavigationAction:windowFeatures:;
- (BOOL)isProxy;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (BOOL)webView:shouldPreviewElement:;
- (id)webView:previewingViewControllerForElement:defaultActions:;
- (void)webView:commitPreviewingViewController:;
- (void)webView:contextMenuConfigurationForElement:completionHandler:;
- (void)webView:contextMenuWillPresentForElement:;
- (void)webView:contextMenuForElement:willCommitWithAnimator:;
- (void)webView:contextMenuDidEndForElement:;
@end
