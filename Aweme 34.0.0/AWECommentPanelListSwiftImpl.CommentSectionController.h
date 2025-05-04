@interface AWECommentPanelListSwiftImpl.CommentSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)viewControllerWillDisappear:isBeingDismissed:isMovingFromParentViewController:;
- (id)sizeForFooterWithCollectionViewSize:;
- (long long)waterfallColumnCount;
- (void)didSelectItemAtIndex:model:;
- (void)sectionWillDisplaySupplementaryView:;
- (void)sectionDidEndDisplayingSupplementaryView:;
- (void)configSupplementaryFooterView:;
- (void)updateFinalLayoutAttributes:forDisappearingCellAtIndex:isDeleted:;
- (id)init;
- (void)dealloc;
- (id)sectionBackgroundColor;
- (void).cxx_destruct;
- (double)separatorHeight;
- (id)separatorInsets;
- (Class)footerViewClass;
+ (Class)sectionViewModelClass;
@end
