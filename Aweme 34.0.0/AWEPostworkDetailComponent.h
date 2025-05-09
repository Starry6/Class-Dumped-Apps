@interface AWEPostworkDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) AWEBubble scrollToTopBubble;
@property (nonatomic) AWEPostWorkViewController postVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasShownPopover;
@property (nonatomic) BOOL locateModeUI;
@property (nonatomic) NSArray dataSource;
@property (nonatomic) NSString followGuideSession;
@property (nonatomic) UICollectionView collectionView;
- (id)secUserID;
- (void)task:didEndWithResult:error:;
- (id)followGuideSession;
- (void)setFollowGuideSession:;
- (void)didDeleteAweme:;
- (BOOL)isPostworkTab;
- (BOOL)isPostworkTabUsingWaterfallLayout;
- (BOOL)isThemeStyleLight;
- (BOOL)hasShownPopover;
- (void)setHasShownPopover:;
- (id)postVC;
- (void)setPostVC:;
- (void)scrollTopIfNeeded;
- (void)reloadEmptyPage;
- (id)profileHeaderVC;
- (void)onRefreshHeaderView:shouldRefreshTabView:;
- (void)onDidSelectTabListIndex:actionType:hasRedDotWhenSwitched:needTrack:;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (id)tabNameForLogWithType:;
- (id)profileTabModelForType:;
- (BOOL)shouldShowForType:;
- (void)onResetUI;
- (void)onUpdateHeaderHeight;
- (void)onWillRefreshWithUser:;
- (void)updatePostWorkTabIcon:;
- (void)dismissFollowGuideMaskView;
- (void)showSortGuideBubbleIfNeeded;
- (void)setFollowGuideMaskViewStatusNO;
- (void)updateUserWith:;
- (void)setNeedHideJustWatchedWith:;
- (void)setBackgroundColorWith:;
- (void)retryPostWorkRefreshIfNeed;
- (BOOL)locateModeUI;
- (void)ttlStoryCountChangedNotification:;
- (id)postWorkTabModel;
- (void)p_deleteQuickShareAweme:;
- (void)p_deletePostAweme:;
- (void)p_refreshPostWorkNeedDelay:;
- (BOOL)shouldTrackFollowFromCardWith:recommendReason:;
- (id)scrollTopItemController;
- (id)scrollToTopBubble;
- (void)showScrollToTopBubbleIfNeeded;
- (void)setScrollToTopBubble:;
- (void)reloadData;
- (id)user;
- (id)userID;
- (id)collectionView;
- (void)dealloc;
- (void)removeAll;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (id)title;
- (void)viewDidAppear;
- (id)dataSource;
- (id)originalTitle;
- (void)refreshData;
- (void)onInit;
@end
