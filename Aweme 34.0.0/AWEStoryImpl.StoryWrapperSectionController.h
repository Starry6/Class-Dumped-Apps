@interface AWEStoryImpl.StoryWrapperSectionController : AWEStoryImpl.StoryBaseSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (void)sectionWillDisplaySupplementaryView:;
- (void)sectionDidEndDisplayingSupplementaryView:;
- (void)configSupplementaryFooterView:;
- (id)init;
- (void).cxx_destruct;
- (Class)footerViewClass;
- (Class)headerViewClass;
@end
