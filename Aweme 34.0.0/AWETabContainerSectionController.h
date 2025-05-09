@interface AWETabContainerSectionController : AWEBaseListSectionController
@property (nonatomic) UIView<AWEListKitSegmentedControlProtocol> segmentedControl;
@property (nonatomic) AWETabContentViewController tabContentViewController;
@property (nonatomic) q selectedIndex;
@property (nonatomic) q itemCount;
@property (nonatomic) BOOL hideSegmentedControl;
@property (nonatomic) <AWETabContainerSectionControllerDataSource> dataSource;
@property (nonatomic) <AWETabContainerSectionControllerDelegate> delegate;
@property (nonatomic) UICollectionView contentScrollView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidAppear:;
- (void)viewControllerWillDisappear:isBeingDismissed:isMovingFromParentViewController:;
- (void)viewControllerDidDisappear:;
- (void)configSupplementaryHeaderView:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (BOOL)lazyAccessItemViewControllerForTabContent;
- (BOOL)segmentedControlShouldSelectIndex:fromIndex:;
- (void)segmentedControlDidChangedValue:;
- (void)segmentedControlDidTapAtIndex:;
- (BOOL)enableSegmentedControl;
- (void)updateAndNotifySelectedIndex:isByTap:;
- (id)tabContentViewController;
- (void)scrollToItemWithAnimated:;
- (id)itemViewControllerAtIndex:;
- (void)setHideSegmentedControl:;
- (void)setTabContentViewController:;
- (BOOL)lazyAccessItemViewController;
- (BOOL)hideSegmentedControl;
- (void)tabContentViewController:didCreateCollectionView:;
- (id)itemViewControllerForTabContentViewController:atIndex:;
- (void)tabContentViewController:contentDidScroll:;
- (void)tabContentViewController:didScrollToIndex:;
- (BOOL)tabContentViewControllerShouldDisableAccessibilityAutoScroll:;
- (void)updateSegmentedControlVisible:animated:;
- (void)setSelectedIndex:;
- (id)delegate;
- (id)contentScrollView;
- (long long)itemCount;
- (Class)cellClass;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (void)setDataSource:;
- (void)setDelegate:;
- (id)dataSource;
- (id)segmentedControl;
- (id)selectedViewController;
- (void)setItemCount:;
- (void)setSegmentedControl:;
- (void)scrollToItemAtIndex:animated:;
- (double)segmentedControlHeight;
- (Class)headerViewClass;
@end
