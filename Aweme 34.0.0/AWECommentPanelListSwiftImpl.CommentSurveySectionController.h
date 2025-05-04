@interface AWECommentPanelListSwiftImpl.CommentSurveySectionController : AWEBaseListSectionController
- (void)container:didChangeIntrinsicContentSize:;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (long long)waterfallColumnCount;
- (id)init;
- (void)dealloc;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)separatorInsets;
@end
