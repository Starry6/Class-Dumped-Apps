@interface AWEMateSearchResultSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)didSelectItemAtIndex:model:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (id)init;
- (Class)headerViewClass;
@end
