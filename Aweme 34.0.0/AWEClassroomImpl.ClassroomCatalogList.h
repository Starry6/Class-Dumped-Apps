@interface AWEClassroomImpl.ClassroomCatalogList : UIView
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:didEndDisplayingCell:forItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
