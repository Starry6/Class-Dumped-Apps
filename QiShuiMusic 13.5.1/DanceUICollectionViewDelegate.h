@interface DanceUICollectionViewDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scrollViewDidEndDecelerating:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:;
- (void)collectionView:didEndDisplayingSupplementaryView:forElementOfKind:atIndexPath:;
- (void)scrollViewDidScroll:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)collectionView:didEndDisplayingCell:forItemAtIndexPath:;
@end
