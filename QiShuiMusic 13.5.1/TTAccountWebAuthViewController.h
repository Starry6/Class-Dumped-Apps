@interface TTAccountWebAuthViewController : UIViewController
@property (nonatomic) WKWebView webView;
@property (nonatomic) NSString authUrl;
@property (nonatomic) @? cancelCompletion;
@property (nonatomic) @? shouldStartLoadWithRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)authUrl;
- (void)setAuthUrl:;
- (void)setShouldStartLoadWithRequest:;
- (id)shouldStartLoadWithRequest;
- (void)setWebView:;
- (void)cancel;
- (id)webView;
- (void)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)cancelCompletion;
- (void)setCancelCompletion:;
@end
