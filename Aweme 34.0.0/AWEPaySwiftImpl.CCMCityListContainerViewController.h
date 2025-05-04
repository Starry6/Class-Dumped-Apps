@interface AWEPaySwiftImpl.CCMCityListContainerViewController : AWEBaseListViewController
@property (nonatomic) q preferredStatusBarStyle;
- (void)transition_didPopDoneTransitionWithContext:;
- (void)listDidReloadDataWithCollectionView:;
- (void)listDidPerformBatchUpdatesWithCollectionView:;
- (void)dux_backAction;
- (void)customLayoutCollectionView:;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:forSectionViewModel:;
- (BOOL)enableStickHeader;
- (BOOL)shouldStickHeaderAtSectionIndex:sectionController:;
- (void)viewDidLoad;
- (void)scrollViewDidScroll:;
- (long long)preferredStatusBarStyle;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithCoder:;
- (void)setupCollectionView:;
@end
