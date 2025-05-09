@interface AWEDetailFullViewController : AWEDetailBaseViewController
@property (nonatomic) AWEDetailShimmerContainerView shimmerContainerView;
@property (nonatomic) NSString dynamicRecordSchema;
@property (nonatomic) BOOL isloading;
@property (nonatomic) BOOL isHalfScreen;
@property (nonatomic) UIView naviBarBackgroundView;
@property (nonatomic) AWEDetailNewStyleShootButton actionButton;
@property (nonatomic) <AWEDetailManagerProtocol> detailManager;
@property (nonatomic) <AWEDetailManagerProtocol> strongDetailManager;
@property (nonatomic) AWEDetailNaviBar customNaviBar;
@property (nonatomic) BOOL defultHalf;
@property (nonatomic) BOOL useUnifyNaviBarAnimate;
@property (nonatomic) BOOL useUnifyOptimizeStyle;
@property (nonatomic) NSArray cachedHeaderViews;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isFullPage;
- (BOOL)configWithRouterParamDict:;
- (void)duxGrid_viewDidChangeBreakPointFrom:toBreakPoint:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)aAWEPadModuleAdapter;
- (BOOL)isFullPage;
- (void)setIsFullPage:;
- (double)bottomViewHeight;
- (void)setupInjectServiceOnInit;
- (void)registerNotificationsOnInit;
- (void)registerBusinessHandlersOnInit;
- (void)setupUIOnViewDidLoad;
- (void)setupConstraintsOnViewDidLoad;
- (void)bindViewModelOnViewDidLoad;
- (void)handleDetailInfoFetchStateChange;
- (id)noMoreTipLabel;
- (BOOL)useUnifyOptimizeStyle;
- (void)configPlayInteractionViewController:;
- (void)popUpHalfScreenDetailPageWithHeight:animation:;
- (void)didExpandToFullPage;
- (void)didFoldToHalfPage;
- (void)willExpandToFullPage;
- (void)willFoldToHalfPage;
- (void)partialSheetDidClickMaskArea;
- (BOOL)shouldPlayVideoWhenFold;
- (void)FullpageDidChangeProgress:withUserInteraction:offset:;
- (id)sheetContentScrollView;
- (void)setAwemeModelForViewModel:trackDict:;
- (id)detailManager;
- (void)setDetailManager:;
- (id)strongDetailManager;
- (void)setStrongDetailManager:;
- (void)onActionButtonClicked:;
- (BOOL)cellIsVisibleToUser:;
- (double)collectionViewOffsetFixer;
- (double)naviBarBottomOffsetY;
- (id)customNaviBarForHandler:;
- (id)contentCollectionViewForHandler:;
- (id)naviBarBackgroundViewForHandler:;
- (double)awemeListSectionOffsetY;
- (id)headerViewsForHandler:;
- (BOOL)useUnifyNaviBarAnimate;
- (id)shimmerContainerView;
- (BOOL)defultHalf;
- (id)naviBarBackgroundView;
- (id)customNaviBar;
- (id)placeHolderNaviBarObject;
- (id)placeHolderShimmerViewObject;
- (void)handleNaviBarObjectChange;
- (void)handleShimmerViewObjectChange;
- (void)updateViewHeightWhileProgress:;
- (void)updateBottomViewUI;
- (void)setCachedHeaderViews:;
- (id)dynamicRecordSchema;
- (void)setDynamicRecordSchema:;
- (id)cachedHeaderViews;
- (void)onNaviBarCloseButtonClicked:;
- (void)setDefultHalf:;
- (void)setIsHalfScreen:;
- (BOOL)isHalfScreen;
- (double)getAwemeListTopOffset;
- (void)setCollectionViewContentInsetTop:;
- (BOOL)isFullPageWithFrameCheck;
- (id)headerViewFrame;
- (id)titleLabelFrame;
- (id)collectButtonFrame;
- (void)buildTopShareButton;
- (void)setNaviBarBackgroundView:;
- (void)setCustomNaviBar:;
- (void)setUseUnifyNaviBarAnimate:;
- (void)setUseUnifyOptimizeStyle:;
- (void)setShimmerContainerView:;
- (BOOL)isloading;
- (void)setIsloading:;
- (void)viewWillDisappear:;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)viewDidDisappear:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (BOOL)accessibilityScroll:;
- (id)bottomView;
- (id)actionButton;
- (void)setActionButton:;
+ (Class)aAWEPadModuleAdapterClass;
@end
