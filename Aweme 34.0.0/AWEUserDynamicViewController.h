@interface AWEUserDynamicViewController : AWEVideoFeedViewController
@property (nonatomic) AWEUserDynamicDataController dynamicDataController;
@property (nonatomic) BOOL isForbiddenRefreshData;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) BOOL isViewAppeared;
@property (nonatomic) BOOL shouldReloadOnNextAppear;
@property (nonatomic) {CGPoint=dd} savedDynamicContentOffset;
@property (nonatomic) BOOL willShowFullScreenVideoFeed;
@property (nonatomic) <AWEUserProfileTabVCDelegate> delegate;
@property (nonatomic) NSString userID;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL fromHome;
@property (nonatomic) NSString enterFromItemID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (id)aweui_emptyPageEdgeInsets;
- (void)task:didEndWithResult:error:;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (BOOL)configWithRouterParamDict:;
- (double)contentOffsetY;
- (void)adjustContentOffset:animated:;
- (double)contentSizeHeight;
- (void)pauseVideoIfNeededForUserProfile;
- (void)resumeVideoIfNeededForUserProfile;
- (void)backBtnClick:;
- (void)initialFetch;
- (BOOL)isViewAppeared;
- (void)setIsViewAppeared:;
- (void)_refreshData;
- (BOOL)shouldHideNoMoreText;
- (id)sectionBindedData;
- (void)didEndShowing;
- (BOOL)fromHome;
- (void)setFromHome:;
- (BOOL)shouldNotActivateItem;
- (id)avatarArrayForUser:;
- (id)enterFromItemID;
- (void)setEnterFromItemID:;
- (void)showDynamicView:;
- (void)didCreateRepost:;
- (void)_handleEmptyViewWithError:;
- (void)refreshDataList;
- (BOOL)shouldReloadOnNextAppear;
- (void)setWillShowFullScreenVideoFeed:;
- (BOOL)willShowFullScreenVideoFeed;
- (BOOL)isForbiddenRefreshData;
- (id)dynamicDataController;
- (void)p_loadMoreIfNeed:error:;
- (void)setIsForbiddenRefreshData:;
- (void)clearDisplayDatas;
- (void)setShouldReloadOnNextAppear:;
- (long long)newAwemeInsertIndex;
- (id)updateCellModel:withContainerWidth:;
- (void)setSavedDynamicContentOffset:;
- (void)updateUserStatusWithBlock:userID:remarkNameBlock:;
- (id)savedDynamicContentOffset;
- (void)animatedTableView;
- (void)didStarShowing;
- (double)videoFeedTopMargin;
- (double)getScrollViewHeaderHeight;
- (void)setBadNetworkViewWithError:;
- (void)setDynamicDataController:;
- (void)handleWillShowFullScreenVideoFeed;
- (void)reloadData;
- (void)viewWillDisappear:;
- (id)tableView:viewForHeaderInSection:;
- (id)userID;
- (void)dealloc;
- (id)delegate;
- (void)viewWillLayoutSubviews;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)contentView;
- (id)loadingView;
- (void)viewDidDisappear:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (double)tableView:heightForHeaderInSection:;
- (void)setDelegate:;
- (void)setUserID:;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:;
- (id)dataController;
- (void)refreshData;
- (void)_setupUI;
@end
