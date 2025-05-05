@interface STDiscovery.DiscoveryMixedCategoryView : UICollectionView
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:collectionViewLayout:;
- (id)init;
- (void)selectItemAtIndexPath:animated:scrollPosition:;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (void).cxx_destruct;
@end
