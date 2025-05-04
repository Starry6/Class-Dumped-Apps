@interface AWEPadBaseListSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)containerViewDidAppear;
- (void)containerViewDidDisappear;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (BOOL)canMoveItemAtIndex:;
- (id)cellContentSizeWithCollectionViewSize:;
- (long long)numberOfItemsInOnLineWithCollectionViewSize:;
- (void)containerViewDidRefresh;
- (void)containerViewWillRefresh;
- (long long)numberOfItems;
- (double)separatorHeight;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)moveObjectFromIndex:toIndex:;
- (Class)headerViewClass;
+ (Class)sectionViewModelClass;
@end
