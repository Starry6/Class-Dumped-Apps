@interface AWELearningImpl.LearningTopTabContainerViewController : UIViewController
@property (nonatomic) NSString referString;
@property (nonatomic) <AFDLearningViewControllerDelegate> delegate;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) BOOL isFromRouterTransfer;
@property (nonatomic) <AWEXTabBaseChannelControllerProtocol> channelController;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)updataGlobalTrackerParams;
- (BOOL)canRefresh;
- (id)referString;
- (void)pauseWithAnimation;
- (BOOL)currentTabIsTop;
- (void)animatedRefreshWithCompletion:;
- (void)setRefreshMethod:;
- (BOOL)showRefreshAnimation;
- (void)setScrollEnabled:;
- (void)play;
- (void)reload;
- (void)stop;
- (void)pause;
- (void)setLogExtraDict:;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)logExtraDict;
- (id)enterMethod;
- (id)enterFrom;
- (BOOL)isFromRouterTransfer;
- (void)setIsFromRouterTransfer:;
- (id)channelController;
- (void)setChannelController:;
- (void)onPersonalRecommendChangedWithNotice:;
- (void)xtabsChangedWithNotice:;
- (void)tabsChangedWithNotice:;
- (void)tabBarsChangedWithNotice:;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setDelegate:;
- (id)initWithCoder:;
@end
