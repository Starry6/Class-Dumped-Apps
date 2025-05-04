@interface AWENewVideoCoverTextTemplateCollectionCell : AWETextTemplateCollectionViewCell
- (void)updateIconImageIfNeededWithSticker:forCell:atIndexPath:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
@end
