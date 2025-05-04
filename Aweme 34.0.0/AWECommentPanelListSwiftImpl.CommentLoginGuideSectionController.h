@interface AWECommentPanelListSwiftImpl.CommentLoginGuideSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:model:;
- (id)init;
@end
