@interface AWETheaterMorePlaceHolderSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)configSupplementaryHeaderView:;
- (id)init;
- (Class)cellClass;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (Class)headerViewClass;
@end
