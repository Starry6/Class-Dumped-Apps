@interface AWEKnowledgeRichContentImpl.InspirationSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)didSelectItemAtIndex:model:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (id)init;
- (void).cxx_destruct;
@end
