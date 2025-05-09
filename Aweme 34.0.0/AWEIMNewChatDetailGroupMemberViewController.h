@interface AWEIMNewChatDetailGroupMemberViewController : UIViewController
@property (nonatomic) NSString pageIdentifier;
@property (nonatomic) UICollectionReusableView headerView;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEIMGroupMemberListDataManager dataManager;
@property (nonatomic) UIView searchBar;
@property (nonatomic) BOOL isShowSearch;
@property (nonatomic) BOOL isViewLoaded;
@property (nonatomic) BOOL popoverShow;
@property (nonatomic) BOOL enableHeaderOver;
@property (nonatomic) BOOL shouldResetStatus;
@property (nonatomic) UIView<IESIMSelectPopoverProtocol> selectPopover;
@property (nonatomic) BOOL enableSortFunction;
@property (nonatomic) AWEIMGroupChatMonitor setupDataMonitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMNewChatDetailContext context;
@property (nonatomic) <AWEIMAssociateScrollViewDelegate> associateScrollDelegate;
@property (nonatomic) UIView headerBaseView;
- (void)popoverDidDisappear:;
- (id)currentScrollView;
- (double)contentOffsetY;
- (void)adjustContentOffset:animated:;
- (double)contentSizeHeight;
- (void)setupBind;
- (void)setIsViewLoaded:;
- (void)p_showPopoverWithTargetView:;
- (void)participantsDidUpdate;
- (BOOL)isEmptyScrollView;
- (id)associateScrollDelegate;
- (void)setAssociateScrollDelegate:;
- (id)headerBaseView;
- (void)setHeaderBaseView:;
- (void)onAssociateScollViewWillShow;
- (void)onAssociateScollViewDidDisappear;
- (void)onAssociateTabbarTappedWithButton:;
- (void)p_reloadBackgroundColor;
- (BOOL)shouldShowFansTags;
- (void)memberCellRequestRefreshData:;
- (void)memberCellRequestModifyNickName:;
- (BOOL)popoverShow;
- (void)p_refreshParticipantsData;
- (void)setPopoverShow:;
- (BOOL)shouldResetStatus;
- (void)p_resetSearchBarStatus;
- (void)setShouldResetStatus:;
- (BOOL)enableSortFunction;
- (void)setEnableSortFunction:;
- (id)setupDataMonitor;
- (void)p_onSearchBarTapped;
- (void)p_updateContentInset;
- (BOOL)isShowSearch;
- (BOOL)p_canShowSearchBar;
- (void)setIsShowSearch:;
- (void)p_trackGroupMemberSettingClick;
- (void)setSelectPopover:;
- (void)p_trackGroupMoreMemberClick;
- (BOOL)enableHeaderOver;
- (void)setEnableHeaderOver:;
- (id)selectPopover;
- (void)setSetupDataMonitor:;
- (void)reloadData;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (void)viewWillDisappear:;
- (id)collectionView;
- (id)searchBar;
- (id)dataManager;
- (void)setSearchBar:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (void)collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidLoad;
- (void)setCollectionView:;
- (id)headerView;
- (void)setDataManager:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setContext:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)viewDidAppear:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewDidEndScrollingAnimation:;
- (id)context;
- (void)setHeaderView:;
- (BOOL)isViewLoaded;
- (void)setupView;
- (void)setupData;
- (id)pageIdentifier;
- (void)setPageIdentifier:;
- (void)setupBackgroundColor;
@end
