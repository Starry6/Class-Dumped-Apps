@interface AWEDouPlusLiveBDXWebViewController : AWEBDXWebViewController
@property (nonatomic) UIView webviewMarkView;
@property (nonatomic) q maxDpLoadingInterval;
@property (nonatomic) BOOL isDpLoadingTimeout;
@property (nonatomic) BOOL canGestureClose;
- (void)containerWillStartLoading:;
- (BOOL)configWithRouterParamDict:;
- (void)handleCloseWebViewNoti:;
- (void)handleCloseWebViewBlock;
- (BOOL)shouldResizeForIpad;
- (void)setCanGestureClose:;
- (void)setMaxDpLoadingInterval:;
- (BOOL)canGestureClose;
- (long long)maxDpLoadingInterval;
- (void)handleIpadOrientationChange;
- (void)setupCloseWebviewGesture;
- (void)setWebviewMarkView:;
- (id)webviewMarkView;
- (void)handleTapCloseWebViewGesture:;
- (void)handlePanCloseWebViewPanGesture:;
- (void)handleGestureCloseAction;
- (BOOL)isDpLoadingTimeout;
- (void)handleCloseWebViewController;
- (void)__recordDpLoadingTimeout;
- (void)setIsDpLoadingTimeout:;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
