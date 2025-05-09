@interface AWEUserRecommendViewController : UIViewController
@property (nonatomic) NSNumber requestLiveTimeStamp;
@property (nonatomic) NSObject<AWELiveRoomFinishedListenerProtocol> roomFinishListener;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIView greyBackgroundView;
@property (nonatomic) UILabel recommendLabel;
@property (nonatomic) UIButton hideButton;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIButton privacyButton;
@property (nonatomic) BOOL hasDisplayedFooterDuringLoading;
@property (nonatomic) AWEUserRecommendViewControllerContext context;
@property (nonatomic) BOOL hasNotifyScroll;
@property (nonatomic) NSObject<AWEUserRecommendTableViewModelProtocol> viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)loadMore;
- (void)viewModelDidRefresh:;
- (void)viewModelDidLoadMore:indexes:;
- (void)viewModel:didRemoveModelsAtIndexes:;
- (void)viewModel:didInsertModelsAtIndexes:;
- (void)viewModel:didUpdateModelsAtIndexes:;
- (void)setRecommendLabel:;
- (id)recommendLabel;
- (BOOL)needReloadData;
- (id)roomFinishListener;
- (void)setRoomFinishListener:;
- (id)p_cellSize;
- (id)privacyButton;
- (void)setPrivacyButton:;
- (void)refreshLiveStatus;
- (void)moveToParentViewController:superView:;
- (void)setRequestLiveTimeStamp:;
- (void)p_liveRoomFinished:;
- (id)requestLiveTimeStamp;
- (void)p_getLiveStatusWithCompletion:;
- (void)setupLiveRoomListener;
- (void)refreshLiveStatusIfNeeded;
- (void)setHasDisplayedFooterDuringLoading:;
- (BOOL)hasDisplayedFooterDuringLoading;
- (BOOL)p_canShowFooter;
- (BOOL)p_canLoadMore;
- (id)greyBackgroundView;
- (void)storageRecommendInteractDate;
- (BOOL)hasNotifyScroll;
- (void)setHasNotifyScroll:;
- (BOOL)p_isLoadingFooterVisible;
- (id)p_cellClasses;
- (void)p_leftScrollAtIndex:;
- (void)hideBtnClicked:;
- (void)privacyButtonClicked:;
- (void)setGreyBackgroundView:;
- (id)collectionView:layout:referenceSizeForFooterInSection:;
- (void)viewWillDisappear:;
- (id)collectionView;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (void)collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)viewModel;
- (void)viewDidLoad;
- (id)initWithContext:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setContext:;
- (void)viewWillAppear:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)context;
- (void)updateContentInset;
- (id)hideButton;
- (void)setHideButton:;
- (double)collectionViewHeight;
+ (double)userRecommendViewHeight:;
+ (double)collectionViewHeightForType:;
+ (id)p_cellSizeForType:;
@end
