@interface AWEKnowledgeRichContentImpl.FullPageZeroCommentSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)clickAlbumIcon;
- (void)clickAtIcon;
- (void)clickEmojiIcon;
- (long long)waterfallColumnCount;
- (void)enterProfile;
- (void)clickCommentInputView;
- (id)init;
- (void).cxx_destruct;
- (Class)headerViewClass;
@end
