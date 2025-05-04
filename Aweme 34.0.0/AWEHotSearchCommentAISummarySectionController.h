@interface AWEHotSearchCommentAISummarySectionController : AWECommonFeedBaseSectionController
@property (nonatomic) UIViewController<AWECommentListViewControllerProtocol> commentVC;
- (id)referString;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (id)commentVC;
- (void)setCommentVC:;
- (id)hotspotID;
- (id)innerViewModel;
- (void).cxx_destruct;
- (Class)footerViewClass;
- (Class)headerViewClass;
@end
