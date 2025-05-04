@interface AWECommentLongPressPanelSwiftImpl.CommentLongPressPanelNormalSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)viewControllerWillDisappear:isBeingDismissed:isMovingFromParentViewController:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryFooterView:;
- (id)init;
- (double)separatorHeight;
- (Class)footerViewClass;
+ (Class)sectionViewModelClass;
@end
