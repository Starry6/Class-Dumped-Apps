@interface AWEKnowledgeRichContentImpl.FullPageFeedTabListViewController : AWEBaseTabListViewController
@property (nonatomic) UIScrollView currentScrollView;
- (id)initWithNibName:bundle:viewModel:;
- (void)setupContainerScrollView:;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:index:;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (void)updateSegmentedControl:itemModelsArray:itemConfigsArray:;
- (void)tabListContainerScrollViewDidScroll:;
- (void)tabListContainerScrollViewWillBeginDragging:;
- (void)tabListContainerScrollViewDidEndDragging:willDecelerate:;
- (void)tabListContainerDidEndScrolling:;
- (void)tabListDidTapItemAtIndex:;
- (BOOL)tabContentUseMaxHeight;
- (void)segmentedControl:didTapAtIndex:;
- (id)initWithLocationCofig:containerContext:;
- (void)tabListContainerScrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (void)updateItemTitleWithItemTitle:locationType:;
- (id)tabItemVCForType:;
- (void)setupTabListWithConfig:;
- (id)feedListForType:;
- (id)currentScrollView;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
