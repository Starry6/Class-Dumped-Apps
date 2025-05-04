@interface AWEFeedCollectionViewForSearchController : AWEFeedCollectionViewController
@property (nonatomic) BOOL clickItem;
- (id)zoomTransitionStartViewForOffset:;
- (BOOL)cellCompleteVisibleWithIndex:animation:;
- (BOOL)supportsShowingRecommendedVideos;
- (BOOL)shouldTraceCellBindCost;
- (void)setClickItem:;
- (BOOL)clickItem;
- (void)collectionView:didSelectItemAtIndexPath:;
@end
