@interface AWEKnowledgeRichContentImpl.FullpageFeedContainerV2ViewController : AWEBaseTabListViewController
- (id)transition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (id)initWithNibName:bundle:viewModel:;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:index:;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (id)marginsForSegmentedControl;
- (void)updateSegmentedControl:itemModelsArray:itemConfigsArray:;
- (void)tabListContainerScrollViewDidScroll:;
- (void)tabListContainerScrollViewWillBeginDragging:;
- (void)tabListContainerDidEndScrolling:;
- (BOOL)tabContentUseMaxHeight;
- (void)tabListContainerScrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (void)setupTabListWithConfig:;
- (double)bottomSafeAreaForTabList;
- (void)onViewClickedWithGes:;
- (void)onViewSingleClickedWithLocation:;
- (void)onViewDoubleClickedWithGes:;
- (double)topSafeAreaForTabList;
- (BOOL)tabListShouldPreloadTabItemAtIndex:;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:bundle:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (Class)viewModelClass;
+ (Class)viewHolderClass;
@end
