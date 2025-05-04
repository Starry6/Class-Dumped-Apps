@interface AWECommentPanelListSwiftImpl.CommentListStatusSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (long long)waterfallColumnCount;
- (id)init;
- (id)sectionBackgroundColor;
- (id)separatorInsets;
+ (Class)sectionViewModelClass;
@end
