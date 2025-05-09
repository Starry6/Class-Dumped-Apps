@interface IESECWinBackVC : UIViewController
@property (nonatomic) IESECWinContext context;
@property (nonatomic) FBKVOController kvoCtrl;
@property (nonatomic) UIView headerBackView;
@property (nonatomic) UIView backImageView;
@property (nonatomic) UIView spliteHeaderBackViewTop;
@property (nonatomic) UIView spliteHeaderBackViewBottom;
@property (nonatomic) UIView overLineView;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIView tabBackGradientView;
@property (nonatomic) IESECServiceProxy<IESECWinBackService> backService;
@property (nonatomic) IESECServiceProxy<IESECWinDataService> dataService;
@property (nonatomic) IESECServiceProxy<IESECWinLiveService> liveService;
@property (nonatomic) IESECServiceProxy<IESECWinSplitService> splitService;
@property (nonatomic) IESECServiceProxy<IESECWinFeedLinkedService> linkService;
@property (nonatomic) IESECServiceProxy<IESECWinMainScrollService> scrollService;
@property (nonatomic) IESECServiceProxy<IESECWinDataStatusService> dataStatusService;
@property (nonatomic) IESECServiceProxy<IESECWinTabService> tabService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)kvoCtrl;
- (void)setDataService:;
- (void)calculateHeaderBackViewGradient;
- (void)configHeaderBackView:needLayer:;
- (id)screenShotView:;
- (void)setBackService:;
- (void)setLinkService:;
- (id)backImageView;
- (id)backService;
- (void)configBottomImageFrame;
- (void)configBottomViewCornerRadius;
- (void)configCoverImage;
- (void)configGradientBack;
- (void)configGradientView;
- (void)configSplitBackImage;
- (void)configSplitBackUI;
- (void)configSplitGradientView;
- (void)configSplitHeaderBackViewBottomFrame;
- (void)configTabBackGradientViewFrame;
- (id)dataService;
- (id)dataStatusService;
- (id)headerBackView;
- (id)linkService;
- (id)overLineView;
- (void)requestHeaderBackView;
- (id)scrollService;
- (void)setBackImageView:;
- (void)setDataStatusService:;
- (void)setHeaderBackView:;
- (void)setHeaderBackViewBottomOriginRectInSplit;
- (void)setKvoCtrl:;
- (void)setOverLineView:;
- (void)setScrollService:;
- (void)setSplitService:;
- (void)setSpliteHeaderBackViewBottom:;
- (void)setSpliteHeaderBackViewTop:;
- (void)setTabBackGradientView:;
- (void)setTabService:;
- (id)splitService;
- (id)spliteHeaderBackViewBottom;
- (id)spliteHeaderBackViewTop;
- (id)tabBackGradientView;
- (id)tabService;
- (id)backgroundView;
- (void)scrollViewDidScroll;
- (id)context;
- (double)headerHeight;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (void)addObserver;
- (void)setContext:;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setLiveService:;
- (id)liveService;
@end
