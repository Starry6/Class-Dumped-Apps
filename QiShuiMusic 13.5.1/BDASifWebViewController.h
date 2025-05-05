@interface BDASifWebViewController : BDASifBaseViewController
@property (nonatomic) UIView<BDXWebViewProtocol> bdx_webview;
@property (nonatomic) BDASifSecurityManager securityManager;
- (void)setBdx_webview:;
- (id)securityManager;
- (void)addSecurity;
- (id)bdx_webview;
- (void)onUserDidTakeScreenshot:;
- (void)setSecurityManager:;
- (void).cxx_destruct;
- (void)viewDidLoad;
@end
