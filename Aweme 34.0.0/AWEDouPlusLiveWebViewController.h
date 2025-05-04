@interface AWEDouPlusLiveWebViewController : AWEWebViewController
@property (nonatomic) UIView webviewMarkView;
@property (nonatomic) q maxDpLoadingInterval;
@property (nonatomic) BOOL isDpLoadingTimeout;
@property (nonatomic) BOOL canGestureClose;
- (BOOL)configWithRouterParamDict:;
- (void)handleCloseWebViewNoti:;
- (BOOL)shouldResizeForIpad;
- (void)setCanGestureClose:;
- (void)setMaxDpLoadingInterval:;
- (BOOL)canGestureClose;
- (long long)maxDpLoadingInterval;
- (void)handleIpadOrientationChange;
- (void)setupCloseWebviewGesture;
- (void)setupWebViewLayout;
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
- (void)loadRequest;
@end
