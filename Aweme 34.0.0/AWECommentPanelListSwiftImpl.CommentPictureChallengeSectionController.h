@interface AWECommentPanelListSwiftImpl.CommentPictureChallengeSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (long long)waterfallColumnCount;
- (void)didSelectItemAtIndex:model:;
- (id)init;
@end
