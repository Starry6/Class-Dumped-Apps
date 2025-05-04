@interface AWEBatManWebViewBaseViewController : UIViewController
@property (nonatomic) @? completion;
@property (nonatomic) WKWebView webView;
@property (nonatomic) NSString url;
@property (nonatomic) <AWEBatManWebViewBaseViewControllerDelegate> delegate;
@property (nonatomic) BOOL isShowFromDialog;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configUI;
- (void)setIsShowFromDialog:;
- (BOOL)isShowFromDialog;
- (void)viewWillDisappear:;
- (void)setUrl:;
- (id)delegate;
- (id)completion;
- (void)setWebView:;
- (void)viewDidLoad;
- (void)setCompletion:;
- (id)webView;
- (void)dismissAnimated:completion:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)url;
- (void)presentViewController:animated:completion:;
- (void)userContentController:didReceiveScriptMessage:;
- (id)initWithURL:completion:;
@end
