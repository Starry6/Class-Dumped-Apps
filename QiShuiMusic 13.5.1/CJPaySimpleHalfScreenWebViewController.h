@interface CJPaySimpleHalfScreenWebViewController : CJPayHalfPageBaseViewController
@property (nonatomic) CJPayWKWebView webView;
@property (nonatomic) NSString urlString;
@property (nonatomic) @? didTapCloseButtonBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)didTapCloseButtonBlock;
- (id)initWithUrlString:;
- (void)setDidTapCloseButtonBlock:;
- (id)urlString;
- (void)setWebView:;
- (void)webView:didFinishNavigation:;
- (id)webView;
- (void).cxx_destruct;
- (void)webView:didStartProvisionalNavigation:;
- (void)setUrlString:;
- (void)viewDidLoad;
- (double)containerHeight;
- (void)back;
@end
