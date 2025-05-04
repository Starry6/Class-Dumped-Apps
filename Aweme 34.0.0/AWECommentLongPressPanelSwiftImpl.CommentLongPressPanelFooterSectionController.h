@interface AWECommentLongPressPanelSwiftImpl.CommentLongPressPanelFooterSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
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
