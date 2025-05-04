@interface AWECommonUserListViewController : AWEBaseListViewController
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) BOOL refreshing;
@property (nonatomic) NSString navTitle;
- (void)customLayoutCollectionView:;
- (id)sectionControllerClassArray;
- (void)backBtnClicked;
- (void)addBinding;
- (void)configNavigationBar;
- (id)collectionView;
- (id)init;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)loadingView;
- (void)setCollectionView:;
- (void)endRefreshing;
- (void).cxx_destruct;
- (BOOL)refreshing;
- (void)setupUI;
- (void)setRefreshing:;
- (id)navTitle;
- (void)showLoadingView;
- (void)setupCollectionView:;
- (void)setNavTitle:;
- (void)hideLoadingView;
@end
