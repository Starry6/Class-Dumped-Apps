@interface STComment.EmojiPanelView : UIView
- (void)scrollViewDidEndDecelerating:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)onBackspaceButtoon;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
