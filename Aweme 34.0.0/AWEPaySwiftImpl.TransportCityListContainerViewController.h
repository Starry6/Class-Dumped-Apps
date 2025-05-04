@interface AWEPaySwiftImpl.TransportCityListContainerViewController : AWEBaseListViewController
@property (nonatomic) q preferredStatusBarStyle;
- (void)transition_didPopDoneTransitionWithContext:;
- (void)listDidReloadDataWithCollectionView:;
- (void)listDidPerformBatchUpdatesWithCollectionView:;
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
- (id)initWithCoder:;
- (void)setupCollectionView:;
@end
