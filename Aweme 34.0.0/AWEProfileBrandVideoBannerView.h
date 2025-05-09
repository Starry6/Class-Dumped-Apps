@interface AWEProfileBrandVideoBannerView : UIView
@property (nonatomic) AWETopVideoEntranceView topVideoEntranceView;
@property (nonatomic) UIView topVideoContainerView;
@property (nonatomic) AWEProfileTopVideoViewController topVideoViewController;
@property (nonatomic) UIView topVideoTapView;
@property (nonatomic) AWEProfileBannerBGCoverMaskView topVideoMaskView;
@property (nonatomic) AWEProfileBrandVideoBannerViewModel viewModel;
@property (nonatomic) AWEProfileHeaderContext headerContext;
@property (nonatomic) double lastTopVideoViewHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEProfileBannerDelegate> delegate;
@property (nonatomic) double normalHeight;
@property (nonatomic) double maxHeight;
@property (nonatomic) <AWEProfileBannerContext> context;
- (id)aAWEPadModuleAdapter;
- (void)bindEvent;
- (void)configWithData:;
- (BOOL)autoAdjustHeight;
- (double)normalHeight;
- (void)enterVideoFullScreen;
- (void)scrollViewDidScrollWithOffset:;
- (void)scrollViewDidEndDragingWithOffset:;
- (void)enterFullScreenFromSplitScreen;
- (id)padService;
- (BOOL)canUpdateData:;
- (id)initWithFrame:data:context:delegate:;
- (void)viewDidMount;
- (void)refreshBannerViewIfNeededWithSize:;
- (void)refreshParentVC;
- (void)scrollViewBeginDraging;
- (BOOL)canBecomeFullScreen;
- (void)handleMaskViewColorChange:;
- (void)setHeaderContext:;
- (id)headerContext;
- (double)_topVideoViewHeight;
- (void)setLastTopVideoViewHeight:;
- (void)setTopVideoContainerView:;
- (id)topVideoContainerView;
- (double)_topBannerImageViewFittingHeight;
- (void)leaveVideoFullScreenIfVideoIsPortrait;
- (void)setTopVideoViewController:;
- (void)setTopVideoMaskView:;
- (void)setTopVideoTapView:;
- (void)setTopVideoEntranceView:;
- (id)topVideoEntranceView;
- (double)_topVideoRealHeight;
- (id)topVideoViewController;
- (id)topVideoMaskView;
- (void)enterVideoFullScreenWithOffsetY:enterMethod:;
- (BOOL)isVideoLandscape;
- (double)lastTopVideoViewHeight;
- (id)topVideoTapView;
- (double)_topVideoViewWidth;
- (id)user;
- (id)delegate;
- (id)viewModel;
- (unsigned long long)bannerStyle;
- (id)contextDelegate;
- (void)setContext:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (double)maxHeight;
- (void)setDelegate:;
- (id)context;
- (void)setupUI;
+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)canHandleData:;
@end
