@interface AWECommentPanelListSwiftImpl.CommentGuideTipsSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (long long)waterfallColumnCount;
- (id)init;
- (Class)cellClass;
@end
