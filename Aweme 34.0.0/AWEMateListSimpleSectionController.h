@interface AWEMateListSimpleSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)viewControllerDidAppear:;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (id)init;
- (id)inset;
- (Class)headerViewClass;
@end
