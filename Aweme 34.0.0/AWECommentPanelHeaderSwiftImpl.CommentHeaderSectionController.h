@interface AWECommentPanelHeaderSwiftImpl.CommentHeaderSectionController : AWEBaseListSectionController
@property (nonatomic) @? didUpdateHeight;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)commentPanelDidDismiss;
- (void)commentPanelDidShow;
- (id)didUpdateHeight;
- (void)setDidUpdateHeight:;
- (id)init;
- (Class)cellClass;
- (double)currentHeight;
- (void).cxx_destruct;
- (double)separatorHeight;
+ (Class)sectionViewModelClass;
@end
