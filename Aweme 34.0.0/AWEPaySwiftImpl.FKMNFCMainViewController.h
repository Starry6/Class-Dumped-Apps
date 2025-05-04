@interface AWEPaySwiftImpl.FKMNFCMainViewController : CJPayBaseViewController
@property (nonatomic) BOOL aweDisableFullscreenPopTransition;
- (void)handleReachabilityChangeNotification;
- (void)transition_didPopDoneTransitionWithContext:;
- (void)setAweDisableFullscreenPopTransition:;
- (BOOL)aweDisableFullscreenPopTransition;
- (void)handleForegroundNotification;
- (void)handleBackgroundNotification;
- (void)dux_backAction;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithCoder:;
@end
