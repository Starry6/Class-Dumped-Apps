@interface STComment.MentionController : NSObject
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)scrollViewDidEndDecelerating:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)scrollViewWillBeginDragging:;
- (void)collectionView:didEndDisplayingCell:forItemAtIndexPath:;
- (void)mentionButtonTappedWithSender:;
- (id)init;
- (void).cxx_destruct;
@end
