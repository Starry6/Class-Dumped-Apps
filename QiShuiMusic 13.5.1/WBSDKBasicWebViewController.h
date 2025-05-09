@interface WBSDKBasicWebViewController : UIViewController
@property (nonatomic) WBBaseRequest weibosdkRequest;
@property (nonatomic) WBSDKWebView webView;
@property (nonatomic) NSURL loadUrl;
@property (nonatomic) BOOL needResponse;
@property (nonatomic) NSString navigationBarTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)closeBtnClicked;
- (id)weibosdkRequest;
- (id)initWithURL:andTitle:;
- (id)initWithWeiboSDKRequest:;
- (void)loadWebViewUrl;
- (BOOL)needResponse;
- (void)setLoadUrl:;
- (void)setNeedResponse:;
- (void)setWeibosdkRequest:;
- (void)startWebViewRequest;
- (id)urlRequestFromWeiboSDKRequest:andExtraPara:;
- (void)wbsdk_webView:decidePolicyForNavigationAction:decisionHandler:;
- (void)wbsdk_webView:didFailLoadWithError:;
- (void)wbsdk_webView:didPressErrorViewReloadButton:;
- (void)wbsdk_webViewDidFinishLoad:;
- (void)wbsdk_webViewDidStartLoad:;
- (void)reload;
- (void)setWebView:;
- (void)dealloc;
- (id)webView;
- (id)navigationBarTitle;
- (void)setNavigationBarTitle:;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)loadUrl;
@end
