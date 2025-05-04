@interface AWEBDXWebViewController : AWEBDXBaseWebViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showMorePanel;
- (void)handleDPBStatusNotification:;
- (BOOL)webInterceptor:checkIronManJumpParam:;
- (BOOL)shouldHandleTitleChangeWithURL:;
- (void)openURL:checkIronManJumpParam:;
- (void)handleBridgeClose;
- (void)viewDidLoad;
- (void)setup;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)__webView;
- (void)setupWebView;
- (void)setupNotification;
+ (id)addParametersIfURLStringHasIronManScheme:;
@end
