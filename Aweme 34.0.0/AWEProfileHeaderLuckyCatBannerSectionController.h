@interface AWEProfileHeaderLuckyCatBannerSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (Class)cellClass;
- (BOOL)showSeparator;
@end
