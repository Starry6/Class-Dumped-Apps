@interface AWEFavoriteSegmentedControl : IESSegmentedControl
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) NSMutableArray fullExposedItemList;
@property (nonatomic) DUXPopover popover;
@property (nonatomic) BOOL isShowingPopover;
@property (nonatomic) <AWEFavoriteSegmentedControlDelegate> delegateCustom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)popoverDidDisappear:;
- (void)scrollViewDidEndScroll;
- (void)setIsShowingPopover:;
- (BOOL)isShowingPopover;
- (void)hideBubble;
- (void)checkIfCellExpose:;
- (void)setFullExposedItemList:;
- (id)fullExposedItemList;
- (void)checkVisibleCellExposeStatusWithDelay;
- (void)checkVisibleCellExposeStatus;
- (id)delegateCustom;
- (void)showBubbleAtIndex:text:completion:;
- (void)setDelegateCustom:;
- (void)setIsScrolling:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (id)popover;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (BOOL)isScrolling;
- (void)setPopover:;
- (void)reloadItemAtIndex:;
+ (id)defaultFavoriteSegmentControl;
@end
