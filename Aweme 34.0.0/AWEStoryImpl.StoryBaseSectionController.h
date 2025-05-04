@interface AWEStoryImpl.StoryBaseSectionController : AWEBaseListSectionController
@property (nonatomic) @ viewModel;
- (void)sectionControllerWillDisplay:;
- (void)sectionControllerDidEndDisplaying:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (id)sizeForFooterWithCollectionViewSize:;
- (id)init;
- (id)viewModel;
@end
