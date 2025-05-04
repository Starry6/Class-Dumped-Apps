@interface AWEFansListCategorySectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (id)separatorColor;
- (Class)cellClass;
- (id)separatorInsets;
@end
