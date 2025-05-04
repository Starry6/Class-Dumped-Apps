@interface AWEIMRecommendGreetCellViewController : AWEFeedCellViewController
@property (nonatomic) UIViewController<AWEIMRecommendGreetCardViewControllerProtocol><AWEFeedUserRecommendListViewControllerProtocol> recommendGreetCardViewController;
- (void)addLongPressPanelObserver;
- (void)excuteCustomDisplay;
- (void)handleEnterPrivacySetting;
- (void)handleExitPrivacySetting;
- (BOOL)p_isVCVisibleAndHasMusic;
- (BOOL)rootViewTapGestureRecognizer:shouldReceiveTouch:;
- (void)setRecommendGreetCardViewController:;
- (id)recommendGreetCardViewController;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)reset;
- (void)setupUI;
- (void)configureWithModel:;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
