@interface AWEDetailBaseViewController : UIViewController
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UILabel noMoreTipLabel;
@property (nonatomic) IGListAdapter listAdapter;
@property (nonatomic) <AWEDetailViewModelProtocol> viewModel;
@property (nonatomic) AWEDetailServiceProvider serviceProvider;
@property (nonatomic) NSMutableDictionary businessHandlers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)zoomTransitionStartViewForOffset:;
- (id)objectsForListAdapter:;
- (id)listAdapter:sectionControllerForObject:;
- (id)emptyViewForListAdapter:;
- (void)handleApplicationDidBecomeActiveNotification;
- (void)setupInjectServiceOnInit;
- (void)registerNotificationsOnInit;
- (void)registerBusinessHandlersOnInit;
- (void)setupUIOnViewDidLoad;
- (void)setupConstraintsOnViewDidLoad;
- (void)bindViewModelOnViewDidLoad;
- (id)businessHandlers;
- (void)setupUIOnViewDidLayoutSubviews;
- (void)handleApplicationWillResignActiveNotification;
- (id)listAdapter;
- (void)p_updateAwemeListSection;
- (void)handleDetailInfoFetchStateChange;
- (void)handleAwemeListInitFetchStatusChange;
- (id)noMoreTipLabel;
- (id)networkErrorContainerViewForHandler:;
- (void)clickedErrorViewPrimaryButton:;
- (id)infiniteScrollingViewForHandler:;
- (id)noMoreTipLabelForHandler:;
- (void)showEmptyAwemeList;
- (BOOL)needAmendEmptyAwemeListView;
- (BOOL)needAmendEmptyAwemeListTip;
- (void)handleDetailPageRefresh;
- (void)setBusinessHandlers:;
- (id)collectionView;
- (id)init;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setCollectionView:;
- (void)scrollViewDidEndDecelerating:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:;
- (id)serviceProvider;
@end
