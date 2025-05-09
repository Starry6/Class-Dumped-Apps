@interface AWERelatedVideoDetailVideoContainerViewController : UIViewController
@property (nonatomic) UIViewController<AWERelatedVideoDetailVideoRelatedVideoViewControllerProtocol> relatedVideoView;
@property (nonatomic) AWERelatedVideoDetailVideoCommentViewController commentView;
@property (nonatomic) UIViewController<AWERTVInviteViewController> feedShareView;
@property (nonatomic) UIButton downBackbutton;
@property (nonatomic) UIView downGuideView;
@property (nonatomic) UIView slidingTabBarBgView;
@property (nonatomic) AWESlidingTabbarView slidingTabbar;
@property (nonatomic) AWERelatedVideoMultiTabListView multiTabListView;
@property (nonatomic) AWESlidingViewController slidingviewController;
@property (nonatomic) q tabIndex;
@property (nonatomic) NSDictionary params;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString lastItemID;
@property (nonatomic) BOOL inCommentTab;
@property (nonatomic) BOOL shouldShowFeedShareEntrance;
@property (nonatomic) BOOL shouldShowCommentEntrance;
@property (nonatomic) q relatedVideoTabIndex;
@property (nonatomic) q commentTabTabIndex;
@property (nonatomic) q shareTabTabIndex;
@property (nonatomic) BOOL isViewAppear;
@property (nonatomic) AWERelatedVideoDetailVideoRelatedVideoWaterFlowViewController waterFlowContainerVC;
@property (nonatomic) NSObject<AWERelatedVideoDetailVideoContainerViewControllerDelegate> delegate;
@property (nonatomic) AWERVDetailPageContext pageContext;
@property (nonatomic) <AWERelatedVideoDetailVideoRelatedVideoViewControllerProtocol> relatedWaterFlowView;
@property (nonatomic) double maxAndMinVideoDiff;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onScrollViewDidScroll:;
- (long long)numberOfControllers:;
- (id)slidingViewController:viewControllerAtIndex:;
- (void)slidingViewController:didSelectIndex:transitionType:;
- (id)aAWEPadModuleAdapter;
- (void)showInputView;
- (BOOL)isViewAppear;
- (void)setIsViewAppear:;
- (void)p_addObserver;
- (void)setCommentView:;
- (id)commentView;
- (BOOL)isLastTab;
- (void)setLastItemID:;
- (id)lastItemID;
- (id)p_buttonTextFont;
- (void)commentButtonDidClicked;
- (void)trackCommentButtonClick:;
- (void)startRequestAnimating;
- (void)refreshModel:params:;
- (BOOL)canScrollToDownDirection;
- (void)setShouldShowFeedShareEntrance:;
- (void)setShouldShowCommentEntrance:;
- (void)setRelatedVideoTabIndex:;
- (void)setCommentTabTabIndex:;
- (void)setShareTabTabIndex:;
- (id)waterFlowContainerVC;
- (id)slidingTabBarBgView;
- (id)slidingTabbar;
- (id)slidingviewController;
- (void)updateSlidingTabbarAccessibilityElements;
- (id)relatedVideoView;
- (void)updateSlideTabEnable:;
- (void)p_refreshSlideTabbarView;
- (void)p_updateCommentCount;
- (void)scrollToRelatedVideos:;
- (void)scrollToComment:;
- (void)scrollToFeedShare:;
- (long long)commentTabTabIndex;
- (long long)relatedVideoTabIndex;
- (long long)selectTabIndex;
- (id)slidingViewDataArray;
- (long long)shareTabTabIndex;
- (void)setupWithRelatedPreloadVideos:forModel:;
- (id)relatedWaterFlowView;
- (BOOL)shouldShowTagWordsTab;
- (id)multiTabListView;
- (double)p_sliderButtonWidth;
- (void)p_onCommentTotalCountNotification:;
- (void)p_onCommentAddNotification:;
- (void)p_onCommentDeleteNotification:;
- (void)backToTopAction;
- (id)slidingTabbarDataArray;
- (void)trackSugTabClickOrder:word:;
- (id)feedShareView;
- (BOOL)inCommentTab;
- (void)trackRelatedTabClick:;
- (void)setInCommentTab:;
- (void)trackBackToTopButtonWithName:;
- (id)p_selectedButtonTextFont;
- (void)onTabbarDoubleTap:;
- (void)downBackButtonAction;
- (BOOL)shouldShowCommentEntrance;
- (BOOL)shouldShowFeedShareEntrance;
- (void)multiTabListSelectedAtIndex:word:;
- (id)initWithTabIndex:;
- (void)refreshRelatedVideos:scene:params:completion:;
- (void)commentScrollToTopIfCurrentShow;
- (id)currentSelectScrollView;
- (void)setRelatedWaterFlowView:;
- (double)maxAndMinVideoDiff;
- (void)setMaxAndMinVideoDiff:;
- (id)mutiTabView;
- (void)recallVideoReloadTab;
- (double)getMetaInfoHeadViewHeight;
- (void)trackRelatedTabChangeToSugTab;
- (id)downBackbutton;
- (id)downGuideView;
- (void)setRelatedVideoView:;
- (void)setFeedShareView:;
- (void)setDownBackbutton:;
- (void)setDownGuideView:;
- (void)setSlidingTabBarBgView:;
- (void)setSlidingTabbar:;
- (void)setMultiTabListView:;
- (void)setSlidingviewController:;
- (void)setWaterFlowContainerVC:;
- (void)setModel:;
- (void)viewWillDisappear:;
- (id)currentScrollOffset;
- (void)dealloc;
- (id)delegate;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (id)model;
- (long long)tabIndex;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setDelegate:;
- (id)params;
- (void)willStartScroll;
- (void)setParams:;
- (void)setPageContext:;
- (id)pageContext;
- (void)scrollToTop:;
- (void)setTabIndex:;
+ (Class)aAWEPadModuleAdapterClass;
@end
