@interface AWEStoryImpl.StoryMateRecommendVerticalSectionController : AWEStoryImpl.StoryBaseSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidDisappear:;
- (void)listAdapter:didScrollSectionController:;
- (void)listAdapter:willBeginDraggingSectionController:;
- (void)listAdapter:didEndDraggingSectionController:willDecelerate:;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (void)configSupplementaryFooterView:;
- (id)cellIdentifierForModel:index:;
- (id)init;
- (Class)footerViewClass;
- (Class)headerViewClass;
@end
