@interface AWEFeedPlayControlImpl.PureModePageSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)configSupplementaryFooterView:;
- (id)init;
- (Class)cellClass;
- (Class)footerViewClass;
+ (Class)sectionViewModelClass;
@end
