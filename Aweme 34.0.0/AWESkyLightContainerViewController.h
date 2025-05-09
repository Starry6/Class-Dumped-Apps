@interface AWESkyLightContainerViewController : UIViewController
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) AWESkyLightContainerViewModel viewModel;
@property (nonatomic) UIViewController topBarView;
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> contentView;
@property (nonatomic) AWESkyLightCaptureView captureView;
@property (nonatomic) UIView capsuleView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q type;
@property (nonatomic) NSString referString;
- (BOOL)canRefresh;
- (id)referString;
- (void)pauseWithAnimation;
- (id)currentAweme;
- (id)currentVideoController;
- (BOOL)currentTabIsTop;
- (void)onAwemeDeleted:isDislike:;
- (void)animatedRefreshWithCompletion:;
- (id)aAWEPadModuleAdapter;
- (void)showLoading:;
- (void)setChannelConfig:;
- (id)padSplitScreenFeedTableViewController;
- (void)setCapsuleViewHidden:;
- (void)setupEvent;
- (id)initWithSkyLightTopBarViewModel:contentViewModel:;
- (void)initRefresh;
- (void)buildSkyLightContainerView;
- (void)updateSkyLightViewStatus:;
- (void)setScrollEnabled:;
- (id)captureView;
- (void)play;
- (id)capsuleView;
- (void)viewDidLayoutSubviews;
- (void)setLoadingView:;
- (id)viewModel;
- (void)viewDidLoad;
- (void)reload;
- (id)contentView;
- (id)loadingView;
- (long long)type;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setCapsuleView:;
- (void)stop;
- (void)pause;
- (void)setCaptureView:;
- (id)currentInteractionController;
- (void)setTopBarView:;
- (id)topBarView;
+ (Class)aAWEPadModuleAdapterClass;
@end
