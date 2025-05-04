@interface AWECommentPanelListSwiftImpl.CommentFoldSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (long long)waterfallColumnCount;
- (id)init;
@end
