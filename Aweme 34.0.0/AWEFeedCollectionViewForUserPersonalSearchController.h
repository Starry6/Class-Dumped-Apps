@interface AWEFeedCollectionViewForUserPersonalSearchController : AWEFeedCollectionViewForSearchController
- (BOOL)supportsShowingRecommendedVideos;
- (BOOL)shouldTraceCellBindCost;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (double)footerInset;
@end
