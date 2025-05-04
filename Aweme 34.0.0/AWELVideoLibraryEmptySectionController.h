@interface AWELVideoLibraryEmptySectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidAppear:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (Class)cellClass;
@end
