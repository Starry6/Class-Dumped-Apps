@interface AWEGuestLikeListSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)didSelectItemAtIndex:model:;
- (double)calculateItemWidth;
- (id)init;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (long long)numberOfItemsPerRow;
@end
