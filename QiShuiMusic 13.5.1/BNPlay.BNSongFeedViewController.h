@interface BNPlay.BNSongFeedViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) NSString etGroupID;
@property (nonatomic) NSString etGroupType;
@property (nonatomic) NSString etSceneName;
@property (nonatomic) NSString etFromTab;
@property (nonatomic) NSString etPageName;
@property (nonatomic) NSString customSceneName;
@property (nonatomic) _TtC6BNPlay15BNSongFeedParam param;
@property (nonatomic) q preferredStatusBarStyle;
@property (nonatomic) BOOL prefersStatusBarHidden;
- (void)loadPlayQueueListOverTime;
- (id)customSceneName;
- (id)etFromTab;
- (id)etGroupID;
- (id)etGroupType;
- (id)etPageName;
- (id)etSceneName;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)onSidebarPanGesture:;
- (void)timerFire;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (BOOL)prefersStatusBarHidden;
- (id)initWithCoder:;
- (void)viewDidDisappear:;
- (id)param;
- (void)viewWillDisappear:;
- (void)setParam:;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
