@interface WBSDKAuthorizeWebViewController : WBSDKBasicWebViewController
- (void)authorizeDidFinishWithResponseCode:info:;
- (id)fixedUrlStringFromURL:withSplitString:;
- (id)urlRequestFromWeiboSDKRequest:andExtraPara:;
- (void)wbsdk_webView:decidePolicyForNavigationAction:decisionHandler:;
- (void)viewDidLoad;
@end
