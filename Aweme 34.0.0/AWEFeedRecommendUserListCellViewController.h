@interface AWEFeedRecommendUserListCellViewController : AWEFeedCellViewController
@property (nonatomic) UIViewController<AWEFeedUserRecommendListViewControllerProtocol> recommendViewController;
@property (nonatomic) q cardType;
- (void)excuteCustomDisplay;
- (void)handleEnterPrivacySetting;
- (void)handleExitPrivacySetting;
- (id)recommendViewController;
- (BOOL)p_isVCVisibleAndHasMusic;
- (id)initWithCellReuseIdentifier:;
- (BOOL)rootViewTapGestureRecognizer:shouldReceiveTouch:;
- (void)setRecommendViewController:;
- (void)dealloc;
- (void)play;
- (void)viewDidLoad;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;
- (void)pause;
- (void)setupUI;
- (void)configureWithModel:;
- (long long)cardType;
- (void)setCardType:;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
